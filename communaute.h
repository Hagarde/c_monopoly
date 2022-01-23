/*
 * communaute.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef COMMUNAUTE_H_
#define COMMUNAUTE_H_

#include "Case.h"
#include <iostream>
#include "joueur.h"
#include "Carte.h"
using namespace std;

class communaute: public Case {
	private :
		std::string nom ;
		Carte* pile_carte_communaute;
	public:
		communaute(std::string nom, Case* suivante=NULL);
		void setPile_carte_commmuanute(Carte* pile_carte_communaute){this->pile_carte_communaute =pile_carte_communaute;};
		virtual ~communaute();
		void arreterSur(joueur* joueur) ;
};

#endif /* COMMUNAUTE_H_ */
