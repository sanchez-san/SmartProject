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
#include "CCoordenadas.h"
#include "Gestor.h"
#include "CAfectados.h"
#include "CCentros.h"
#include "CIncidenteAsociadoTipoIncidente.h"
#include "CIncidentes.h"
#include "CPersonal.h"
#include "CServicios.h"
#include "CTipoIncidente.h"
#include "CVehiculo.h"
#include "CVehiculoAcudeCentro.h"
#include "CVehiculoAsociadoTipoIncidente.h"
#include"CVehiculoAtiendeIncidente.h"
#include "Gestor.h"
//#include "targetver.h"
#include <Windows.h>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <sqlext.h>
#include <string>
#include <list>
#include <vector>


using namespace std;

int main()
{
	int coordenadaX;


	//Recibimos de la interfaz el tipo de incidente, cantidad de afectados, tipo de afectados, coordenadas

	//preguntar a la base de datos los vehiculos mas cercanos

	cout << "Empieza el programa" << endl;
	CCoordenadas coordenada;

	coordenadaX = coordenada.CrearCoordXAleatoria();

	cout << "La coordenadaX creada en el main es:" << coordenadaX << endl;

	cout << "Termina el programa" << endl;

	return 0;
}



