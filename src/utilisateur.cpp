#include "constante.h"
#include "utilisateur.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>

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
        case_attaquee=grille_tir->getCase(y-1,x-1);
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

void Utilisateur::genererBateaux() {


   ifstream fichier("C:/eleve/Documents/MEDEV/TPmedev/Init.txt");

   if(fichier)
   {
      //L'ouverture s'est bien passée, on peut donc lire

      string ligne; //Une variable pour stocker les lignes lues
      
      int i = 0;
      while(getline(fichier, ligne)) //Tant qu'on n'est pas à la fin, on lit
      {
         string mot1, mot2;
         string mot;
         stringstream str_ligne(ligne);
         getline(str_ligne, mot1, ' ');
         getline(str_ligne, mot2, ' ');
         liste_bateaux[i] = Bateau(NOMS_DES_BATEAUX[i], TAILLES_DES_BATEAUX[i], mot1[1], mot1[0], mot2[0] == mot1[0]);
         grille_bateaux->add_boat(&liste_bateaux[i]);
      }
      fichier.close();  //On referme le fichier
    }
    else
    {
       cout << "ERREUR: Impossible d'ouvrir le fichier en lecture." << endl;
    }
}