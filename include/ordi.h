#pragma once


#include "joueur.h"

class Ordi : public Joueur {
public:
    Ordi() : Joueur() {}
    Ordi(string _nom, Grille* _grille_bateaux, Grille* _grille_tir) : Joueur(_nom, _grille_bateaux, _grille_tir) {}

    void attack();
};