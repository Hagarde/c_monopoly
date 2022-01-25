/*
 * allezPrison.h
 *
 *  Created on: 22 janv. 2022
 *      Author: aveyronvictor
 */

#ifndef ALLEZPRISON_H_
#define ALLEZPRISON_H_

#include "Case.h"
class joueur;

class allezPrison: public Case {
public:
	allezPrison(std::string nom, Case* suivante=NULL);
	virtual ~allezPrison();
	void arreterSur(joueur* ptJoueur);
};

#endif /* ALLEZPRISON_H_ */
