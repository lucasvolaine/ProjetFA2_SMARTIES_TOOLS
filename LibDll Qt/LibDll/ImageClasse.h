// ajouter Q_DECL_EXPORT devant tout public pour permettre à la dll d'exporter ces méthodes
// pour qu'elles puissent être utilisées par d'autres applications ou programmes
#include "libdll_global.h"

#ifndef _IMAGE_CLASSE_
#define _IMAGE_CLASSE_

#include <string>
#include <vector>

#include "ImageNdg.h"
#include "ImageCouleur.h"

#define EUCLIDEAN(a,b) ((a-b) * (a-b)) 
#define MAX_ITER 100

typedef struct  {
	float  moyenne;
	int    surface;
} SIGNATURE_Ndg;

typedef struct  {
	float  moyenne[3];
	int    surface;
} SIGNATURE_Couleur;

typedef struct {
	float		centreGravite_i;
	float		centreGravite_j;
	int			surface;
	std::string codeFreeman; // au sens V8
	int			premierPt_i; // premier point rencontré sens de parcours avant
	int			premierPt_j;
	int			rectEnglob_Hi; // coins supérieur gauche et inférieur droit
	int			rectEnglob_Hj;
	int			rectEnglob_Bi;
	int			rectEnglob_Bj;
	float		perimetre; // au sens V8
	float       histoFreeman[8];

} SIGNATURE_Forme;

// définition classe Image Classe --> images étiquetées pour analyse objets, nuées dynamiques pour analyse régions

class CImageClasse {

	///////////////////////////////////////
	private : 
	///////////////////////////////////////

		int              m_iHauteur;
		int              m_iLargeur;
		std::string      m_sNom;
		long			 m_lNbRegions;

		unsigned long*   m_pucPixel;

	///////////////////////////////////////
	public : 
	///////////////////////////////////////
		
		// constructeurs
        Q_DECL_EXPORT CImageClasse();
        Q_DECL_EXPORT CImageClasse(int hauteur, int largeur);
        Q_DECL_EXPORT CImageClasse(const CImageNdg& im, std::string choix = "V8"); // objets
        Q_DECL_EXPORT CImageClasse(const CImageClasse& in, std::string choix = "sans", std::string voisinage = "V8"); // re-étiquetage éventuel
        Q_DECL_EXPORT CImageClasse(const CImageNdg& im, int nbClusters = 2, std::string choix = "aleatoire"); // clustering
        Q_DECL_EXPORT CImageClasse(const CImageCouleur& im, int nbClusters = 2, std::string choix = "aleatoire", int plan=0); // plan dans HSV, non dans espace 3D

        Q_DECL_EXPORT ~CImageClasse(); // destructeur

		// sauvegarde au format bmp
		// attention : cast des informations car pertes potentielles
       void sauvegarde(); // sauvegarde data au format BMP avec cast des long en char

		// pouvoir accéder à un pixel par image(i)
        Q_DECL_EXPORT unsigned long& operator() (int i) const {
		return m_pucPixel[i];
		}

		// pouvoir accéder à un pixel par image(i,j)
        Q_DECL_EXPORT unsigned long& operator() (int i, int j) const {
		return m_pucPixel[i*m_iLargeur+j];
		}

		// opérateur copie image par imOut = imIn
        Q_DECL_EXPORT CImageClasse& operator=(const CImageClasse& im);

		// get et set 

        Q_DECL_EXPORT int lireHauteur() const {
		return m_iHauteur;
		}

        Q_DECL_EXPORT int lireLargeur() const {
		return m_iLargeur;
		}

        Q_DECL_EXPORT int lireNbRegions() const {
		return m_lNbRegions;
		}

        Q_DECL_EXPORT std::string lireNom() const {
		return m_sNom;
		}

        Q_DECL_EXPORT int lireNbPixels() const {
		return m_iHauteur*m_iLargeur;
		}

        Q_DECL_EXPORT void ecrireHauteur(int hauteur) {
		m_iHauteur = hauteur;
		}

        Q_DECL_EXPORT void ecrireLargeur(int largeur) {
		m_iLargeur = largeur;
		}

        Q_DECL_EXPORT void ecrireNom(std::string nom) {
		m_sNom = nom;
		}

        Q_DECL_EXPORT void ecrireNbRegions(int nb) {
		m_lNbRegions = nb;
		}

		// signatures pour Image_Ndg et Image_Couleur
        Q_DECL_EXPORT std::vector<SIGNATURE_Ndg> signatures(const CImageNdg& img, bool enregistrementCSV = false);
        Q_DECL_EXPORT std::vector<SIGNATURE_Couleur> signatures(const CImageCouleur& img, bool enregistrementCSV = false);

		// affichage
        Q_DECL_EXPORT CImageCouleur affichage(const std::vector<SIGNATURE_Couleur>& tab, const std::string& methode = "moyenne");

		// sélection région par région
        Q_DECL_EXPORT CImageClasse selection(const std::string& methode = "selection", int classe=0);

		// filtrage selon critères taille, bords, etc
        Q_DECL_EXPORT CImageClasse filtrage(const std::string& methode = "taille", int taille=50, bool miseAZero = true);

		// signatures forme pour Image_Ndg et Image_Couleur
        Q_DECL_EXPORT std::vector<SIGNATURE_Forme> signatures(bool enregistrementCSV = false);


        /*Q_DECL_EXPORT CImageClasse CImageClasse::mutation(const CImageNdg& img); // Erreur

        Q_DECL_EXPORT CImageNdg CImageClasse::mutation(const std::string& methode = "troncature");

        Q_DECL_EXPORT CImageClasse CImageClasse::distance(std::string eltStructurant, unsigned long valBord);

        Q_DECL_EXPORT CImageClasse CImageClasse::croissanceRegion(const CImageNdg& in, int iGerme, int jGerme, double tolerance);

        Q_DECL_EXPORT CImageCouleur CImageClasse::affichage(const std::vector<SIGNATURE_Ndg>& tab, int R=255, int G=0, int B=0);*/
};

#endif _IMAGE_CLASSE_
