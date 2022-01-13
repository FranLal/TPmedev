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
    if(case_attaquee->getContenu()==MER) cout<<"Plouf!"<<endl;
    
    if(case_attaquee->getContenu()==BATEAU){
        Bateau* bateau=case_attaquee->getBateau();
        cout<<"Bateau "<< bateau->getNom() << " touché"<<endl;
        bateau->setVie(bateau->getVie()-1);
        case_attaquee->setContenu(BATEAU_TOUCHE);
    }
}