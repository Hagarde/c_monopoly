/*
 * propriete.cpp
 *
 *  Created on: 23 dÃ©c. 2021
 *      Author: aveyronvictor
 */

#include "propriete.h"

propriete::propriete(std::string nom, int* ptLoyer, int prixAchat, Case* suivante, joueur* ptProprietaire):Case(nom,suivante) {
	this->ptLoyer =ptLoyer ;
	this->prixAchat = prixAchat;
	this->ptProprietaire = ptProprietaire;
}

propriete::~propriete() {
	// TODO Auto-generated destructor stub
}
