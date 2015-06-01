// ajouter Q_DECL_EXPORT devant tout public pour permettre � la dll d'exporter ces m�thodes
// pour qu'elles puissent �tre utilis�es par d'autres applications ou programmes

#ifndef _IMAGE_NDG_
#define _IMAGE_NDG_

#include "libdll_global.h"

// d�finition classe Image Ndg format bmp
#include <vector>
#include <string>

typedef struct {
	int		minNdg;
	int		maxNdg;
	int		medianeNdg;
	float	moyenneNdg;
	float	ecartTypeNdg;
} MOMENTS;

class CImageNdg {

	///////////////////////////////////////
	private : 
	///////////////////////////////////////

		int              m_iHauteur;
		int              m_iLargeur;  
		bool			 m_bBinaire;	
		std::string      m_sNom;
		unsigned char*   m_pucPixel;

		unsigned char*   m_pucPalette; 

	///////////////////////////////////////
	public : 
	///////////////////////////////////////

		// constructeurs
        Q_DECL_EXPORT CImageNdg(); // par d�faut
        Q_DECL_EXPORT CImageNdg(int hauteur, int largeur, int val=-1); // si -1 alors non pixels non initialis�s
        Q_DECL_EXPORT CImageNdg(const std::string& nom); // fichier en entr�e
        Q_DECL_EXPORT CImageNdg(const CImageNdg& im); // image en entr�e

		// destructeur
        Q_DECL_EXPORT ~CImageNdg();

		// sauvegarde au format bmp
        Q_DECL_EXPORT void sauvegarde(); // sauvegarde data au format BMP

		// pouvoir acc�der � un pixel par image(i)
        Q_DECL_EXPORT unsigned char& operator() (int i) const {
		return m_pucPixel[i];
		}

		// pouvoir acc�der � un pixel par image(i,j)
        Q_DECL_EXPORT unsigned char& operator() (int i, int j) const {
		return m_pucPixel[i*m_iLargeur+j];
		}

		// op�rateur copie image par imOut = imIn
        Q_DECL_EXPORT CImageNdg& operator=(const CImageNdg& im);

		// get et set 

        Q_DECL_EXPORT int lireHauteur() const {
		return m_iHauteur;
		}

        Q_DECL_EXPORT int lireLargeur() const {
		return m_iLargeur;
		}

