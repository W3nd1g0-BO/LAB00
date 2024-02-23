#include "Comestibles.h"
#include <iostream>
void Comestibles::comerPunto()
{
	std::cout << "Pac-man comio un punto";
}

void Comestibles::comerBonus()
{
	std::cout << "Pac-man se vuelve invencible, ahora puede comer fantasmas";
}

void Comestibles::comerFruta()
{
	std::cout << "Pac-man comio una fruta";
}

void Comestibles::generarFrut()
{
	std::cout << "Se genero una fruta en el mapa";
}
