#include <stdio.h>
#include "ANSI.h"

/* 
A   E   I  L NO   RSTU      = 1
   D  G                     = 2
 BC         M  P            = 3
     F H              VW Y  = 4
          K                 = 5
         J              X   = 8
                Q         Z = 10
*/

void grille(char plateau[][15]){
        int i, j;
        for(j=0; j<15; j++){
                if(j==0){
                        printf(" _____");
                }
                else{
                        printf("______");
                }
        }
        printf(" \n");
        for(j=0; j<15; j++){
                for(i=0; i<15; i++){
                        if(j==0 || j==14){
                                if(i==0 || i==7 || i==14){
                                        printf("|" REDB"     "reset);
                                }
                                else if(i==3 || i==11){
                                        printf("|" BLUHB"     "reset);
                                }
                                else{
                                        printf("|" WHTB"     "reset);
                                }
                        }
                        else if(j==1 || j==13){
                                if(i==1 || i==13){
                                        printf("|" REDHB"     "reset);
                                }
                                else if(i==5 || i==9){
                                        printf("|" BLUB"     "reset);
                                }
                                else{
                                        printf("|" WHTB"     "reset);
                                }
                        }
                        else if(j==2 || j==12){
                                if(i==2 || i==12){
                                        printf("|" REDHB"     "reset);
                                }
                                else if(i==6 || i==8){
                                        printf("|" BLUHB"     "reset);
                                }
                                else{
                                        printf("|" WHTB"     "reset);
                                }
                        }
                        else if(j==3 || j==11){
                                if(i==3 || i==11){
                                        printf("|" REDHB"     "reset);
                                }
                                else if(i==0 || i==7 || i==14){
                                        printf("|" BLUHB"     "reset);
                                }
                                else{
                                        printf("|" WHTB"     "reset);
                                }
                        }
                        else if(j==4 || j==10){
                                if(i==4 || i==10){
                                        printf("|" REDHB"     "reset);
                                }
                                else{
                                        printf("|" WHTB"     "reset);
                                }
                        }
                        else if(j==5 || j==9){
                                if(i==1 || i==5 || i==9 || i==13){
                                        printf("|" BLUB"     "reset);
                                }
                                else{
                                        printf("|" WHTB"     "reset);
                                }
                        }
                        else if(j==6 || j==8){
                                if(i==2 || i==6 || i==8 || i==12){
                                        printf("|" BLUHB"     "reset);
                                }
                                else{
                                        printf("|" WHTB"     "reset);
                                }
                        }
                        else{
                                if(i==0 || i==14){
                                        printf("|" REDB"     "reset);
                                }
                                else if(i==3 || i==11){
                                        printf("|" BLUHB"     "reset);
                                }
                                else if(i==7){
                                        printf("|" MAGB"     "reset);
                                }
                                else{
                                        printf("|" WHTB"     "reset);
                                }
                        }
                }
                printf("|\n");
                for(i=0; i<15; i++){
                        if(j==0 || j==14){
                                if(i==0 || i==7 || i==14){
                                        printf("|" REDB"  %c  "reset, plateau[i][j]);
                                }
                                else if(i==3 || i==11){
                                        printf("|" BLUHB"  %c  "reset, plateau[i][j]);
                                }
                                else{
                                        printf("|" WHTB"  %c  "reset, plateau[i][j]);
                                }
                        }
                        else if(j==1 || j==13){
                                if(i==1 || i==13){
                                        printf("|" REDHB"  %c  "reset, plateau[i][j]);
                                }
                                else if(i==5 || i==9){
                                        printf("|" BLUB"  %c  "reset, plateau[i][j]);
                                }
                                else{
                                        printf("|" WHTB"  %c  "reset, plateau[i][j]);
                                }
                        }
                        else if(j==2 || j==12){
                                if(i==2 || i==12){
                                        printf("|" REDHB"  %c  "reset, plateau[i][j]);
                                }
                                else if(i==6 || i==8){
                                        printf("|" BLUHB"  %c  "reset, plateau[i][j]);
                                }
                                else{
                                        printf("|" WHTB"  %c  "reset, plateau[i][j]);
                                }
                        }
                        else if(j==3 || j==11){
                                if(i==3 || i==11){
                                        printf("|" REDHB"  %c  "reset, plateau[i][j]);
                                }
                                else if(i==0 || i==7 || i==14){
                                        printf("|" BLUHB"  %c  "reset, plateau[i][j]);
                                }
                                else{
                                        printf("|" WHTB"  %c  "reset, plateau[i][j]);
                                }
                        }
                        else if(j==4 || j==10){
                                if(i==4 || i==10){
                                        printf("|" REDHB"  %c  "reset, plateau[i][j]);
                                }
                                else{
                                        printf("|" WHTB"  %c  "reset, plateau[i][j]);
                                }
                        }
                        else if(j==5 || j==9){
                                if(i==1 || i==5 || i==9 || i==13){
                                        printf("|" BLUB"  %c  "reset, plateau[i][j]);
                                }
                                else{
                                        printf("|" WHTB"  %c  "reset, plateau[i][j]);
                                }
                        }
                        else if(j==6 || j==8){
                                if(i==2 || i==6 || i==8 || i==12){
                                        printf("|" BLUHB"  %c  "reset, plateau[i][j]);
                                }
                                else{
                                        printf("|" WHTB"  %c  "reset, plateau[i][j]);
                                }
                        }
                        else{
                                if(i==0 || i==14){
                                        printf("|" REDB"  %c  "reset, plateau[i][j]);
                                }
                                else if(i==3 || i==11){
                                        printf("|" BLUHB"  %c  "reset, plateau[i][j]);
                                }
                                else if(i==7){
                                        printf("|" MAGB"  %c  "reset, plateau[i][j]);
                                }
                                else{
                                        printf("|" WHTB"  %c  "reset, plateau[i][j]);
                                }
                        }
                }
                printf("|\n");
                for(i=0; i<15; i++){
                        if(j==0 || j==14){
                                if(i==0 || i==7 || i==14){
                                        printf("|" REDB"_____"reset);
                                }
                                else if(i==3 || i==11){
                                        printf("|" BLUHB"_____"reset);
                                }
                                else{
                                        printf("|" WHTB"_____"reset);
                                }
                        }
                        else if(j==1 || j==13){
                                if(i==1 || i==13){
                                        printf("|" REDHB"_____"reset);
                                }
                                else if(i==5 || i==9){
                                        printf("|" BLUB"_____"reset);
                                }
                                else{
                                        printf("|" WHTB"_____"reset);
                                }
                        }
                        else if(j==2 || j==12){
                                if(i==2 || i==12){
                                        printf("|" REDHB"_____"reset);
                                }
                                else if(i==6 || i==8){
                                        printf("|" BLUHB"_____"reset);
                                }
                                else{
                                        printf("|" WHTB"_____"reset);
                                }
                        }
                        else if(j==3 || j==11){
                                if(i==3 || i==11){
                                        printf("|" REDHB"_____"reset);
                                }
                                else if(i==0 || i==7 || i==14){
                                        printf("|" BLUHB"_____"reset);
                                }
                                else{
                                        printf("|" WHTB"_____"reset);
                                }
                        }
                        else if(j==4 || j==10){
                                if(i==4 || i==10){
                                        printf("|" REDHB"_____"reset);
                                }
                                else{
                                        printf("|" WHTB"_____"reset);
                                }
                        }
                        else if(j==5 || j==9){
                                if(i==1 || i==5 || i==9 || i==13){
                                        printf("|" BLUB"_____"reset);
                                }
                                else{
                                        printf("|" WHTB"_____"reset);
                                }
                        }
                        else if(j==6 || j==8){
                                if(i==2 || i==6 || i==8 || i==12){
                                        printf("|" BLUHB"_____"reset);
                                }
                                else{
                                        printf("|" WHTB"_____"reset);
                                }
                        }
                        else{
                                if(i==0 || i==14){
                                        printf("|" REDB"_____"reset);
                                }
                                else if(i==3 || i==11){
                                        printf("|" BLUHB"_____"reset);
                                }
                                else if(i==7){
                                        printf("|" MAGB"_____"reset);
                                }
                                else{
                                        printf("|" WHTB"_____"reset);
                                }
                        }
                }
                printf("|\n");
        }
}

