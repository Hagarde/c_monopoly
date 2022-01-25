/*
 * caseinutile.h
 *
 *  Created on: 18 janv. 2022
 *      Author: aveyronvictor
 */

#ifndef CASEINUTILE_H_
#define CASEINUTILE_H_

#include "Case.h"

class case_inutile: public Case {
public:
	case_inutile(std::string nom, Case* suivante=NULL);
	virtual ~case_inutile();
	void arreterSur(joueur* ptJoueur);
};

#endif /* CASEINUTILE_H_ */
