/*
 * caseinutile.cpp
 *
 *  Created on: 18 janv. 2022
 *      Author: aveyronvictor
 */

#include "caseinutile.h"

case_inutile::case_inutile(std::string nom, Case* suivante):Case(nom,suivante) {
	// TODO Auto-generated constructor stub

}

case_inutile::~case_inutile() {
	// TODO Auto-generated destructor stub
}


void case_inutile::arreterSur(joueur* ptJoueur){
	std::cout<<"Vous etes arrive sur le Parking Gratuit !!"<<std::endl;
}

