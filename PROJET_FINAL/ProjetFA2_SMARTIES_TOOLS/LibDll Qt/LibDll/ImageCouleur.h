// ajouter Q_DECL_EXPORT devant tout public pour permettre à la dll d'exporter ces méthodes
// pour qu'elles puissent être utilisées par d'autres applications ou programmes
#include "libdll_global.h"

#ifndef _IMAGE_COULEUR_
#define _IMAGE_COULEUR_

// définition classe Image format bmp
#include <vector>
#include <string>

#include "ImageNdg.h"

#define MIN3(x,y,z)  ((y) <= (z) ? ((x) <= (y) ? (x) : (y)) : ((x) <= (z) ? (x) : (z)))
#define MAX3(x,y,z)  ((y) >= (z) ? ((x) >= (y) ? (x) : (y)) : ((x) >= (z) ? (x) : (z)))

class CImageCouleur {

	///////////////////////////////////////
	private : 
	///////////////////////////////////////

		int              m_iHauteur;
		int              m_iLargeur;
		std::string      m_sNom;
		unsigned char*   m_pucData;
		unsigned char**  m_ppucPixel; 

	///////////////////////////////////////
	public : 
	///////////////////////////////////////

		// constructeurs
        Q_DECL_EXPORT CImageCouleur();
        Q_DECL_EXPORT CImageCouleur(int hauteur, int largeur, int valR=-1, int valV=-1, int valB=-1); // si -1 alors non pixels non initialisés
        Q_DECL_EXPORT CImageCouleur(const std::string& nom);
        Q_DECL_EXPORT CImageCouleur(const CImageCouleur& im);

        Q_DECL_EXPORT ~CImageCouleur(); // destructeur

		// sauvegarde au format bmp
        Q_DECL_EXPORT void sauvegarde(); // sauvegarde data au format BMP

		// pouvoir accéder à un pixel par image(i,j)[plan]
        Q_DECL_EXPORT unsigned char*& operator() (int i, int j) const {
		return m_ppucPixel[i*m_iLargeur+j];
		}

		// pouvoir accéder à un pixel par image(i)[plan]
        Q_DECL_EXPORT unsigned char*& operator() (int i) const {
		return m_ppucPixel[i];
		}
		// opérateur copie image par imOut = imIn
        Q_DECL_EXPORT CImageCouleur  &operator=(const CImageCouleur& im);

		// get et set 

        Q_DECL_EXPORT int lireHauteur() const {
		return m_iHauteur;
		}

        Q_DECL_EXPORT int lireLargeur() const {
		return m_iLargeur;
		}

        Q_DECL_EXPORT std::string lireNom() const {
		return m_sNom;
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

        Q_DECL_EXPORT int lireNbPixels() const {
		return m_iHauteur*m_iLargeur;
		}

		// histogramme = 3 x plans 
        //Q_DECL_EXPORT std::vector<std::vector<unsigned long>> histogramme(bool enregistrementCSV = false, int pas=1); // 1 : pas de quantification

		// gestion des plans
        Q_DECL_EXPORT CImageNdg plan(int choix = 3, float poidsRouge=1./3., float poidsVert=1./3., float poidsBleu=1./3.); // 0 -> R ou H, 1 -> V ou S, 2 -> B ou V et 4 -> luminance d'où les poids fct de l'illuminant
        Q_DECL_EXPORT CImageCouleur& miseAJourPlan(int choix, const CImageNdg& plan);

		// changements d'espace couleur : HSV
        Q_DECL_EXPORT CImageCouleur conversion(const std::string& methode = "HSV") const;

		// transformation
        Q_DECL_EXPORT CImageCouleur transformation(const std::string& methode,int vMinOut=0, int vMaxOut=255);

		// morphologie
		
};

#endif _IMAGE_COULEUR_
