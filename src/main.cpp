#include <iostream>
#include <GL/glut.h>
#include <GL/glu.h>
#include <grille.h>

using namespace std;

void display(){
}

int main(int argc, char* argv[]) {

    //This initializes glut
    glutInit(&argc, argv);
    glutInitWindowSize(1600,800);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Bataille Navale");

    glutDisplayFunc(display);
    
    glutMainLoop();

	return 0;
}
