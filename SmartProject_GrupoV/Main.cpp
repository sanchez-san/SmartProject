// SmartProject_GrupoV.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <time.h>
#include <fstream>
#include "iostream"
#include <string>
#include <vector>
#include <list>
#include "string.h"
#include "Coordenadas.h"

using namespace std;

int main()
{
	int coordenadaX;
	cout << "Empieza el programa" << endl;
	CCoordenadas coordenada;

	coordenadaX = coordenada.CrearCoordXAleatoria();

	cout << "La coordenadaX creada en el main es:" << coordenadaX << endl;

	cout << "Termina el programa" << endl;
	return 0;
}



