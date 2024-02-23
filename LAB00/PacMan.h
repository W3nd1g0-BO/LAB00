#pragma once
class PacMan
{
	PacMan();
public: 

	void moverse();
	void comer();
	void morir();

private:
	int posicionX;
	int posicionY;
	int vidas;
	int puntuacion;
};

