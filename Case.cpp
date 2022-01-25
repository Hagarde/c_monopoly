/*
 * Case.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "Case.h"
#include "joueur.h"

Case::Case(std::string nom, Case* suivante) {
	this->nom  = nom ;
	this->suivante = suivante;
}

Case::Case(){
	this->nom = "undefinied";
	this->suivante = NULL;
}

Case::~Case() {
	// TODO Auto-generated destructor stub
}


