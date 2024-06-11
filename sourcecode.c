#include <stdio.h>
#include <stdlib.h>
#include <ANSI.h>
#include <string.h>

void mickey()
{
	int i, k;
	printf("\n");
	for(i=0; i<23; i++){
		printf(BLKHB"  ");
	}
	printf(reset"\n" BLKHB"    " BLKB"        " BLKHB"                      " BLKB"        " BLKHB"    " reset"\n" BLKHB"  " BLKB"            " BLKHB"    " BLKB"          " BLKHB"    " BLKB"            " BLKHB"  " reset "\n" BLKHB"  ");
	for(i=0; i<2; i++){
		for(k=0; k<21; k++){
			printf(BLKB"  ");
		}
		printf(BLKHB"  " reset"\n" BLKHB"  ");
	}
	printf(BLKB"            " WHTB"        " BLKB"  " WHTB"        " BLKB"            " BLKHB"  " reset"\n" BLKHB"    " BLKB"        " WHTB"                      " BLKB"        " BLKHB"    " reset"\n" BLKHB"          " BLKB"  " WHTB"                      " BLKB"  " BLKHB"          " reset "\n" BLKHB"        " BLKB"    " WHTB"                      " BLKB"    " BLKHB"        ");
	for(i=0; i<2; i++){
		printf(reset"\n" BLKHB"        " BLKB"    " WHTB"    " BLKB"  " WHTB"          " BLKB"  " WHTB"    " BLKB"    " BLKHB"        ");
	}
	printf(reset"\n" BLKHB"        " BLKB"  " WHTB"      " BLKB"  " WHTB"          " BLKB"  " WHTB"      " BLKB"  " BLKHB"        " reset"\n" BLKHB"          " WHTB"          " BLKB"      " WHTB"          " BLKHB"          " reset"\n" BLKHB"          " WHTB"            " BLKB"  " WHTB"            " BLKHB"          " reset "\n" BLKHB"            ");
	for(i=0; i<2; i++){
		printf(WHTB"      " BLKB"  ");
	} 
	printf(WHTB"      " BLKHB"            " reset "\n" BLKHB"                " WHTB"    " BLKB"      " WHTB"    " BLKHB"                " reset "\n" BLKHB"                  " WHTB"          " BLKHB"                  " reset"\n" BLKHB"        " WHTB"    " BLKHB"    " BLKB"              " BLKHB"    " WHTB"    " BLKHB"        " reset"\n" BLKHB"      " WHTB"      " BLKB"                      " WHTB"      " BLKHB"      " reset"\n" BLKHB"        " WHTB"    " BLKHB"    " BLKB"              " BLKHB"    " WHTB"    " BLKHB"        " reset"\n" BLKHB"                " REDB"              " BLKHB"                " reset"\n" BLKHB"                " REDB"  " WHTB"  " REDB"      " WHTB"  " REDB"  " BLKHB"                " reset"\n" BLKHB"                " REDB"              " BLKHB"                " reset"\n" BLKHB"                " REDB"      " BLKHB"  " REDB"      " BLKHB"                " reset"\n" BLKHB"                " YELB"      " BLKHB"  " YELB"      " BLKHB"                ");
	for(i=0; i<2; i++){
		printf(reset"\n" BLKHB"            " YELB"          " BLKHB"  " YELB"          " BLKHB"            ");
	}
	printf(reset"\n");
	for(i=0; i<23; i++){
		printf(BLKHB"  ");
	}
	printf(reset"\n");
}

void space_invaders()
{
	int i;
	printf("    " BLUB"  " reset "          " BLUB"  " reset"\n");
	for(i=0; i<2; i++){
		printf("      " BLUB"  " reset);
	}
	printf("\n    ");
	for(i=0; i<7; i++){
		printf(BLUB"  ");
	}
	printf(reset"\n  " BLUB"    " reset"  " BLUB"      " reset"  " BLUB"    " reset"\n");
	for(i=0; i<11; i++){
		printf(BLUB"  ");
	}
	printf(reset"\n" BLUB"  " reset"  ");
	for(i=0; i<7; i++){
		printf(BLUB"  ");
	}
	printf(reset"  " BLUB"  " reset"\n" BLUB"  " reset"  " BLUB"  " reset);
	for(i=0; i<5; i++){
		printf("  ");
	}
	printf(BLUB"  " reset"  " BLUB"  " reset"\n    ");
	for(i=0; i<2; i++){
		printf("  " BLUB"    " reset);
	}
	printf("\n");
}

