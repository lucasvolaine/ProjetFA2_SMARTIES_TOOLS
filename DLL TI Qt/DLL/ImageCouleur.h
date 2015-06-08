// ajouter  devant tout public pour permettre � la dll d'exporter ces m�thodes
// pour qu'elles puissent �tre utilis�es par d'autres applications ou programmes

#ifndef _IMAGE_COULEUR_
#define _IMAGE_COULEUR_

// d�finition classe Image format bmp
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
         CImageCouleur();
         CImageCouleur(int hauteur, int largeur, int valR=-1, int valV=-1, int valB=-1); // si -1 alors non pixels non initialis�s
         CImageCouleur(const std::string& nom);
         CImageCouleur(const CImageCouleur& im);

         ~CImageCouleur(); // destructeur

		// sauvegarde au format bmp
         void sauvegarde(); // sauvegarde data au format BMP

		// pouvoir acc�der � un pixel par image(i,j)[plan]
         unsigned char*& operator() (int i, int j) const {
		return m_ppucPixel[i*m_iLargeur+j];
		}

		// pouvoir acc�der � un pixel par image(i)[plan]
         unsigned char*& operator() (int i) const {
		return m_ppucPixel[i];
		}
		// op�rateur copie image par imOut = imIn
         CImageCouleur  &operator=(const CImageCouleur& im);

		// get et set 

         int lireHauteur() const {
		return m_iHauteur;
		}

         int lireLargeur() const {
		return m_iLargeur;
		}

         std::string lireNom() const {
		return m_sNom;
		}

         void ecrireHauteur(int hauteur) {
		m_iHauteur = hauteur;
		}

         void ecrireLargeur(int largeur) {
		m_iLargeur = largeur;
		}

         void ecrireNom(std::string nom) {
		m_sNom = nom;
		}

         int lireNbPixels() const {
		return m_iHauteur*m_iLargeur;
		}

		// histogramme = 3 x plans 
         std::vector<std::vector<unsigned long>> histogramme(bool enregistrementCSV = false, int pas=1); // 1 : pas de quantification

		// gestion des plans
         CImageNdg plan(int choix = 3, float poidsRouge=1./3., float poidsVert=1./3., float poidsBleu=1./3.); // 0 -> R ou H, 1 -> V ou S, 2 -> B ou V et 4 -> luminance d'o� les poids fct de l'illuminant
         CImageCouleur& miseAJourPlan(int choix, const CImageNdg& plan);

		// changements d'espace couleur : HSV
         CImageCouleur conversion(const std::string& methode = "HSV") const;

		// transformation
         CImageCouleur transformation(const std::string& methode,int vMinOut=0, int vMaxOut=255);

		// morphologie
		
};

#endif _IMAGE_COULEUR_
