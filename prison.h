/*
 * prison.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef PRISON_H_
#define PRISON_H_

#include "Case.h"
class joueur;
class Case;

class prison: public Case {

public:
	prison(std::string nom, Case* suivante=NULL);
	virtual ~prison();
	void arreterSur(joueur* ptJoueur) ;
};

#endif /* PRISON_H_ */
