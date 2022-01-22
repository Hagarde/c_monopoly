/*
 * initialisation_cartes.h
 *
 *  Created on: 12 janv. 2022
 *      Author: aveyronvictor
 */

#ifndef INITIALISATION_PROPRIETE
#define INITIALISATION_PROPRIETE


#include "Carte.h"
#include "depart.h"
#include "Plateau.h"
#include "propriete.h"
#include "couleur.h"
#include "Terrain.h"
#include "Gare.h"

couleur* initialisation_propriete () {
	couleur* liste_couleur = new couleur[9];

	// initialisation propriete d'un couleur
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

	
	// On peut maintenant initialiser les couleurs comme objets contenant la liste de terrains de leur couleur
	couleur Brun = couleur("brun",2,liste_terrain_bru);
	couleur Bleuciel = couleur("bleu ciel",2,liste_terrain_blc);
	couleur Violet = couleur("violet",2,liste_terrain_vio);
	couleur Orange = couleur("orange",2,liste_terrain_ora);
	couleur Rouge= couleur("rouge",2,liste_terrain_rou);
	couleur Jaune= couleur("jaune",2,liste_terrain_jau);
	couleur Vert= couleur("vert",2,liste_terrain_ver);
	couleur Bleu = couleur("bleu",2,liste_terrain_bleu);
		
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
	
	
	return liste_couleur ;
}


#endif /* INITIALISATION_CARTES_H_ */
