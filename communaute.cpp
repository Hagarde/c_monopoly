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
		joueur Joueur = *ptJoueur;
		Carte CarteTiree = this->pile_carte_communaute[choixCarte];
		std::cout << CarteTiree.getText() << std::endl;
		Joueur.crediter(CarteTiree.getGain());
		Joueur.debiter(CarteTiree.getPerte());

		if ( CarteTiree.getText() == "Conservez cette carte pour pouvoir être libéré de prison") {
			Joueur.setCartePrison(Joueur.getCartePrison());
		}

		if ( CarteTiree.getText() == "Payer les réparations de vos maisons : 25 € / Maison , 100 € /Hôtel" ) {
			Joueur.crediter(0); // A remplacer qd hôtel sera là et tout
		}

		if ( CarteTiree.getText() == "Payez une amende de 10 euros ou tirez une carte chance" ) {
			std::cout << "Entrer 1 si vous voulez payer et 2 si vous voulez tirer une carte chance" << std::endl;
			std::string reponse ;
			std::cin >> reponse ;
			if (reponse == "1" ) {
				Joueur.debiter(10);
			}
			else{
				this->arreterSur(ptJoueur);
			}
		}
}