void endgame()
{
	int x;
	printf("Votre avis nous interesse : avez-vous apprecie notre jeu ?\nNOTE /5 : ");
	scanf("%i", &x);
	if(x == 5){
		printf("Tu merite une recompense.");
		mickey();
	}
	else if(x == 0){
		printf("La derniere personne a avoir dit ca habitait en face du cimetiere. Aujourd'hui il habite en face de chez lui...");
	}
	else if(x == -1){
		printf("10e des 10 engagements : Jouons et amusons-nous tous ensemble.");
	}
	else{
		printf("Merci beaucoup d'avoir joue");
	}
}

typedef struct
{
	char nom[256];
	int score;
	char lettres[8];
	int tmp[8]; /*va contenir les indices des lettres qu'on a enlevé de la reserve*/
} Joueur;

enum {WHITE, BLUE, DBLUE, ORANGE, ROUGE};

typedef struct
{
	char str[16];
	char direction;
	int coordonnees[2];
} Mot;

void afficher_plateau(char plateau[15][15])
{
	int i, j;
	printf(BBLK "\n      ");
	for(j=0; j<15; j++){
		printf("%i    ", j);
		if(j<10){
			printf(" ");
		}
	}
	printf("\n   ");
	for(j=0; j<15; j++){
		if(j==0){
			printf(" _____");
		}
		else{
			printf("______");
		}
	}
	printf(" \n   ");
	for(j=0; j<15; j++){
		for(i=0; i<15; i++){
			if(j==0 || j==14){
				if(i==0 || i==7 || i==14){
					printf(REDB"|     ");
				}
				else if(i==3 || i==11){
					printf(BLUHB BBLK"|     ");
				}
				else{
					printf("|" WHTB"     ");
				}
			}
			else if(j==1 || j==13){
				if(i==0){
					printf(WHTB"|     ");
				}
				else if(i==1 || i==13){
					printf(REDHB BBLK"|     ");
				}
				else if(i==5 || i==9){
					printf(BLUB"|     ");
				}
				else{
					printf("|" WHTB"     ");
				}
			}
			else if(j==2 || j==12){
				if(i==0){
					printf(WHTB"|     ");
				}
				else if(i==2 || i==12){
					printf(REDHB BBLK"|     ");
				}
				else if(i==6 || i==8){
					printf(BLUHB BBLK"|     ");
				}
				else{
					printf("|" WHTB"     ");
				}
			}
			else if(j==3 || j==11){
				if(i==0){
					printf(WHTB"|     ");
				}
				else if(i==3 || i==11){
					printf(REDHB BBLK"|     ");
				}
				else if(i==0 || i==7 || i==14){
					printf(BLUHB BBLK"|     ");
				}
				else{
					printf("|" WHTB"     ");
				}
			}
			else if(j==4 || j==10){
				if(i==0){
					printf(WHTB"|     ");
				}
				else if(i==4 || i==10){
					printf(REDHB BBLK"|     ");
				}
				else{
					printf("|" WHTB"     ");
				}
			}
			else if(j==5 || j==9){
				if(i==0){
					printf(WHTB"|     ");
				}
				else if(i==1 || i==5 || i==9 || i==13){
					printf(BLUB"|     ");
				}
				else{
					printf("|" WHTB"     ");
				}
			}
			else if(j==6 || j==8){
				if(i==0){
					printf(WHTB"|     ");
				}
				else if(i==2 || i==6 || i==8 || i==12){
					printf(BLUHB BBLK"|     ");
				}
				else{
					printf("|" WHTB"     ");
				}
			}
			else{
				if(i==0 || i==14){
					printf(REDB"|     ");
				}
				else if(i==3 || i==11){
					printf(BLUHB BBLK"|     ");
				}
				else if(i==7){
					printf(MAGB"|     ");
				}
				else{
					printf("|" WHTB"     ");
				}
			}
		}
		printf("|" reset BBLK "\n%i ", j);
		if(j<10){
			printf(" ");
		}
		for(i=0; i<15; i++){
			if(j==0 || j==14){
				if(i==0 || i==7 || i==14){
					printf(REDB"|  %c  ", plateau[i][j]);
				}
				else if(i==3 || i==11){
					printf(BLUHB BBLK"|  %c  ", plateau[i][j]);
				}
				else{
					printf("|" WHTB"  %c  ", plateau[i][j]);
				}
			}
			else if(j==1 || j==13){
				if(i==0){
					printf(WHTB"|  %c  ", plateau[i][j]);
				}
				else if(i==1 || i==13){
					printf(REDHB BBLK"|  %c  ", plateau[i][j]);
				}
				else if(i==5 || i==9){
					printf(BLUB"|  %c  ", plateau[i][j]);
				}
				else{
					printf("|" WHTB"  %c  ", plateau[i][j]);
				}
			}
			else if(j==2 || j==12){
				if(i==0){
					printf(WHTB"|  %c  ", plateau[i][j]);
				}
				else if(i==2 || i==12){
					printf(REDHB BBLK"|  %c  ", plateau[i][j]);
				}
				else if(i==6 || i==8){
					printf(BLUHB BBLK"|  %c  ", plateau[i][j]);
				}
				else{
					printf("|" WHTB"  %c  ", plateau[i][j]);
				}
			}
			else if(j==3 || j==11){
				if(i==0){
					printf(WHTB"|  %c  ", plateau[i][j]);
				}
				else if(i==3 || i==11){
					printf(REDHB BBLK"|  %c  ", plateau[i][j]);
				}
				else if(i==0 || i==7 || i==14){
					printf(BLUHB BBLK"|  %c  ", plateau[i][j]);
				}
				else{
					printf("|" WHTB"  %c  ", plateau[i][j]);
				}
			}
			else if(j==4 || j==10){
				if(i==0){
					printf(WHTB"|  %c  ", plateau[i][j]);
				}
				else if(i==4 || i==10){
					printf(REDHB BBLK"|  %c  ", plateau[i][j]);
				}
				else{
					printf("|" WHTB"  %c  ", plateau[i][j]);
				}
			}
			else if(j==5 || j==9){
				if(i==0){
					printf(WHTB"|  %c  ", plateau[i][j]);
				}
				else if(i==1 || i==5 || i==9 || i==13){
					printf(BLUB"|  %c  ", plateau[i][j]);
				}
				else{
					printf("|" WHTB"  %c  ", plateau[i][j]);
				}
			}
			else if(j==6 || j==8){
				if(i==0){
					printf(WHTB"|  %c  ", plateau[i][j]);
				}
				else if(i==2 || i==6 || i==8 || i==12){
					printf(BLUHB BBLK"|  %c  ", plateau[i][j]);
				}
				else{
					printf("|" WHTB"  %c  ", plateau[i][j]);
				}
			}
			else{
				if(i==0 || i==14){
					printf(REDB"|  %c  ", plateau[i][j]);
				}
				else if(i==3 || i==11){
					printf(BLUHB BBLK"|  %c  ", plateau[i][j]);
				}
				else if(i==7){
					printf(MAGB"|  %c  ", plateau[i][j]);
				}
				else{
					printf("|" WHTB"  %c  ", plateau[i][j]);
				}
			}
		}
		printf("|" reset BBLK "\n   ");
		for(i=0; i<15; i++){
			if(j==0 || j==14){
				if(i==0 || i==7 || i==14){
					printf(REDB"|_____");
				}
				else if(i==3 || i==11){
					printf(BLUHB BBLK"|_____");
				}
				else{
					printf("|" WHTB"_____");
				}
			}
			else if(j==1 || j==13){
				if(i==0){
					printf(WHTB"|_____");
				}
				else if(i==1 || i==13){
					printf(REDHB BBLK"|_____");
				}
				else if(i==5 || i==9){
					printf(BLUB"|_____");
				}
				else{
					printf("|" WHTB"_____");
				}
			}
			else if(j==2 || j==12){
				if(i==0){
					printf(WHTB"|_____");
				}
				else if(i==2 || i==12){
					printf(REDHB BBLK"|_____");
				}
				else if(i==6 || i==8){
					printf(BLUHB BBLK"|_____");
				}
				else{
					printf("|" WHTB"_____");
				}
			}
			else if(j==3 || j==11){
				if(i==0){
					printf(WHTB"|_____");
				}
				else if(i==3 || i==11){
					printf(REDHB BBLK"|_____");
				}
				else if(i==0 || i==7 || i==14){
					printf(BLUHB BBLK"|_____");
				}
				else{
					printf("|" WHTB"_____");
				}
			}
			else if(j==4 || j==10){
				if(i==0){
					printf(WHTB"|_____");
				}
				else if(i==4 || i==10){
					printf(REDHB BBLK"|_____");
				}
				else{
					printf("|" WHTB"_____");
				}
			}
			else if(j==5 || j==9){
				if(i==0){
					printf(WHTB"|_____");
				}
				else if(i==1 || i==5 || i==9 || i==13){
					printf(BLUB"|_____");
				}
				else{
					printf("|" WHTB"_____");
				}
			}
			else if(j==6 || j==8){
				if(i==0){
					printf(WHTB"|_____");
				}
				else if(i==2 || i==6 || i==8 || i==12){
					printf(BLUHB BBLK"|_____");
				}
				else{
					printf("|" WHTB"_____");
				}
			}
			else{
				if(i==0 || i==14){
					printf(REDB"|_____");
				}
				else if(i==3 || i==11){
					printf(BLUHB BBLK"|_____");
				}
				else if(i==7){
					printf(MAGB"|_____");
				}
				else{
					printf("|" WHTB"_____");
				}
			}
		}
		printf("|" reset BBLK "\n   ");
	}
	printf(reset);
}

