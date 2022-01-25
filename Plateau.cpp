/*
 * Plateau.cpp
 *
 *  Created on: 23 déc. 2021
 *      Author: aveyronvictor
 */

#include "Plateau.h"

Plateau::Plateau() {
	// TODO Auto-generated constructor stub
	this->liste_case = NULL;
	this->liste_propriete= NULL;
}

Plateau::~Plateau() {
	// TODO Auto-generated destructor stub
}

void Plateau::creerCases() {


	// initialisation des cases taxes

	taxe impot  = taxe("Impot sur le Revenue");
	taxe luxe = taxe("Taxe de Luxe ");

	//initailisation case inutile

	Case* parc_gratuit = new case_inutile("parc gratuit");

	// initialisation  allez en prison

	allezPrison police = allezPrison("Allez en Prison");

	// initialisation case depart prison

	depart Depart = depart("depart");
	prison Prison = prison("prison");

	int* listeLoyer1 = new int[6];

		listeLoyer1[0]= 2 ;
		listeLoyer1[1]= 10 ;
		listeLoyer1[2]= 30 ;
		listeLoyer1[3]= 90 ;
		listeLoyer1[4]= 160 ;
		listeLoyer1[5]= 250 ;

	Terrain ter1 = Terrain("Boulevard de Belleville", listeLoyer1,60);

		int* listeLoyer2 = new int[6];
		listeLoyer2[0]= 4 ;
		listeLoyer2[1]= 20 ;
		listeLoyer2[2]= 60 ;
		listeLoyer2[3]= 180 ;
		listeLoyer2[4]= 320 ;
		listeLoyer2[5]= 450 ;

	Terrain ter2 = Terrain("Rue Lecourbe", listeLoyer2,60);

		int* listeLoyer3 = new int[6];
		listeLoyer3[0]= 6 ;
		listeLoyer3[1]= 30 ;
		listeLoyer3[2]= 90 ;
		listeLoyer3[3]= 270 ;
		listeLoyer3[4]= 400 ;
		listeLoyer3[5]= 550 ;

	Terrain ter3 = Terrain("Rue de Vaugirard", listeLoyer3,100);


		int* listeLoyer4 = new int[6];
		listeLoyer4[0]= 6 ;
		listeLoyer4[1]= 30 ;
		listeLoyer4[2]= 90 ;
		listeLoyer4[3]= 270 ;
		listeLoyer4[4]= 400 ;
		listeLoyer4[5]= 550 ;

	Terrain ter4 = Terrain("Rue de Courcelles", listeLoyer4,100);


		int* listeLoyer5 = new int[6];
		listeLoyer5[0]= 8 ;
		listeLoyer5[1]= 40 ;
		listeLoyer5[2]= 100 ;
		listeLoyer5[3]= 300 ;
		listeLoyer5[4]= 450 ;
		listeLoyer5[5]= 600 ;

		 Terrain ter5 = Terrain("Avenue de la République", listeLoyer5,120);


		int* listeLoyer6 = new int[6];
		listeLoyer6[0]= 10 ;
		listeLoyer6[1]= 50 ;
		listeLoyer6[2]= 150 ;
		listeLoyer6[3]= 450 ;
		listeLoyer6[4]= 625 ;
		listeLoyer6[5]= 750 ;

		 Terrain ter6= Terrain("Boulevard de la Villette", listeLoyer6,140);


		int* listeLoyer7 = new int[6];
		listeLoyer7[0]= 10 ;
		listeLoyer7[1]= 50 ;
		listeLoyer7[2]= 150 ;
		listeLoyer7[3]= 450 ;
		listeLoyer7[4]= 625 ;
		listeLoyer7[5]= 750 ;

		 Terrain ter7 = Terrain("Avenue de Neuilly", listeLoyer7,140);


		int* listeLoyer8 = new int[6];
		listeLoyer8[0]= 12 ;
		listeLoyer8[1]= 60 ;
		listeLoyer8[2]= 180 ;
		listeLoyer8[3]= 500 ;
		listeLoyer8[4]= 700 ;
		listeLoyer8[5]= 900 ;

		 Terrain ter8 = Terrain("Rue de Paradis", listeLoyer8,160);


		int* listeLoyer9 = new int[6];
		listeLoyer9[0]= 14;
		listeLoyer9[1]= 70 ;
		listeLoyer9[2]= 200 ;
		listeLoyer9[3]= 550 ;
		listeLoyer9[4]= 750 ;
		listeLoyer9[5]= 950 ;

		 Terrain ter9 = Terrain("Avenue Mozart", listeLoyer9,180);


		int* listeLoyer10 = new int[6];
		listeLoyer10[0]= 14;
		listeLoyer10[1]= 70 ;
		listeLoyer10[2]= 200 ;
		listeLoyer10[3]= 550 ;
		listeLoyer10[4]= 750 ;
		listeLoyer10[5]= 950 ;

		 Terrain ter10= Terrain("Boulevard Saint-Michel", listeLoyer10,180);

		int* listeLoyer11 = new int[6];
		listeLoyer11[0]= 16;
		listeLoyer11[1]= 80 ;
		listeLoyer11[2]= 220 ;
		listeLoyer11[3]= 600 ;
		listeLoyer11[4]= 800 ;
		listeLoyer11[5]= 1000 ;

		 Terrain ter11 = Terrain("Place Pigalle", listeLoyer11,200);


		int* listeLoyer12 = new int[6];
		listeLoyer12[0]= 18;
		listeLoyer12[1]= 90 ;
		listeLoyer12[2]= 250 ;
		listeLoyer12[3]= 700 ;
		listeLoyer12[4]= 875 ;
		listeLoyer12[5]= 1050 ;

		 Terrain ter12 = Terrain("Avenue Matignon", listeLoyer12,220);


		int* listeLoyer13 = new int[6];
		listeLoyer13[0]= 18;
		listeLoyer13[1]= 90 ;
		listeLoyer13[2]= 250 ;
		listeLoyer13[3]= 700 ;
		listeLoyer13[4]= 875 ;
		listeLoyer13[5]= 1050 ;

		 Terrain ter13 = Terrain("Boulevard Malesherbes", listeLoyer13,220);


		int* listeLoyer14 = new int[6];
		listeLoyer14[0]= 20 ;
		listeLoyer14[1]= 100 ;
		listeLoyer14[2]= 300;
		listeLoyer14[3]= 750 ;
		listeLoyer14[4]= 925 ;
		listeLoyer14[5]= 1100 ;

		 Terrain ter14 = Terrain("Avenue Henri-Martin", listeLoyer14,240);


		int* listeLoyer15 = new int[6];
		listeLoyer15[0]= 22;
		listeLoyer15[1]= 110 ;
		listeLoyer15[2]= 330;
		listeLoyer15[3]= 800 ;
		listeLoyer15[4]= 975 ;
		listeLoyer15[5]= 1150 ;

		 Terrain ter15 = Terrain("Faubourg Saint-Honoré", listeLoyer15,260);


		int* listeLoyer16 = new int[6];
		listeLoyer16[0]= 22;
		listeLoyer16[1]= 110 ;
		listeLoyer16[2]= 330;
		listeLoyer16[3]= 800 ;
		listeLoyer16[4]= 975 ;
		listeLoyer16[5]= 1150 ;

		 Terrain ter16 = Terrain("Place de la Bourse", listeLoyer16,260);


		int* listeLoyer17 = new int[6];
		listeLoyer17[0]= 24;
		listeLoyer17[1]= 120 ;
		listeLoyer17[2]= 360;
		listeLoyer17[3]= 850 ;
		listeLoyer17[4]= 1025 ;
		listeLoyer17[5]= 1200;

		 Terrain ter17 = Terrain("Rue La Fayette", listeLoyer17,280);


		int* listeLoyer18 = new int[6];
		listeLoyer18[0]= 26 ;
		listeLoyer18[1]= 130 ;
		listeLoyer18[2]= 390;
		listeLoyer18[3]= 900 ;
		listeLoyer18[4]= 1100 ;
		listeLoyer18[5]= 1275;

		 Terrain ter18 = Terrain("Avenue de Breteuil", listeLoyer18,300);


		int* listeLoyer19 = new int[6];
		listeLoyer19[0]= 26;
		listeLoyer19[1]= 130 ;
		listeLoyer19[2]= 390;
		listeLoyer19[3]= 900 ;
		listeLoyer19[4]= 1100 ;
		listeLoyer19[5]= 1275;

		 Terrain ter19= Terrain("Avenue Foch", listeLoyer19,300);


		int* listeLoyer20 = new int[6];
		listeLoyer20[0]= 28 ;
		listeLoyer20[1]= 150 ;
		listeLoyer20[2]= 450;
		listeLoyer20[3]= 1000 ;
		listeLoyer20[4]= 1200;
		listeLoyer20[5]= 1400;

		 Terrain ter20 = Terrain("Boulevard des Capucines", listeLoyer20,320);


		int* listeLoyer21 = new int[6];
		listeLoyer21[0]= 35;
		listeLoyer21[1]= 175 ;
		listeLoyer21[2]= 500;
		listeLoyer21[3]= 1100 ;
		listeLoyer21[4]= 1300;
		listeLoyer21[5]= 1500;

		 Terrain ter21 = Terrain("Avenue des Champs-Elysées", listeLoyer21,350);


		int* listeLoyer22 = new int[6];
		listeLoyer22[0]= 50 ;
		listeLoyer22[1]= 200 ;
		listeLoyer22[2]= 600;
		listeLoyer22[3]= 1400 ;
		listeLoyer22[4]= 1700;
		listeLoyer22[5]= 2000;

		 Terrain ter22 = Terrain("Rue de la Paix", listeLoyer22,400);

		Terrain* liste_terrain_bru = new Terrain[2];
		liste_terrain_bru[0]= ter1 ;
		liste_terrain_bru[1]= ter2 ;

		Terrain* liste_terrain_blc = new Terrain[3];
		liste_terrain_blc[0] = ter3;
		liste_terrain_blc[1] = ter4;
		liste_terrain_blc[2] = ter5;

		Terrain* liste_terrain_vio = new Terrain[3];
		liste_terrain_vio[0] = ter6;
		liste_terrain_vio[1] = ter7;
		liste_terrain_vio[2] = ter8;

		Terrain* liste_terrain_ora = new Terrain[3];
		liste_terrain_ora[0] = ter9;
		liste_terrain_ora[1] = ter10;
		liste_terrain_ora[2] = ter11;

		Terrain* liste_terrain_rou = new Terrain[3];
		liste_terrain_rou[0] = ter12;
		liste_terrain_rou[1] = ter13;
		liste_terrain_rou[2] = ter14;

		Terrain* liste_terrain_jau = new Terrain[3];
		liste_terrain_jau[0] = ter15;
		liste_terrain_jau[1] = ter16;
		liste_terrain_jau[2] = ter17;

		Terrain* liste_terrain_ver = new Terrain[3];
		liste_terrain_ver[0] = ter18;
		liste_terrain_ver[1] = ter19;
		liste_terrain_ver[2] = ter20;

		Terrain* liste_terrain_bleu = new Terrain[2];
		liste_terrain_bleu[0] = ter21;
		liste_terrain_bleu[1] = ter22;


		gare* liste_gare = new gare[4];

		gare gare1 = gare("Gare Montparnasse");
		gare gare2 = gare("Gare de Lyon");
		gare gare3 = gare("Gare du Nord");
		gare gare4 = gare("Gare Saint-Lazare");

		liste_gare[0] = gare1;
		liste_gare[1] = gare2;
		liste_gare[2] = gare3;
		liste_gare[3] = gare4;

		couleur Gare = couleur("gare",4,liste_gare);

		gare1.setptCouleur(&Gare);
		gare2.setptCouleur(&Gare);
		gare3.setptCouleur(&Gare);
		gare4.setptCouleur(&Gare);

		compagnie* liste_compagnie = new compagnie[2];

		compagnie compagnie1 = compagnie("Compagnie de Distribution Electrique");
		compagnie compagnie2 = compagnie("Compagnie de Distribution des Eaux");

		liste_compagnie[0] = compagnie1;
		liste_compagnie[1] = compagnie2;


		// On peut maintenant initialiser les couleurs comme objets contenant la liste de terrains de leur couleur
		couleur Brun = couleur("brun",2,liste_terrain_bru);
		couleur Bleuciel = couleur("bleu ciel",2,liste_terrain_blc);
		couleur Violet = couleur("violet",2,liste_terrain_vio);
		couleur Orange = couleur("orange",2,liste_terrain_ora);
		couleur Rouge= couleur("rouge",2,liste_terrain_rou);
		couleur Jaune= couleur("jaune",2,liste_terrain_jau);
		couleur Vert= couleur("vert",2,liste_terrain_ver);
		couleur Bleu = couleur("bleu",2,liste_terrain_bleu);


		couleur* liste_couleur = new couleur[9];

		//On peut maintenant créer la liste des couleurs :
		liste_couleur[0] = Brun;
		liste_couleur[1] = Bleuciel;
		liste_couleur[2] = Violet;
		liste_couleur[3] = Orange;
		liste_couleur[4] = Rouge;
		liste_couleur[5] = Jaune;
		liste_couleur[6] = Vert;
		liste_couleur[7] = Bleu;
		liste_couleur[8] = Gare;

		this->liste_propriete = liste_couleur;



		// Initialisation des 3 cases communaute

			communaute communaute1 = communaute("Communaute");
			communaute communaute2 = communaute("Communaute");
			communaute communaute3 = communaute("Communaute");

			Carte* pile_carte_communaute = new Carte[16];
					// Je crée chaque carte avec text gain perte deplacement telportation
			pile_carte_communaute[0] = Carte("Payez le police d'assurance : 50 euros",0,50);
			pile_carte_communaute[1] = Carte("Vous heritez de 100 euros",100);
			pile_carte_communaute[2] = Carte("Conservez cette carte pour pouvoir etre libere de prison");
			pile_carte_communaute[3] = Carte("Payez la note du medecin : 50 euros",0,50);
			pile_carte_communaute[4] = Carte("Vous gagnez le 2nd prix de beaute, recevez 100 euros",100);
			pile_carte_communaute[5] = Carte("Les contributions vous remboursent 20 euros",20);
			pile_carte_communaute[6] = Carte("Recevez vos interets : 25 euros",25);
			pile_carte_communaute[7] = Carte("Retournez au Boulevard de Belleville",0,0,0,&ter1);
			pile_carte_communaute[8] = Carte("Allez en prison",0,0,0,&Prison);
			pile_carte_communaute[9] = Carte("Placez vous sur la Case Depart",0,0,0,&Depart);
			pile_carte_communaute[10] = Carte("C'est votre anniversaire. Chaque joueur vous donne 20 euros.");
			pile_carte_communaute[11] = Carte("Recevez 100 euros",100);
			pile_carte_communaute[12] = Carte("Payez une amende de 10 euros ou tirez une carte chance");
			pile_carte_communaute[13] = Carte("Erreur de la banque en votre faveur, recevez 200 euros",200);
			pile_carte_communaute[14] = Carte("Vente de votre stock, recevez 50 euros",50);
			pile_carte_communaute[15] = Carte("Payez les frais d'hopital : 100 euros",0,100);

			communaute1.setPile_carte_commmuanute(pile_carte_communaute);
			communaute2.setPile_carte_commmuanute(pile_carte_communaute);
			communaute3.setPile_carte_commmuanute(pile_carte_communaute);

			// initialisation des 3 cases chance

			chance chance1 = chance("Chance");
			chance chance2 = chance("Chance");
			chance chance3 = chance("Chance");


			Carte* pile_carte_chance = new Carte[14];

				// Je crée chaque carte avec text gain perte deplacement telportation
			pile_carte_chance[0] = Carte("Allez directement sur la Case Départ",0,0,0,&Depart);
			pile_carte_chance[1] = Carte("Interpol vous arrête, rendez-vous en prison sans passer par la case départ",0,0,0); // A remplacer par la case prison
			pile_carte_chance[2] = Carte("Rendez-vous au Boulevard de la Villette",0,0,0,&ter6); // NULL à remplacer par case 11 du plateau
			pile_carte_chance[3] = Carte("Vous recevez un e amende pour conduite en état d'ivresse, payer 20 €",0,20);
			pile_carte_chance[4] = Carte("Vous gagnez un concours de mots croisés, recevez 100 €",100);
			pile_carte_chance[5] = Carte("Rendez-vous à la rue Henri Martin ",0,0,0,&ter14);// dernier null à remplacer par la case 24 du plateau
			pile_carte_chance[6] = Carte("Rendez-vous à la gare de Lyon",0,0,0,&gare2); // replace null => 15
			pile_carte_chance[7] = Carte("Vous avez été contrôlé avec un excès de vitesse de 80 km/h, veuillez payer 150 €",0,150,0);
			pile_carte_chance[8] = Carte("Payer les frais de scolarité de votre enfant, veuillez payer 150 €",0,150,0);
			pile_carte_chance[9] = Carte("Payer les réparations de vos maisons : 25 € / Maison , 100 € /Hôtel",0,0,0,NULL); // Plus compliqué que prévu il faudr afaire un triuc exprès
			pile_carte_chance[10] = Carte("Votre prêt rapporte 150 €",150,0,0,NULL);
			pile_carte_chance[11] = Carte("Conservez cette carte pour pouvoir être libéré de prison",0,0,0,NULL); // Encore les enbrouilles
			pile_carte_chance[12] = Carte("Rendez-vous à la Rue de la Paix",0,0,0,&ter22); // NULL à remplacr par #40
			pile_carte_chance[13] = Carte("La banque vous verse 50 €",50,0,0,NULL);

			chance1.setPile_carte_chance(pile_carte_chance);
			chance2.setPile_carte_chance(pile_carte_chance);
			chance3.setPile_carte_chance(pile_carte_chance);




		// Et on peut maintenant affecter une couleur à chaque terrain :
		ter1.setCouleur(&(liste_couleur[0]));
		ter2.setCouleur(&(liste_couleur[0]));

		ter3.setCouleur(&(liste_couleur[1]));
		ter4.setCouleur(&(liste_couleur[1]));
		ter5.setCouleur(&(liste_couleur[1]));

		ter6.setCouleur(&(liste_couleur[2]));
		ter7.setCouleur(&(liste_couleur[2]));
		ter8.setCouleur(&(liste_couleur[2]));

		ter9.setCouleur(&(liste_couleur[3]));
		ter10.setCouleur(&(liste_couleur[3]));
		ter11.setCouleur(&(liste_couleur[3]));

	ter12.setCouleur(&(liste_couleur[4]));
	ter13.setCouleur(&(liste_couleur[4]));
	ter14.setCouleur(&(liste_couleur[4]));

	ter15.setCouleur(&(liste_couleur[5]));
	ter16.setCouleur(&(liste_couleur[5]));
	ter17.setCouleur(&(liste_couleur[5]));

	ter18.setCouleur(&(liste_couleur[6]));
	ter19.setCouleur(&(liste_couleur[6]));
	ter20.setCouleur(&(liste_couleur[6]));

	ter21.setCouleur(&(liste_couleur[7]));
	ter22.setCouleur(&(liste_couleur[7]));

	
	//liaison de toutes les cases (liste chainée)
	
	Depart.setSuivante(&ter1);
	ter1.setSuivante(&communaute1);
	communaute1.setSuivante(&ter2);
	ter2.setSuivante(&impot);
	impot.setSuivante(&gare1);
	gare1.setSuivante(&ter3);
	ter3.setSuivante(&chance1);
	chance1.setSuivante(&ter4);
	ter4.setSuivante(&ter5);
	ter5.setSuivante(&Prison);

	Prison.setSuivante(&ter6);
	ter6.setSuivante(&compagnie1);
	compagnie1.setSuivante(&ter7);
	ter7.setSuivante(&ter8);
	ter8.setSuivante(&gare2);
	gare2.setSuivante(&ter9);
	ter9.setSuivante(&communaute2);
	communaute2.setSuivante(&ter10);
	ter10.setSuivante(&ter11);
	ter11.setSuivante(parc_gratuit);
	parc_gratuit->setSuivante(&ter12);

	ter12.setSuivante(&chance2);
	chance2.setSuivante(&ter13);
	ter13.setSuivante(&ter14);
	ter14.setSuivante(&gare3);
	gare3.setSuivante(&ter15);
	ter15.setSuivante(&ter16);
	ter16.setSuivante(&compagnie2);
	compagnie2.setSuivante(&ter17);
	ter17.setSuivante(&police);
	police.setSuivante(&ter18);

	ter18.setSuivante(&ter19);
	ter19.setSuivante(&communaute3);
	communaute3.setSuivante(&ter20);
	ter20.setSuivante(&gare4);
	gare4.setSuivante(&chance3);
	chance3.setSuivante(&ter21);
	ter21.setSuivante(&luxe);
	luxe.setSuivante(&ter22);
	ter22.setSuivante(&Depart);

	this->liste_case = &Depart;
	std::cout <<" Fin de la création du Plateau de Jeu ! " << std::endl;
}

//void Plateau::lierCases() {}. On vire cette méthode pour l'instant

Case* Plateau::getCase(int IDCase ){
	Case* position_actuelle = this->liste_case;
	for (int i =0; i < IDCase; i++){
		position_actuelle = position_actuelle->getSuivante();
	}
	return position_actuelle;
}

void Plateau::afficheCases() {
	Case* caseActuelle = this->liste_case ;
	for (int i=0;i<40;i++){
		std::cout << (*caseActuelle).getNom() << std::endl;
		caseActuelle = (*caseActuelle).getSuivante();
 	}
}

void Plateau::affciheCouleurs(){
	std::string couleurActuelle ;
	for (int i=0;i<8;i++){
			couleurActuelle = this->liste_propriete[i].getNom();
			std::cout << couleurActuelle << std::endl;

	 	}
}

