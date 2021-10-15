#pragma once
#include "Teapot.h"
class Game
{
private:

	Teapot teapot;

public:

	inline Teapot GetTeapot() { return this->teapot;}

	void Init();
	void Render();
	void Update();								//archivo de cabecera inicial de la clase Game.
	void ProcessKeyPressed(unsigned char key, int px, int py);
	void ProcessMouseMovement(int x, int y);
	void ProcessMouseClick(int button, int state, int x, int y);
};

