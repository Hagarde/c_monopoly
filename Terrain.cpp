/*
 * Terrain.cpp
 *
 *  Created on: 23 dÃ©c. 2021
 *      Author: aveyronvictor
 */

#include "Terrain.h"
#include "joueur.h"

Terrain::Terrain():propriete("temporaire",NULL,0,NULL,NULL){
	this->Couleur = NULL;
	this->nMaison = 0 ;
}

Terrain::Terrain(std::string nom, int* ptLoyer, int prixAchat, couleur* Couleur, Case* suivante, joueur* ptProprietaire):propriete(nom, ptLoyer, prixAchat, suivante, ptProprietaire) {
	this->Couleur = Couleur;
	this->nMaison = 0;
}

void Terrain::arreterSur(joueur* ptJoueur){
	//joueur* ptJoueur = ptPion->getJoueur();
	if (ptProprietaire == NULL){
		std::string reponse;
		std::cout<< "le bien est disponible. Son prix est de "<<this->prixAchat<<". Souhaitez-vous l'acheter ?"<< std::endl;
		std::cin>> reponse;
		if (reponse == "oui") {
			joueur Joueur = *ptJoueur;
			Joueur.debiter(this->getPrixAchat());
			std::cout<<"Vous avez achete la propriete "<< this->nom << ". Votre solde est maintenant de " << Joueur.getSolde() << std::endl ;
			this->ptProprietaire = ptJoueur; //On signale a la propriete qu'il y a desormais un proprio
		} //Il faut ajouter la propriete a la liste des proprietes du joueur.
		else{
			std::cout<< "Vous avez decide de ne pas acheter cette propriete"<< std::endl;
	}
	}
	else{
		int loyer = ptLoyer[nMaison]; //On adapte le loyer en fonction du nombre de maison qu'il y a (ptLoyer[0]->0 maison et ptLoyer[5]->1 hotel)
		std::cout << "Vous etes tombe sur la case " << this->nom << ", vous devez payer "<< loyer << " E."<< std::endl;
		ptProprietaire->crediter(loyer);
		ptJoueur->debiter(loyer);

	}
}


Terrain::~Terrain() {
	// TODO Auto-generated destructor stub
}

