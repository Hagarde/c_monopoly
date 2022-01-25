/*
 * compagnie.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "compagnie.h"
#include "joueur.h"

compagnie::compagnie():propriete("undefinied",NULL,0,NULL){

}

compagnie::compagnie(std::string nom,int* ptLoyer , int prixAchat, Case* suivante,joueur* ptProprietaire):propriete(nom, ptLoyer, prixAchat, suivante) {
	// TODO Auto-generated constructor stub
	this->ptProprietaire =NULL;
}

compagnie::~compagnie() {
	// TODO Auto-generated destructor stub
}


void compagnie::arreterSur(joueur* ptJoueur) {
		extern gobelet Gobelet ;
		if (ptProprietaire == NULL){
			std::string reponse;
			std::cout<< "La case : "<< this->nom << "est disponible. Son prix est de "<<this->prixAchat<<" €. Souhaitez-vous l'acheter ?"<< std::endl;
			std::cin>> reponse;

			if (reponse == "oui") {
				joueur Joueur = *ptJoueur;
				Joueur.debiter(this->getPrixAchat());
				std::cout<<"Vous avez achete la propriete "<< this->nom << ". Votre solde est maintenant de " << Joueur.getSolde() << std::endl;
				ptProprietaire = ptJoueur; // maintenant elle appartient à qqn
			} //Il faut ajouter la propriÃ©tÃ© Ã  la liste des propriÃ©tÃ©s du joueur.
			else{
				std::cout<< "Vous avez decide de ne pas acheter cette propriete"<< std::endl;
			}
		}
		else{
			int multiplicateur = 4 ;
			if (1){// a remplacer pare fonction de check couleur
				multiplicateur = 12;
			}

			int loyer = multiplicateur * Gobelet.getValeur() ; //On adapte le loyer en fonction du nombre de maison qu'il y a (ptLoyer[0]->0 maison et ptLoyer[5]->1 hotel)
			std::cout << "Vous êtes tombé sur la case " << this->nom << ", vous devez payer "<< loyer << " € ."<< std::endl;
			ptJoueur->crediter(loyer);
			ptJoueur->debiter(loyer);}
}
