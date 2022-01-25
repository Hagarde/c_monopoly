/*
 * Case.h
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#ifndef CASE_H_
#define CASE_H_

#include <iostream>


class joueur ;



class Case {
	private :
        std::string nom;
        Case* suivante;
	public:
        Case();
		Case(std::string nom, Case* suivante=NULL);
        virtual ~Case();
        virtual void arreterSur(joueur* ptJoueur) = 0;
		std::string getNom(){return this->nom;};
		void setNom(std::string nom){this->nom = nom ;};
		Case* getSuivante(){return this->suivante;};
		void setSuivante(Case* suivante){this->suivante = suivante;};
};

#endif /* CASE_H_ */
