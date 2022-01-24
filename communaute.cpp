/*
 * communaute.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "communaute.h"
#include "joueur.h"


communaute::communaute(std::string nom, Case* suivante):Case(nom,suivante) {
	this->pile_carte_communaute = NULL;
}

communaute::~communaute() {
	// TODO Auto-generated destructor stub
}


void communaute::arreterSur(joueur* ptJoueur){
	int choixCarte = rand() % (15) ;
		Carte CarteTiree = this->pile_carte_communaute[choixCarte];
		std::cout << CarteTiree.getText() << std::endl;
		ptJoueur->crediter(CarteTiree.getGain());
		ptJoueur->debiter(CarteTiree.getPerte());

		if ( CarteTiree.getText() == "Conservez cette carte pour pouvoir etre libere de prison") {
			ptJoueur->setCartePrison(ptJoueur->getCartePrison());
		}

		if ( CarteTiree.getText() == "Payez une amende de 10 euros ou tirez une carte chance" ) {
			std::cout << "Entrer 1 si vous voulez payer et 2 si vous voulez tirer une carte chance" << std::endl;
			std::string reponse ;
			std::cin >> reponse ;
			if (reponse == "1" ) {
				ptJoueur->debiter(10);
			}
			else{
				arreterSur(ptJoueur);
			}
		}
}
