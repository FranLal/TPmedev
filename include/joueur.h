#pragma once

#include <string>
#include "grille.h"

using namespace std;

class Joueur {
private:
    string nom;
    int pv;
    Grille* grille_bateaux;
    Grille* grille_tir;
public:
    Joueur();
    Joueur(string _nom, Grille* _grille_bateaux, Grille* _grille_tir);

    virtual void attack();

    string getNom() { return nom;}
    void setNom(string _nom) { nom = _nom;}
    int getPv() { return pv;}
    void setPv(int _pv) { pv = _pv;}
    Grille* getGrilleBateaux() { return grille_bateaux;}
    void setGrilleBateaux(Grille* _grille_bateaux) { grille_bateaux = _grille_bateaux;}
    Grille* getGrilleTir() { return grille_tir;}
    void setGrilleTir(Grille* _grille_tir) { grille_tir = _grille_tir;}
    
};