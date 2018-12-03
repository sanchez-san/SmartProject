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
	CTipoIncidente tipoincidente;
	CIncidentes incidente;
	CAfectados afectado;
	Gestor gestor;
	std::string tipovehiculo;

	cout << "Empieza el programa" << endl;

	gestor.opendb();
	
	//Crear clase de incidente y de afectadosM TIPO DE INCIDENTE

	//Interfaz de bienvenida

	//Rellenamos los datos del incidente: tipo de incidente, cantidad de afectados, tipo de afectados, coordenadas

	//Insterarlos en la base de datos

	gestor.insertafectados(afectado);
	gestor.insertincidente(incidente);

	//Sacamos el tipo de incidente
	gestor.gettipoincidente(incidente, &tipoincidente);

	//Sacar el numero de vehiculos necesarios (para empezar solo consideramos UN afectado)

	//Obtener el vehiculo mas cercano
	std::list <CVehiculo*> lv;
	gestor.getvehiculo(tipoincidente, lv);

	int i_tamano_vehiculo = lv.size();
	list<CVehiculo*>::iterator v;
	v = lv.begin();
	int x, y, dmin = 656565656;
	int idVehiculo;

	for (int i = 0; i < i_tamano_vehiculo; i++, v++)
	{
		x = (*v)->GetCoord_Vehiculo_X
		y = (*v)->GetCoord_VehiculoY;

		//Esto hay que modificarlo para usar la funcion de las distancias
		if (dminx < x)
		{
			dmix = x;
			idVehiculo = (*v)->getVehiculoID;
		}
		if (dminy < y)
		{
			dmiy = y;
		}

	}

	//El vehiculo va al incidente
	incidente.ModifyEstado();

	//Update vehiculo

	//Obtener el centro mas cercano
	gestor.getcentro(lcentros);

	int i_tamano_centro = lcentros.size();
	list<CCentros*>::iterator c;
	c = lcentros.begin();
	int x, y, dmin = 656565656;
	int idCentro;

	for (int i = 0; i < i_tamano_centro; i++, c++)
	{
		x = (*c)->GetCoord_CentroX;
		y = (*c)->GetCoord_CentroY;

		//Esto hay que cambiarlo para utilizar la función distancia respecto a las coordenadas del vehiculo
		if (dminx < x)
		{
			dmix = x;
			idCentro = (*c)->GetID_Centro;
		}
		if (dminy < y)
		{
			dmiy = y;
		}

	}

	//Creamos un objeto centro definitivo, eliminamos los centros que no queramos

	//Actualizar el personal 

	gestor.releasedb();

	cout << "Termina el programa" << endl;

	//DELETE TODOS LOS NEWS

	return 0;
}



