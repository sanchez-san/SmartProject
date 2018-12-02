#include "CCordenadas.h"
#include<stdlib.h>
#include<time.h>

CCoordenadas::CCoordenadas()
{
	int CoordX = 0;
	int CoordY = 0;
	int distancia = 0;

	cout << "Se han creado las coordenadas (0,0) por defecto" << endl;
}

CCoordenadas::~CCoordenadas()
{
}

CCoordenadas::CCoordenadas(int CoordenadaX, int CoordenadaY)
{
	CoordX = CoordenadaX;
	CoordY = CoordenadaY;

	cout << "Se han creado las coordenadas X e Y que se han pasado" << endl;
}

int CCoordenadas::CrearCoordXAleatoria()
{
	int num, c;
	srand(time(NULL));
	num = rand() % 51;
	CoordX = num;
	cout << "Se han creado la coordenada X aleatoriamente" << endl;
	return CoordX;
}

int CCoordenadas::CrearCoordYAleatoria()
{
	int num, c;
	srand(time(NULL));
	num = 1 + rand() % (101 - 1);
	CoordY = num;
	cout << "Se han creado la coordenada Y aleatoriamente" << endl;
	return CoordY;
}

int CCoordenadas::CalcularDistancia(int Coord1X, int Coord1Y, int Coord2X, int Coord2Y)
{
	int distanciaX;
	int distanciaY;
	distanciaX = Coord1X - Coord2X;
	distanciaY = Coord2X - Coord2Y;
	distancia = sqrt(distanciaX ^ 2 + distanciaY ^ 2);
	cout << "Se ha calculado la distancia" << endl;
	return distancia;
}
