#include <iostream>
#include <ctime>


#include "ImageCouleur.h"
#include "ImageClasse.h"

void main(void) {
	try {
		time_t debut;
		time(&debut);

		std::string name_img("biche.bmp");
		CImageCouleur img(name_img);

		CImageClasse dyn(img, 3, "regulier");
		dyn.sauvegarde();

		time_t fin;
		time(&fin);

		double seconds = difftime(fin, debut);
		std::cout << "traitement effectue en " << seconds << " secondes ...." << std::endl;
	}
	catch (const std::string& chaine) {
		std::cerr << chaine << std::endl;
	}

	system("pause");
}