int demander_nb_joueurs()
{ 
    int nb_joueurs;
	do{
		printf("Nombre de joueurs : ");
		scanf("%i", &nb_joueurs);
    }while(nb_joueurs<2 || nb_joueurs>4);
	return nb_joueurs;
}

int pioche0(char reserve[100])
{
    int n;
	do{
		n = rand()%100;
	}while(reserve[n] == ' ');
	return n;
}

Joueur pioche_joueur(Joueur joueur, char reserve[100])
{
	int i, n;
	for(i=0; i<8; i++){
		if(joueur.lettres[i] == ' '){
			n = pioche0(reserve);
			joueur.lettres[i] = reserve[n];
			joueur.tmp[i] = n;
		}
	}
}

Joueur initialiser_joueur(Joueur joueur, char reserve[100])
{
	printf("Saisir le nom du joueur : ");
	scanf("%s", joueur.nom);
	int i, n;
	for(i=0; i<8; i++){
		n = pioche0(reserve);
		joueur.lettres[i] = reserve[n];
		joueur.tmp[i] = n;
	}
	joueur.score = 0;
	return joueur;
}

Mot saisir_mot(char plateau[15][15])
{  
    Mot mot;
	printf("Saisir le mot a placer, les coordonnees de l'initiale et la direction du mot (horizontal ou vertical)\nmot abcisse ordonnee H/V\n<?> ");
    scanf("%s %d %d %c", mot.str, &mot.coordonnees[0], &mot.coordonnees[1], &mot.direction);
	return mot;
}

