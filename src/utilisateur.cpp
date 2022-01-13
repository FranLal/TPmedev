#include "constante.h"
#include "utilisateur.h"
#include <iostream>

void Utilisateur::attack(){
    Case* case_attaquee;
    //On récupère une case à attaquer qui n'a pas déjà été visée
    do {
        cout<<" Rentrer l'abscisse x de la case à attaquer"<< endl;
        int x=-1,y=-1;
        do {
            cin>>x;
        } while (x<1 || x>TAILLE_GRILLE);
        cout<<" Rentrer l'ordonnée y de la case à attaquer"<< endl;
        do {
            cin>>y;
        } while (y<1 || y>TAILLE_GRILLE);
        case_attaquee=grille_tir->getCase(y,x);
        if (case_attaquee->getDecouverte()) cout<<"Case déjà attaquée"<<endl;
    } while (case_attaquee->getDecouverte());

    case_attaquee->setDecouverte(true);
    if(case_attaquee->getContenu()==MER) cout<<"Plouf!"<<endl;
    
    if(case_attaquee->getContenu()==BATEAU){
        Bateau* bateau=case_attaquee->getBateau();
        cout<<"Bateau "<< bateau->getNom() << " touché"<<endl;
        bateau->setVie(bateau->getVie()-1);
        case_attaquee->setContenu(BATEAU_TOUCHE);
    }


}