#pragma once
class Comestibles
{

public:
	void comerPunto();
	void comerBonus();
	void comerFruta();
	void generarFrut();

private:
	int pos_Puntos;
	int pos_Bonus;
	int pos_frut;

	char puntos;
	char puntoBonus;
	char frutas;
};

