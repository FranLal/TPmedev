#pragma once;
#include "constante.h"
#include "joueur.h"

class Partie{
private:
    Joueur* humain;
    Joueur* ordinateur;
    bool end;
public:
    Partie();
    
    bool isEnd() {return end;}
    void setEnd(bool _end);
    void Initialisation();
};