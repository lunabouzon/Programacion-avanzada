// ProgramacionAvanzadaP1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <string>
#include <GL/glut.h>
#include "Game.h"
using namespace std;

//////////////////////// CONSTANTES //////////////////////////

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const int WINDOW_POSITION_X = 300;               //Uso de variables globales y función de escribir por consola.
const int WINDOW_POSITION_Y = 400;
const char TITLE[] = "PARTE 1";
bool fullScreenMode;

const GLclampf RED = 0.2;
const GLclampf GREEN = 0.6;                     //Constantes que definen el color de fondo de la ventana
const GLclampf BLUE = 0.5;
const GLclampf ALPHA = 1.0;
//////////////////////// USANDO GAME //////////////////////////

Game game;

//////////////////////// FUNCIONES AUXILIARES //////////////////////////

void writeLine(string text) {
    cout << text << endl;
}


//////////////////////// FUNCIONES OPENGL //////////////////////////

void initGraphics() {
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHTING);
    glEnable(GL_LIGHT0);
    glEnable(GL_COLOR_MATERIAL);
    glClearColor(RED, GREEN, BLUE, ALPHA);
    game.Init();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);                             //Funciones de OpenGL para iniciar los gráficos y dibujado
    glLoadIdentity();
    game.Render();
    glutSwapBuffers();
}

void reshape(GLsizei width, GLsizei height) {
    if (height == 0) height = 1;
    GLfloat aspectRatio = (GLfloat)width / (GLfloat)height;
    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);                                //funcion reshape
    glLoadIdentity();
    gluPerspective(60.0f, aspectRatio, 1.0f, 200.0f);
    glMatrixMode(GL_MODELVIEW);
}

void idle() {
    game.Update();
    glutPostRedisplay();
}

void keyPressed(unsigned char key, int px, int py) {
    game.ProcessKeyPressed(key, px, py);
    glutPostRedisplay();
}
                                      // Código de las funciones idle, keyPressed, mouseMoved y mouseClicked.
void mouseMoved(int x, int y) {
    game.ProcessMouseMovement(x, y);
    glutPostRedisplay();
}

void mouseClicked(int button, int state, int x, int y) {
    game.ProcessMouseClick(button, state, x, y);
    glutPostRedisplay();
}

void specialKey(int key, int x, int y) {
    switch (key){
    case GLUT_KEY_F11:
        fullScreenMode = !fullScreenMode;
        if (fullScreenMode) {
            glutFullScreen();
        }
        else {
            glutReshapeWindow(WINDOW_WIDTH, WINDOW_HEIGHT);
            glutPositionWindow(WINDOW_POSITION_X, WINDOW_POSITION_Y);
        }
        break;
     }
}

int main(int argc, char** argv)
{
    writeLine("Hello world con OpenGL");

    writeLine("Generando ventana...");
    glutInit(&argc, argv);                                     // Inicializa GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH); // double buffer, modo RGBA, depth buffer
    glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);                              // tamaño inicial de la ventana
    glutInitWindowPosition(WINDOW_POSITION_X, WINDOW_POSITION_Y);                          // posicion inicial de la ventana
    glutCreateWindow(TITLE);                                // crea una ventana con el titulo dado

    writeLine("Registrando funciones de tratamiento de eventos");
    glutReshapeFunc(reshape);                           //tratamiento del evento de redimensionado de la ventana
    glutDisplayFunc(display);     //tratamiento del evento de repintado de la ventana
    glutSpecialFunc(specialKey);      //tratamiento para la pantalla completa
    glutKeyboardFunc(keyPressed); //tratamiento del evento de tecla pulsada
    glutMotionFunc(mouseMoved); //tratamiento del evento de movimiento de raton
    glutMouseFunc(mouseClicked); //tratamiento del evento de clic del raton
    glutIdleFunc(idle); // para cuando no hay eventos que tratar

    writeLine("Iniciando graficos...");
    initGraphics();                                     // iniciamos OPENGL

    writeLine("Iniciando bucle infinito...");
    writeLine("Pulse F11 para activar/desactivar el modo de pantalla completa.");
    glutMainLoop();
}
