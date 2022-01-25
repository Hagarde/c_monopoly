/*
 * joueur.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "joueur.h"
#include "gobelet.h"

joueur::joueur(){
	this->solde = 1500;
	this->Nom = "undefinied";
	this->carte_liberation =0;
	this->prison = false ;
	this->temps_prison = 0 ;
	this->ptPion =NULL;
}

joueur::joueur(std::string nom,pion* ptPion ) {
	this->solde = 1500;
	this->ptPion = ptPion;
	this->Nom = nom;
	this->carte_liberation =0;
	this->prison = false ;
	this->temps_prison = 0 ;
}

joueur::~joueur() {
}

void joueur::crediter(int credit){ //Un joueur reçoit une certaine somm
	this->solde += credit;
}

void joueur::debiter(int debit){ //Un joueur se fait débiter une certaine somme
    this->solde -= debit;
    if (solde<=0) {
    	std::cout << Nom << " a fait banqueroute !" << std::endl;
    }
}

bool joueur::isOut(){
    return (solde<=0);
}

void joueur::jouer(Plateau plateau){
    if (solde > 0) {
        if (prison) {
        	if (this->temps_prison ==3  ){
        		std::cout << "Vous êtes libéré de prison " << std::endl;
        		this->prison = false;
        		this->temps_prison =0;
        		this->jouer(plateau);
        	}
        	if (this->carte_liberation > 0 ){ // proposer sortie avec carte
        		std::string response ;
        		std::cout << "Voulez-vous utiliser votre carte Sortie de Prison ?" << std::endl ;
        		std::cin >> response ;
        		if (response == "oui") {
        			this->prison = false;
        			this->carte_liberation -= 1 ;
        			this->jouer(plateau);
        			this->temps_prison= 0;
        		}
        		else { // proposer de payer
        			std::string response ;
        			std::cout << "Voulez-vous payer 50 € pour sortir de prison ? " << std::endl;
        			std::cin>> response;
        			if (response =="oui"){
        				this->debiter(50);
        				this->prison = false;
        				this->temps_prison =0 ;
        				this->jouer(plateau);
        			}
        			else { // Si le joueur refuse tout alors
        				gobelet::lancer();
        				if (gobelet::Double()){
        					this->prison = false;
        					this->temps_prison =0 ;
        					this->ptPion->deplacer(gobelet::getValeur(),plateau);
        				}
        				else {
        					this->temps_prison += 1 ;
        				}
        			}
        		}
        	}

        }
        else { // cas classique
        	// A rajouter le choix de mettre des maisons ou pas
        	gobelet::lancer();
        	int deplacement = gobelet::getValeur();
        	this->ptPion->deplacer(deplacement,plateau);
        	if (gobelet::Double()){
        		if (this->solde > 0) {
        		gobelet::lancer();
        		int deplacement = gobelet::getValeur();
        		this->ptPion->deplacer(deplacement,plateau);
        		if (gobelet::Double()){
        			if (this->solde > 0) {
        			    gobelet::lancer();
        			    int deplacement = gobelet::getValeur();
        			    this->ptPion->deplacer(deplacement,plateau);
        			    if (gobelet::Double()){// DIRECTION PRISON
        			    		this->prison= true ;
        			    		this->ptPion->setPosition(&plateau.getListeCase()[10]);
        			    	}
        				}
        			}
        		}
        	}
        }
    }
}
