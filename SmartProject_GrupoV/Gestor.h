#pragma once
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
#include <iostream>
#include <string>
#include <sqlext.h>
#include <list>
#include <vector>
class Gestor
{
public:
	Gestor();
	~Gestor();

	// Creacion de las funciones necesarias para la inicializacion de los objetos con los datos de la base de datos
	//selects
	
	//inserts
	SQLRETURN insertQ(std::string query);
	SQLRETURN insertincidente(const CIncidentes& I);
	SQLRETURN insertafectados(const CAfectados& A);
	SQLRETURN gettipoincidente(string id);
	SQLRETURN getvehiculo(string tipo,list<CVehiculo> list_v);
	SQLRETURN getcentro(string cx, string cy);
	SQLRETURN getpersonal(string tipo, string centro);
	SQLRETURN getservicio(string tipo);
	SQLRETURN updatevehiculo();

private: 
	SQLRETURN opendb();
	SQLRETURN releasedb();
	
};

