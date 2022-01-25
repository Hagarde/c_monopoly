/*
 * gare.cpp
 *
 *  Created on: 23 dÃ©c. 2021
 *      Author: aveyronvictor
 */
#include "joueur.h"
#include "gare.h"

gare::gare():propriete("undefinied",NULL,200,NULL,NULL){
	this->ptGares = NULL;
}

gare::gare(std::string nom, int prixAchat, Case* suivante, joueur* ptProprietaire,int* ptLoyer):propriete(nom,ptLoyer,prixAchat,suivante, ptProprietaire) {
	int* loyers = new int[4];
	loyers[0] = 25 ;
	loyers[1] = 50 ;
	loyers[2] = 100 ;
	loyers[3] = 200 ;
	this->ptGares = NULL;
}

void gare::arreterSur(joueur* ptJoueur){
	std::cout<<"On est dans Gare !!!!!"<<std::endl;
	if (this->ptProprietaire == NULL){
		std::string reponse;
		std::cout << "Vous etes tombe sur la case " << this->nom <<" Cette propriete n'appartient a  personne. Souhaitez-vous l'acheter pour "<< prixAchat << "E ?"<< std::endl;
		std::cin >> reponse;
		if (reponse == "Oui") {
			ptJoueur->debiter(prixAchat);
			std::cout<<"Vous avez achete la propriete "<< this->nom << ". Votre solde est maintenant de " << ptJoueur->getSolde() << std::endl ;
			this->ptProprietaire = ptJoueur; // On signale à la gare qu'elle à desormais un nouveau proprio
		} //Il faut ajouter la propriÃ©tÃ© Ã  la liste des propriÃ©tÃ©s du joueur.
		else{
			std::cout<< "Vous avez decide de ne pas acheter cette propriété"<<std::endl;
		}
	}
	else{
		int nmbr_gares = 0 ;
		for ( int i = 0 ; i < 4 ; i++) {
			if (this->ptGares[i].GetProprietaire() == ptJoueur ){
				nmbr_gares +=1 ;
			}
		}
		int loyer = ptLoyer[nmbr_gares]; //Fonction qui n'existe pas pour l'instant: elle va chercher le nombre de gare que possede un joueur. On fait -1 car ptLoyer est une liste qui commence à 0.
		//Le prix est diffÃ©rent en fonction du nombre de gare que le propriÃ©taire possÃ¨de.
		std::cout << "Le proprietaire de cette case est "<< ptProprietaire << " vous lui devez " << loyer<<std::endl;
		ptJoueur->debiter(loyer); //le joueur paye le locataire le prix du loyer
		ptProprietaire->crediter(loyer);
	}
}
gare::~gare() {
	// TODO Auto-generated destructor stub
}
