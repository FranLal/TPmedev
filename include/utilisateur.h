#pragma once

#include <string>
#include "joueur.h"
using namespace std;

class Utilisateur : public Joueur {
public:
    Utilisateur() : Joueur() {}
    Utilisateur(string _nom, Grille* _grille_bateaux, Grille* _grille_tir) : Joueur(string _nom, Grille* _grille_bateaux, Grille* _grille_tir) {}

    void attack();
};