/*
 * joueur.cpp
 *
 *  Created on: 23 dÃ©c. 2021
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

void joueur::crediter(int credit){ //Un joueur reÃ§oit une certaine somm
	this->solde += credit;
}

void joueur::debiter(int debit){ //Un joueur se fait dÃ©biter une certaine somme
    this->solde -= debit;
    if (solde<=0) {
    	std::cout << Nom << " a fait banqueroute !" << std::endl;
    }
}

bool joueur::isOut(){
    return (solde<=0);
}

void joueur::jouer(Plateau plateau , gobelet Gobelet){
	std::string reponse;
	std::cout<<"C'est au tour de "<< this->Nom << " de jouer, appuyer sur Entrée pour lancer le tour "<< std::endl;
	std::cin>>reponse;
    if (solde > 0) {
        if (prison) {
        	if (this->temps_prison == 3  ){
        		std::cout << "Vous etes libere de prison " << std::endl;
        		this->prison = false;
        		this->temps_prison =0;
        		this->jouer(plateau, Gobelet);
        	}
        	if (this->carte_liberation > 0 ){ // proposer sortie avec carte
        		std::string response ;
        		std::cout << "Voulez-vous utiliser votre carte Sortie de Prison ?" << std::endl ;
        		std::cin >> response ;
        		if (response == "oui") {
        			this->prison = false;
        			this->carte_liberation -= 1 ;
        			this->jouer(plateau,Gobelet);
        			this->temps_prison= 0;
        		}
        		else { // proposer de payer
        			std::string resposne ;
        			std::cout << "Voulez-vous payer 50 â‚¬ pour sortir de prison ? " << std::endl;
        			std::cin>> resposne;
        			if (resposne =="oui"){
        				this->debiter(50);
        				this->prison = false;
        				this->temps_prison =0 ;
        				this->jouer(plateau,Gobelet);
        			}
        			else { // Si le joueur refuse tout alors
        				Gobelet.lancer();
        				if (Gobelet.Double()){
        					this->prison = false;
        					this->temps_prison =0 ;
        					this->ptPion->deplacer(Gobelet.getValeur(),plateau);
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
        	Gobelet.lancer();
        	int deplacement = Gobelet.getValeur();

        	std::cout<<"le score des des est : "<<deplacement<<std::endl;


        	this->ptPion->deplacer(deplacement,plateau);
    		std::cout<< "Vous etes arrivé sur la case: "<< ptPion->getPosition()->getNom()<<std::endl;
    		ptPion->getPosition()->arreterSur(this);

        	if (Gobelet.Double() == true ){
        		std::cout << "C'est un double"<<std::endl;
        		if (this->solde > 0) {
        		Gobelet.lancer();
        		int deplacement = Gobelet.getValeur();
        		std::cout<<"On rejoue ! La valeur des des est :"<< deplacement <<std::endl;
        		this->ptPion->deplacer(deplacement,plateau);

        		std::cout<< "Vous etes arrivé sur la case: "<< ptPion->getPosition()->getNom()<<std::endl;
        		ptPion->getPosition()->arreterSur(this);

        		if (Gobelet.Double() == true){
        			if (this->solde > 0) {
        			    Gobelet.lancer();
        			    int deplacement = Gobelet.getValeur();
        			    std::cout<<"On ReRejoue ! La valeur des des est : "<< deplacement<<std::endl;
        			    this->ptPion->deplacer(deplacement,plateau);
        	    		(*ptPion->getPosition()).arreterSur(this);
        			    if (Gobelet.Double()==true){// DIRECTION PRISON
        			    		this->prison= true ;
        			    		std::cout<<"C'est la taule !"<<std::endl;
        			    		this->ptPion->setPosition(plateau.getCase(10));
        			    	}
        				}
        			}
        		}
        	}
        }
    }
}
