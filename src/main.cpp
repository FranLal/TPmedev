#include <iostream>
#include <GL/glut.h>
#include <GL/glu.h>
#include <grille.h>
#include "partie.h"

using namespace std;

Partie game = Partie();
void display(){
    
    game.display_humain();
}

int main(int argc, char* argv[]) {

    //This initializes glut
    glutInit(&argc, argv);
    glutInitWindowSize(1600,800);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Bataille Navale");

    game.Initialisation();
    game.display_humain();
    glutDisplayFunc(display);
    
    while(true){
        game.turn();
        display();
    }
    glutMainLoop();

	return 0;
}
