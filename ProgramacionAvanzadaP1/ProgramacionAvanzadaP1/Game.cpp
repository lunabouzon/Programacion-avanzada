#include "Game.h"
#include <iostream>
using namespace std;
void Game::ProcessKeyPressed(unsigned char key, int px, int py) {
	//de momento no hacemos nada....
	cout << "Tecla pulsada: " << key << endl;
}

void Game::ProcessMouseMovement(int x, int y) {
	//de momento no hacemos nada....
	cout << "Movimiento del mouse: " << x << endl;
}

void Game::ProcessMouseClick(int button, int state,int x, int y) {
	//de momento no hacemos nada....
	cout << "Clic: " << button << endl;
}

void Game::Init(){ }


void Game::Render(){ 

	this->GetTeapot().Render();
}


void Game::Update(){ }