int demander_nb_joueurs(){ 
    int nb_joueurs;
    printf("Nombre de joueurs : ");
    scanf("%i", &nb_joueurs);
    return nb_joueurs;
}

int main(){
    char plateau[15][15]; /* tableau qui représente le contenu (lettre) de chaque case */
    char j1[8], j2[8], j3[8], j4[8]; /* tableaux qui contiennent la main de chaque joueur */
    int score_j1=0, score_j2=0, score_j3=0, score_j4=0;
    char reserve[] = {'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'A', 'B', 'B', 'C', 'C', 'D', 'D', 'D', 'D', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'E', 'F', 'F', 'G', 'G', 'G', 'H', 'H', 'I', 'I', 'I', 'I', 'I', 'I', 'I', 'I', 'I', 'J', 'K', 'L', 'L', 'L', 'L', 'M', 'M', 'N', 'N', 'N', 'N', 'N', 'N', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'O', 'P', 'P', 'Q', 'R', 'R', 'R', 'R', 'R', 'R', 'S', 'S', 'S', 'S', 'T', 'T', 'T', 'T', 'T', 'T', 'U', 'U', 'U', 'U', 'V', 'V', 'W', 'W', 'X', 'Y', 'Y', 'Z', '*', '*'}; /* représente ttes les tuiles disponibles */
    int valeurs_lettres[] = {1, 2, 3, 4, 5, 8, 10}; /* valeurs possibles des lettres */
    int x, y;
    for(y=0; y<15; y++){
        for(x=0; x<15; x++){
            plateau[y][x] = ' ';
        }
    }
    int nb_joueurs;
    nb_joueurs = demander_nb_joueurs();
    grille(plateau);
}