/*
 * Pion.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "pion.h"

pion::pion(){
	this->nom = "undefinied";
	this->ptPosition = NULL;
	this->ptJoueur = NULL;
}

pion::pion(std::string nom,Case* ptPosition) {
	this->ptJoueur =NULL;
	this->ptPosition = ptPosition;
}

pion::~pion() {
	// Destructeur automatique. Le pion reste utile jusqu'à la toute fin du jeu. 
}	

void pion::deplacer(int combien,Plateau plateau){
	joueur Joueur = *ptJoueur;
	Case* postionactuelle = this->ptPosition;
	Case* position_suivante = this->ptPosition->getSuivante();
	for (int i = 0 ; i < combien ; i ++){
		this->ptPosition = position_suivante ;
		position_suivante = this->ptPosition->getSuivante();
		if (this->ptPosition == plateau.getListeCase()){
			this->ptJoueur->crediter(200);
		}
		postionactuelle->arreterSur(this->ptJoueur);
	}
}