        Q_DECL_EXPORT bool lireBinaire() const {
		return m_bBinaire;
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

        Q_DECL_EXPORT void ecrireBinaire(bool type) {
		m_bBinaire = type;
		}

        Q_DECL_EXPORT void ecrireNom(std::string nom) {
		m_sNom = nom;
		}

        Q_DECL_EXPORT int lireNbPixels() const {
		return m_iHauteur*m_iLargeur;
		}

        Q_DECL_EXPORT void choixPalette(const std::string& name = "grise") {
			if (name.compare("rouge") == 0) {
				for (int indice=0;indice<256;indice ++) {
					this->m_pucPalette[indice*4]   = 0;
					this->m_pucPalette[indice*4+1] = 0;
					this->m_pucPalette[indice*4+2] = (unsigned char)(indice);
					this->m_pucPalette[indice*4+3] = 0;
				}
			}
			else
				if (name.compare("verte") == 0) {
					for (int indice=0;indice<256;indice ++) {
						this->m_pucPalette[indice*4]   = 0;
						this->m_pucPalette[indice*4+1] = (unsigned char)(indice);
						this->m_pucPalette[indice*4+2] = 0;
						this->m_pucPalette[indice*4+3] = 0;
					}
				}
				else
					if (name.compare("bleue") == 0) {
						for (int indice=0;indice<256;indice ++) {
							this->m_pucPalette[indice*4]   = (unsigned char)(indice);
							this->m_pucPalette[indice*4+1] = 0;
							this->m_pucPalette[indice*4+2] = 0;
							this->m_pucPalette[indice*4+3] = 0;
						}
					}
					else
						if (name.compare("binaire") == 0) {
							// fond toujours � 0
							this->m_pucPalette[0] = 0; this->m_pucPalette[1] = 0; this->m_pucPalette[2] = 0; this->m_pucPalette[3] = 0;

							// 9 couleurs de base
							// ensuite p�riodicit�, de sorte que l'objet 1 a le m�me label que l'objet 10 par exemple
							this->m_pucPalette[4]  = 255; this->m_pucPalette[5] = 0;    this->m_pucPalette[6] = 0;    this->m_pucPalette[7] = 0;
							this->m_pucPalette[8]  = 0;   this->m_pucPalette[9] = 255;  this->m_pucPalette[10] = 0;   this->m_pucPalette[11] = 0;
							this->m_pucPalette[12] = 0;   this->m_pucPalette[13] = 0;   this->m_pucPalette[14] = 255; this->m_pucPalette[15] = 0;
							this->m_pucPalette[16] = 255; this->m_pucPalette[17] = 255; this->m_pucPalette[18] = 0;   this->m_pucPalette[19] = 0;
							this->m_pucPalette[20] = 0;   this->m_pucPalette[21] = 255; this->m_pucPalette[22] = 255; this->m_pucPalette[23] = 0;
							this->m_pucPalette[24] = 255; this->m_pucPalette[25] = 0;   this->m_pucPalette[26] = 255; this->m_pucPalette[27] = 0;
							this->m_pucPalette[28] = 0;   this->m_pucPalette[29] = 128; this->m_pucPalette[30] = 255; this->m_pucPalette[31] = 0;
							this->m_pucPalette[32] = 128; this->m_pucPalette[33] = 0;   this->m_pucPalette[34] = 255; this->m_pucPalette[35] = 0;
							this->m_pucPalette[36] = 128; this->m_pucPalette[37] = 255; this->m_pucPalette[38] = 0;   this->m_pucPalette[39] = 0;

							for (int indice=10;indice<256;indice ++) {
								this->m_pucPalette[indice*4]   = this->m_pucPalette[indice*4-36];
								this->m_pucPalette[indice*4+1] = this->m_pucPalette[indice*4+1-36];;
								this->m_pucPalette[indice*4+2] = this->m_pucPalette[indice*4+2-36];;
								this->m_pucPalette[indice*4+3] = 0;
							}
						}
						else // palette gris
							for (int indice=0;indice<256;indice ++) {
								this->m_pucPalette[indice*4]   = (unsigned char)(indice);
								this->m_pucPalette[indice*4+1] = (unsigned char)(indice);
								this->m_pucPalette[indice*4+2] = (unsigned char)(indice);
								this->m_pucPalette[indice*4+3] = 0;
							}
		}
		
        Q_DECL_EXPORT void choixPalette(std::vector<int>& map) { // couleurs donn�es par tableau de 256 couleurs RGB)
			for (int indice=0;indice<256;indice ++) {
				this->m_pucPalette[indice*4]   = (unsigned char)map[indice*3+2];
				this->m_pucPalette[indice*4+1] = (unsigned char)map[indice*3+1];
				this->m_pucPalette[indice*4+2] = (unsigned char)map[indice*3];
				this->m_pucPalette[indice*4+3] = 0;
			}
		}

        Q_DECL_EXPORT std::vector<int> lirePalette() { // palette image sortie au format tableau de 256 couleurs RGB
			// palette image sortie au format tableau de 256 couleurs RGB
			std::vector<int> palette;
			palette.resize(256*3);
			for (int indice=0;indice<256;indice ++) {
				palette[indice*3+2] = this->m_pucPalette[indice*4];
				palette[indice*3+1] = this->m_pucPalette[indice*4+1];
				palette[indice*3] = this->m_pucPalette[indice*4+2];
			}
			return palette;
		}

		// histogramme
        Q_DECL_EXPORT std::vector<unsigned long> histogramme(bool enregistrementCSV = false, int pas=1); // 1 : pas de quantification

		// signatures
        Q_DECL_EXPORT MOMENTS signatures(const std::vector<unsigned long>& h);
        Q_DECL_EXPORT MOMENTS signatures();

		// op�rations ensemblistes pour images binaires
        Q_DECL_EXPORT CImageNdg& operation(const CImageNdg& im, const std::string& methode = "et");

		// seuillage
        Q_DECL_EXPORT CImageNdg seuillage(const std::string& methode = "manuel", int seuilBas = 128, int seuilHaut = 255);

		// transformation
        Q_DECL_EXPORT CImageNdg transformation(const std::string& methode = "complement", int vMinOut = 0, int vMaxOut = 255); // sortie sur [vMinOut,vMaxOut] pour expansion notamment

		// morphologie
        Q_DECL_EXPORT CImageNdg morphologie(const std::string& methode = "erosion", const std::string& eltStructurant = "V8");

		// filtrage
        Q_DECL_EXPORT CImageNdg filtrage(const std::string& methode = "moyennage", int N = 3);

		// image int�grale
        //Q_DECL_EXPORT std::vector<std::vector<double>> CImageNdg::imageIntegrale();
};

#endif _IMAGE_NDG_
