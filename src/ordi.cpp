#include "ordi.h"
#include <stdlib.h>
#include <time.h>
using namespace std;

void Ordi::attack(){
    srand(time(NULL));
    int x = -1;
    int y = -1;
    Case* case_attaquee;
    do {
        x =  rand() % 10;
        y =  rand() % 10;
        case_attaquee = grille_tir->getCase(x, y);
    } while ((x < 0 || x > TAILLE_GRILLE || y < 0 || y > TAILLE_GRILLE) && case_attaquee->getDecouverte());

    case_attaquee->setDecouverte(true);
    if(case_attaquee->getContenu()==MER){ 
        cout<<"Plouf!"<<endl;
        case_attaquee->setContenu(DANS_LEAU);
    }
    
    if(case_attaquee->getContenu()==BATEAU){
        Bateau* bateau=case_attaquee->getBateau();
        cout<<"Bateau "<< bateau->getNom() << " touché"<<endl;
        bateau->setVie(bateau->getVie()-1);
        case_attaquee->setContenu(BATEAU_TOUCHE);
    }
}

void Ordi::genererBateaux() {
    // Si l'algo marche :
    srand(time(NULL));

    bool cases_occupees[TAILLE_GRILLE][TAILLE_GRILLE];
    for (int i = 0; i < TAILLE_GRILLE; i++) {
        for (int j = 0; j < TAILLE_GRILLE; j++) {
            cases_occupees[i][j] = false;
        }
    }
    
    int x, y;
    bool horizontal, occupe;
    for (int i = 0; i < NB_BATEAUX; i++) {
        occupe = false;
        while (!occupe) {
            x = rand()%10;
            y = rand()%10;
            horizontal = rand()%2;
            if (x + horizontal*TAILLES_DES_BATEAUX[i] >= TAILLE_GRILLE || y + (1-horizontal)*TAILLES_DES_BATEAUX[i] >= TAILLE_GRILLE) {
                occupe = true;
            }
            if (!occupe) {
                for (int j = 0; j < TAILLES_DES_BATEAUX[i]; j++) {
                    if (cases_occupees[y+j*(1-horizontal)][x+j*horizontal]) {
                        occupe = true;
                        break;
                    }
                }
            }
        }

        for (int j = 0; j < TAILLES_DES_BATEAUX[i]; j++) {
            cases_occupees[y+j*(1-horizontal)][x+j*horizontal] = true;
        }

        liste_bateaux[i] = Bateau(NOMS_DES_BATEAUX[i], x, y, TAILLES_DES_BATEAUX[i], horizontal);
        grille_bateaux->add_boat(&liste_bateaux[i]);
    }
    






    // Si l'algo ne marche pas :
    /*
    liste_bateaux[0] = Bateau (NOMS_DES_BATEAUX[0],5,0,0,true);
    liste_bateaux[1] = Bateau (NOMS_DES_BATEAUX[1],4,1,1,true);
    liste_bateaux[2] = Bateau (NOMS_DES_BATEAUX[2],3,2,2,true);
    liste_bateaux[3] = Bateau (NOMS_DES_BATEAUX[3],3,3,3,true);
    liste_bateaux[4] = Bateau (NOMS_DES_BATEAUX[4],2,4,4,true);
    for(int i=0;i<NB_BATEAUX;i++) grille_bateaux->add_boat(&liste_bateaux[i]);
    */
}