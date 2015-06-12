#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

#include "ImageNdg.h"
#include "ImageClasse.h"

void main(void) {
	try {
		time_t debut;
		time(&debut); 

		std::string name_img("biche.bmp");



/////////////////////////////////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////////////
		// File Rouge
		/////////////////////////////////////////////////////////////////////////
		
		////////////////
		//I - seuillage/distance au fond
		/*///////////////

		//Seuillage
		CImageCouleur img(name_img);
		CImageNdg imgNDG(name_img);

		imgNDG = img.plan(0); // Renvoi image Ndg
		imgNDG.sauvegarde();

		imgNDG = imgNDG.seuillage("manuel", 80);
		imgNDG.sauvegarde();

		//Mutation + distance au bord
			//OUL -> fond null ; 1UL -> fond objet
			// Utile pour objet au bord
		CImageClasse dist = dist.mutation(imgNDG).distance("V8", 1UL);
		dist.sauvegarde();

		//CImageNdg pieces = dist.mutation().seuillage("manuel", 5, dist.lireNbRegions());
		//pieces.sauvegarde();

		CImageClasse pieces = dist.filtrage("maxiLocaux", 30); //
		pieces.sauvegarde();
		

		///////////////*/
		//II - nuées dynamiques
		/*///////////////

		CImageClasse img(name_img, 2, "aleatoire", 2);
		img.sauvegarde();


		///////////////*/
		//III - Croissance de region
		/*///////////////
		std::string name_img("euros.bmp");
		CImageCouleur img(name_img);

		CImageClasse croisreg = croisreg.croissanceRegion(img.plan(0),0,0,20);
		croisreg.sauvegarde();

		//Etiquetage
		CImageClasse pieces (croisreg.mutation().transformation("complement"),"V8");
		pieces.sauvegarde();


		////////////////////////////////////////////////////////////////////////*/
		/////////////////////////////////////////////////////////////////////////
		




/////////////////////////////////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////////////
		// TP2
		/////////////////////////////////////////////////////////////////////////

		
		/*///////////////
		//I - Prise en main des images étiquetées
		////////////////
		
		//std::string name_img("chro.bmp");

		//Seuillage
		CImageNdg img(name_img);

		CImageClasse objet (img.seuillage("automatique"),"V8");
		std::vector<SIGNATURE_Ndg> sigNdg = objet.signatures(img,true);


		objet.affichage(sigNdg);
		objet.sauvegarde();
		




		///////////////*/
		//II - Application pilules jaunes/vertes

		//HSV
		//seuillage
		//filtrage

		/*///////////////


		//HSV
		CImageCouleur img(name_img);
		CImageNdg imgNDG(name_img);

		img = img.conversion("HSV"); //Renvoi image Ndg
		
		imgNDG = img.plan(0);
		imgNDG.sauvegarde();

		// Filtrage
		CImageClasse pillsVerts(imgNDG.seuillage("manuel" , 90 , 110), "V8");
		CImageClasse triVerts = pillsVerts.filtrage("taille", 50, false); // enleve le bruit

		CImageClasse pillsJaunes(imgNDG.seuillage("manuel", 20, 40), "V8");
		CImageClasse triJaunes = pillsJaunes.filtrage("taille", 50, false); // enleve le bruit

		system("cls");

		std::cout << "Nb pillules Jaunes : " << triJaunes.lireNbRegions() << std::endl;
		triJaunes.ecrireNom("Jaunes");
		triJaunes.sauvegarde();

		std::cout << "Nb pillules Verts : " << triVerts.lireNbRegions() << std::endl;
		triVerts.ecrireNom("Verts");
		triVerts.sauvegarde();





		/*//////////////*/
		//III - SIGNATURE_Forme - Pieces
	
		//croissance de region
		//ettiquetage v8
		//signature

		/*///////////////
		
		CImageCouleur img(name_img);


		// Croise reg
		CImageClasse croisreg = croisreg.croissanceRegion(img.plan(0), 0, 0, 30);
		croisreg.sauvegarde();

		//Etiquetage
		CImageClasse pieces(croisreg.mutation().transformation("complement"), "V8");
		pieces.sauvegarde();


		//Signature
		std::vector<SIGNATURE_Forme> sig = pieces.signatures(true);
			// CG_i & CG-j = centre de gravité sur i ou j (centre de l'objet)
			// RE_Hi & RE_Hj = Rectangle englobant Haut
			// RE_Bi & RE_Bj = Rectangle englobant Bas

		std::vector<int> lut;
		lut.resize(pieces.lireNbRegions() + 1, 0);


		//Supprimer Pieces bord
		CImageClasse bds = pieces;
		for (int i = 1; i <= bds.lireNbRegions(); i++)
			if ((sig[i].rectEnglob_Hj == 0) || (sig[i].rectEnglob_Bj == pieces.lireLargeur() - 1))
				lut.at(i) = i;

		for (int i = 0; i < bds.lireNbPixels(); i++){
			bds(i) = lut[pieces(i)];
			pieces(i) -= bds(i); // on supprime les pièces du bord
		};

		pieces.ecrireNom(pieces.lireNom() + "_BORD");
		pieces.sauvegarde();
		

		//Supprimer Amas Pieces
		for (int i = 1; i <= bds.lireNbRegions(); i++){

			//Compacitée
			if ( ((float)sig[i].surface / (float)((sig[i].rectEnglob_Bi - sig[i].rectEnglob_Hi + 1) * (sig[i].rectEnglob_Bj - sig[i].rectEnglob_Hj +1))) > 0.76) // Surface rectangle objet / surface rectangle englobant
				lut.at(i) = i;
		}

		for (int i = 0; i < bds.lireNbPixels(); i++){
			bds(i) = lut[pieces(i)];
			pieces(i) = bds(i); // on supprime les  amas pièces
		};



		pieces.ecrireNom(pieces.lireNom() + " + AMAS");
		pieces.sauvegarde();

		////////////////////////////////////////////////////////////////////////*/
		/////////////////////////////////////////////////////////////////////////



/////////////////////////////////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////////////
		// TP3
		/////////////////////////////////////////////////////////////////////////

		////////////////
		//I - Code de Freeman

		// Inversion
		// Seuillage
		// Etiquetage

		/*///////////////

		//Transforamtion Couleur
		CImageNdg img(name_img);
		img = img.transformation("complement"); //Choisir complement/expansion/egalisation
		img.sauvegarde();


		//Seuillage
		CImageClasse objet(img.seuillage("automatique"), "V8");
		std::vector<SIGNATURE_Forme> sig = objet.signatures(true);


		////////////////////////////P1///////////////////////////////////////////
		std::string name_img2("p1.bmp");
		CImageNdg imgNdg2(name_img2);
		
		CImageClasse imgC2(imgNdg2.transformation("complement").seuillage("automatique"), "V8");
		imgC2.sauvegarde();

		std::vector<SIGNATURE_Forme> sig2 = imgC2.signatures(true);
		
		system("cls");
		
		int NbT = 0;

		for (int i = 1; i <= imgC2.lireNbRegions(); i++){
			float somme = 0;

			for (int j = 0; j< 8; j++){
				somme += (sig2[i].histoFreeman[j] - sig[1].histoFreeman[j])*(sig2[i].histoFreeman[j] - sig[1].histoFreeman[j]);
			}

			somme = sqrt(somme);
			std:cout << somme << std::endl;
			if (somme<0.003)
				NbT += 1;
		}
		std::cout << "Il y a " << NbT << " T" << std::endl;



		////////////////////////////////////////////////////////////////////////*/
		/////////////////////////////////////////////////////////////////////////




/////////////////////////////////////////////////////////////////////////////////
		/////////////////////////////////////////////////////////////////////////
		// TP4 - Detection peau
		/////////////////////////////////////////////////////////////////////////
		
		CImageCouleur img(name_img);
		CImageNdg imgNDG_H(name_img);
		CImageNdg imgNDG_S(name_img);


		////////////////
		//I

		// HSV
		// Seuillage H et V
		/*///////////////

		//HSV
		img = img.conversion("HSV"); //Renvoi image Ndg
		img.sauvegarde();
		//std::string affichage = "start ../Res/" + img.lireNom() + ".bmp"; // visualisation après sauvegarde uniquement
		//system(affichage.c_str()); 

		// Seuillage
		imgNDG_H = img.plan(0);
		CImageNdg canalH = imgNDG_H.seuillage("manuel", 0, 36);
		imgNDG_S = img.plan(1);
		CImageNdg canalS = imgNDG_S.seuillage("manuel", 58, 174);

		
		canalS.operation(canalH, "et");
		canalS.sauvegarde();


		///////////////*/
		//II

		// HSV
		// Ecart-type
		/*///////////////
		
		//HSV
		img = img.conversion("HSV"); //Renvoi image Ndg
		img.sauvegarde();

		imgNDG_H = img.plan(0);

		CImageNdg ecart_type = imgNDG_H.filtrage("ecart-type", 3);
		ecart_type.sauvegarde();

		///////////////*/
		//III - Image intégrale
		////////////////



		//std::cout << std::setprecision(10) << moyenne << " " << mts.moyenneNdg << std::endl;

		////////////////////////////////////////////////////////////////////////*/
		/////////////////////////////////////////////////////////////////////////




		/*////////////////////////////////////////////////////////////////////////
		//Image pallettes
		CImageNdg img(name_img);
		//system(name_img.c_str()); // visualisation en direct via visionneuse

		img.choixPalette("grise");
		img.choixPalette("rouge");
		////////////////////////////////////////////////////////////////////////*/





		/*////////////////////////////////////////////////////////////////////////
		//HSV
		CImageCouleur img(name_img); 
		CImageNdg imgNDG(name_img);

		img=img.conversion(); //Renvoi image Ndg
		imgNDG = img.plan(2);

		imgNDG.sauvegarde();
		////////////////////////////////////////////////////////////////////////*/





		/*////////////////////////////////////////////////////////////////////////
		//Expansion Ndg

		CImageNdg img(name_img);
		img=img.transformation("expansion");
		img.sauvegarde();
		////////////////////////////////////////////////////////////////////////*/


				
		/*////////////////////////////////////////////////////////////////////////
		//Egalisation Ndg

		CImageNdg img(name_img);
		img=img.transformation("egalisation");
		img.sauvegarde();
		////////////////////////////////////////////////////////////////////////*/





		/*////////////////////////////////////////////////////////////////////////
		//Transforamtion Couleur

		CImageCouleur img(name_img);
		img=img.transformation("expansion"); //Choisir complement/expansion/egalisation
		img.sauvegarde();
		////////////////////////////////////////////////////////////////////////*/




		//cout <<"premier : "<< int(img(0, 0)) << endl;
		//cout <<"dernier : "<< int(img(img.lireNbPixels()-1)) << endl;
		//std::string affichage = "start ../Res/" + img.lireNom() + ".bmp"; // visualisation après sauvegarde uniquement
		//system(affichage.c_str()); 




		/*////////////////////////////////////////////////////////////////////////
		// histogramme
		std::vector<unsigned long > h = img.histogramme(true);
		//affichage = "start excel.exe ../Res/" + img.lireNom() + ".csv"; // visualisation par appel excel automatique
		//system(affichage.c_str());  

		img = img.seuillage("manuel",100,255);
		img = img.seuillage("automatique"); //Indépendant éclairage
		img.sauvegarde();
		////////////////////////////////////////////////////////////////////////*/




		/*////////////////////////////////////////////////////////////////////////
		// nuées dynamiques
		CImageClasse dyn(img,3,"regulier");
		dyn.sauvegarde();
		////////////////////////////////////////////////////////////////////////*/



		time_t fin;
		time(&fin); 

		double seconds = difftime(fin,debut);
		std::cout << "traitement effectue en " << seconds << " secondes ...." << std::endl;
	} 
	catch(const std::string& chaine) {
       std::cerr << chaine << std::endl;
	}

	system("pause");
}