void afficher_joueur(Joueur joueur)
{
	printf("\n%s	%ipts\n", joueur.nom, joueur.score);
	int i;
	for(i=0; i<8; i++){
		printf("%c ", joueur.lettres[i]);
	}
}

void main()
{
	char plateau[15][15];
    int x, y, i, j, k;
	for(y=0; y<15; y++){
        for(x=0; x<15; x++){
            plateau[y][x] = ' ';
        }
    }
	
    int plateau2[15][15];
    for (i=0; i<15; i++){
        for (j=0; j<15; j++){
		plateau2[i][j] = WHITE;
        }
    }
    for (i=0; i<15; i++){
        if (i == 0 || i ==14){
            plateau2[i][3] = plateau2[i][11] = BLUE;
            plateau2[i][0] = plateau2[i][7] = plateau2[i][14] = ROUGE;
        }
        else if (i == 1 || i ==13){
            plateau2[i][1] = plateau2[i][13] = ORANGE;
            plateau2[i][5] = plateau2[i][9] = DBLUE;
        }
         else if (i == 2 || i ==12){
            plateau2[i][2] = plateau2[i][12] = ORANGE;
            plateau2[i][6] = plateau2[i][8] = BLUE;
        }
         else if (i == 3 || i ==11){
            plateau2[i][3] = plateau2[i][11] = ORANGE;
            plateau2[i][0] = plateau2[i][7] = plateau2[i][14] = BLUE;
        }
         else if (i == 4 || i ==10){
            plateau2[i][4] = plateau2[i][10] = ORANGE;
        }
         else if (i == 5 || i ==9){
            plateau2[i][1] = plateau2[i][5] = plateau2[i][9] = plateau2[i][13]= DBLUE;
        }
         else if (i == 6 || i ==8){
             plateau2[i][2] = plateau2[i][6] = plateau2[i][8] = plateau2[i][12]= BLUE;
        }
        else if (i == 7){
            plateau2[i][0] = plateau2[i][14] = ROUGE;
            plateau2[i][3] = plateau2[i][11] = BLUE;
        }
    }

	char reserve[] = {'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'B', 'B', 'C', 'C', 'D', 'D', 'D', 'D', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'F', 'F', 'G', 'G', 'G', 'H', 'H', 'I', 'I', 'I', 'I', 'I', 'I', 'I', 'I', 'I', 'J', 'K', 'L', 'L', 'L', 'L', 'M', 'M', 'N', 'N', 'N', 'N', 'N', 'N', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'P', 'P', 'Q', 'R', 'R', 'R', 'R', 'R', 'R', 'S', 'S', 'S', 'S', 'T', 'T', 'T', 'T', 'T', 'T', 'U', 'U', 'U', 'U', 'V', 'V', 'W', 'W', 'X', 'Y', 'Y', 'Z', '*', '*'}; /* représente ttes les tuiles disponibles */
	int valeurs_lettres[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 3, 3, 2, 2, 2, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 2, 2, 2, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 8, 5, 1, 1, 1, 1, 3, 3, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3, 3, 10, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 4, 4, 4, 4, 8, 4, 4, 10, 0, 0}; /* valeurs des lettres */
    
	int nb_joueurs=demander_nb_joueurs();
	Joueur joueurs[nb_joueurs];
	for(i=0; i<nb_joueurs; i++){
		joueurs[i] = initialiser_joueur(joueurs[i], reserve);
		for(k=0; k<8; k++){
			reserve[joueurs[i].tmp[k]] = ' ';
		}
	}
	
	afficher_plateau(plateau);
	int tour=-1, question=0;
	char action;
	do{
		tour = tour+1;
		afficher_joueur(joueurs[tour%nb_joueurs]);
		printf("\nSaisissez J pour jouer, D pour defausser, A pour mettre fin a la partie\n<?> ");
		scanf("%c", &action);
		
		if(action == 'J'){
			Mot mot=saisir_mot(plateau);
			if (plateau[mot.coordonnees[0]][mot.coordonnees[1]] == ' ') {
				if (mot.direction == 'V') {
					for (i = 0; i < strlen(mot.str); i++) {
						plateau[mot.coordonnees[0]][mot.coordonnees[1] + i] = mot.str[i]; 
					}
				}
				else if (mot.direction == 'H') {
					for (i = 0; i < strlen(mot.str); i++) {
						plateau[mot.coordonnees[0] + i][mot.coordonnees[1]] = mot.str[i]; 
					}
				}
			}
			int occurence[strlen(mot.str)];
			for(i=0; i<strlen(mot.str); i++){
				occurence[i]=0;
			}
			for(i=0; i<strlen(mot.str); i++){
				for(k=0; k<8; k++){
					if(mot.str[i] == joueurs[tour%nb_joueurs].lettres[k]  && occurence[i] == 0){
						joueurs[tour%nb_joueurs].lettres[k] = ' ';
						occurence[i] = 1;
					}
				}
			}
			afficher_plateau(plateau);
		}
		
		if(action == 'D'){
			for(i=0; i<8; i++){
				reserve[joueurs[tour%nb_joueurs].tmp[i]] = joueurs[tour%nb_joueurs].lettres[i];
				joueurs[tour%nb_joueurs].lettres[i] = ' ';
			}
			joueurs[tour%nb_joueurs] = pioche_joueur(joueurs[tour%nb_joueurs], reserve);
			for(i=0; i<8; i++){
				reserve[joueurs[tour%nb_joueurs].tmp[i]] = ' ';
			}
			afficher_joueur(joueurs[tour%nb_joueurs]);
		}		
	}while(action != 'A');
	
	int vainqueur=0;
	for(i=0; i<nb_joueurs; i++){
		if(joueurs[i].score > joueurs[vainqueur].score){
			vainqueur=i;
		}
	}
	space_invaders();
	for(i=0; i<nb_joueurs; i++){
		printf("%s %ipts\n", joueurs[i].nom, joueurs[i].score);
	}
	printf("\nVictoire de %s\n", joueurs[vainqueur].nom);
	endgame();
}
