#include "partie.h"
#include "utilisateur.h"
#include "ordi.h"
using namespace std; 


Partie::Partie(){
   humain = new Utilisateur;
   ordinateur = new Ordi;
}




void Partie::Initialisation(){
   cout << "La partie va commencer" << endl;
   ordinateur->genererBateaux();
   humain->genererBateaux();
   ordinateur->setGrilleTir(humain->getGrilleBateaux());
   humain->setGrilleTir(ordinateur->getGrilleBateaux());
}

void Partie::display_humain(){
   humain->display_board();
}

void Partie::turn(){
   humain->attack();
   ordinateur->attack();
   std::cout<<"fin  du tour"<<std::endl;
}