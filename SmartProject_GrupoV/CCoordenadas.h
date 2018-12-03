#pragma once
#include "iostream"
#include<stdlib.h>
#include<time.h>
using namespace std;

class CCoordenadas
{
private:
	int CoordX;
	int CoordY;
	int distancia;
public:
	CCoordenadas();
	~CCoordenadas();
	CCoordenadas::CCoordenadas(int CoordenadaX, int CoordenadaY);
	int CrearCoordXAleatoria();
	int CrearCoordYAleatoria();
	int CalcularDistancia(int Coord1X, int Coord1Y, int Coord2X, int Coord2Y);
};

