/*
 * allezPrison.cpp
 *
 *  Created on: 22 janv. 2022
 *      Author: aveyronvictor
 */

#include "allezPrison.h"
#include "joueur.h"

allezPrison::allezPrison(std::string nom, Case* suivante):Case(nom,suivante) {
	// TODO Auto-generated constructor stub
}

allezPrison::~allezPrison() {
	// TODO Auto-generated destructor stub
}

void allezPrison::arreterSur(joueur* ptJoueur){
	joueur Joueur = *ptJoueur ;
	Joueur.entrerPrison();
}
