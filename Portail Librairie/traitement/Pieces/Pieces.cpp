#include <iostream>
#include <ctime>
#include <fstream>
#include <sstream>
using namespace std;

#include "ImageNdg.h"
#include "ImageClasse.h"

void main(void) {
	try {
		time_t debut;
		time(&debut);

		std::string name_img("euros.bmp");

		///////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////


		/*CImageCouleur img(name_img);*/
		CImageNdg imgNDG(name_img);
		CImageCouleur imgC(name_img);

		//imgNDG = img.plan(0); // Renvoi image Ndg
		//imgNDG.sauvegarde();

		/*imgNDG = imgNDG.seuillage("manuel", 80);
		imgNDG.sauvegarde();*/

		//Mutation + distance au bord
		//OUL -> fond null ; 1UL -> fond objet
		// Utile pour objet au bord
		/*CImageClasse dist = dist.mutation(imgNDG).distance("V8", 1UL);
		dist.sauvegarde();*/

		//CImageNdg pieces = dist.mutation().seuillage("manuel", 5, dist.lireNbRegions());
		//pieces.sauvegarde();

		//CImageClasse pieces = dist.filtrage("maxiLocaux", 30); //
		//pieces.sauvegarde();

		//Etiquettage

		CImageClasse croisreg = croisreg.croissanceRegion(imgC.plan(0), 0, 0, 30);
		croisreg.sauvegarde();

		CImageNdg mut = croisreg.mutation();
		mut.ecrireBinaire(true);

		mut = mut.transformation("complement");
		mut.ecrireNom(mut.lireNom() + " + transfo1");
		mut.sauvegarde();

		CImageClasse nuee(mut, "V8");
		nuee.ecrireNom(nuee.lireNom() + " + nuée");
		nuee.sauvegarde();
		
		
		CImageClasse crois2 = crois2.mutation(mut);
		crois2.ecrireNom(crois2.lireNom() + " + transfo crois2");
		crois2.sauvegarde();

		CImageClasse crois3 = crois2.distance("V8", 1UL);
		crois3.ecrireNom(crois3.lireNom() + " + transfo3");
		crois3.sauvegarde();

		CImageClasse crois4 = crois3.filtrage("maxiLocaux", 30);
		crois4.ecrireNom(crois4.lireNom() + " + transfo4");
		crois4.sauvegarde();

		CImageClasse piece(crois4.mutation(), "V8");
		piece.ecrireNom(piece.lireNom() + " + transfo5");
		piece.sauvegarde();


		
		// on parcour l'image etiquetté pour renvoyé chaque pièce en ref à l'image de ref
		std::vector<SIGNATURE_Couleur> sig = piece.signatures(imgC, true);
		std::vector<int> lut;
		
		lut.resize(crois4.lireNbRegions() + 1, 0);

		for (int i = 1; i < crois4.lireNbPixels(); i++){
			if (crois4.operator()(i) != 0)
				lut.at(crois4.operator()(i)) = (crois4.operator()(i)); // on compare les deux image et on compare le pixel au maxiloco pour assigner un rayon a chaque objet
		}
		
		std::vector<SIGNATURE_Forme> sigbis = piece.signatures(true);
		std::vector<int> lutbis;

		int R = 0;
		
		for (int i = 0; i < nuee.lireNbRegions(); i++)
		{
			int R1 = abs(sigbis[i].rectEnglob_Hi - sigbis[i].rectEnglob_Bi) / 2;
			int R2 = abs(sigbis[i].rectEnglob_Hj - sigbis[i].rectEnglob_Bj) / 2;

			if (R1 > R2)
				R1 = R;
			else
				R2 = R;
		}

	/*	for (int i = 0; i < lut.size(); i++)
		{
			if (lut[i])

		}
*/
	
		///////////////////////////////////////////////////////////////////////////////////////
		///////////////////////////////////////////////////////////////////////////////////////
	
	}
	catch (const std::string& chaine) {
		std::cerr << chaine << std::endl;
	}

	system("pause");
}
