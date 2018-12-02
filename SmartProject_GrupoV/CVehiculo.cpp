#include "CVehiculo.h"
#include <time.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"
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

CVehiculo::CVehiculo()
{
	bool m_b_Vehiculo_disp = false;
	int m_i_matricula = 0;
	int Coord_Vehiculo_X = 0;
	int Coord_Vehiculo_Y = 0;
	std::string m_s_tipo_vehiculo = "";
	std::list <CVehiculoAtiendeIncidente> m_l_AtiendeInc;
	std::list <CVehiculoAsociadoTipoIncidente> m_l_vehiculoasociadoATipo;
}

CVehiculo::CVehiculo(bool disponible, int matricula, int Coord_Vehiculo_X, int Coord_Vehiculo_Y, std::string tipo_Vehiculo)
{
	bool m_b_Vehiculo_disp = disponible;
	int m_i_matricula = matricula;
	//int Coord_Vehiculo_X;
	//int Coord_Vehiculo_Y;
	//strcpy(m_s_tipo_vehiculo, tipo_Vehiculo);
	//std::list <CVehiculoAtiendeIncidente> m_l_AtiendeInc;
	//std::list <CVehiculoAsociadoTipoIncidente> m_l_vehiculoasociadoATipo;
}

CVehiculo::~CVehiculo()
{
}

bool CVehiculo::getVehiculoDisp()
{
	return m_b_Vehiculo_disp;
}
int CVehiculo::GetCoord_Vehiculo_X()
{
	return Coord_Vehiculo_X;
}
int CVehiculo::GetCoord_Vehiculo_Y()
{
	return Coord_Vehiculo_Y;
}
std::string CVehiculo::getTipoVehiculo()
{
	return m_s_tipo_vehiculo;
}
//std::string CVehiculo:: getVehiculoAtiendeInc()
//{
//	return m_l_atiendeInc;
//}
//std::string CVehiculo:: getVehiculoAsociadoATipo()
//{
//	return m_l_vehiculoasociadoATipo;
//}
void CVehiculo::ModifyCoordVehiculo(int CoordX, int CoordY)
{
	Coord_Vehiculo_X = CoordX;
	Coord_Vehiculo_Y = CoordY;
}
void CVehiculo::setDisponibleTrue()
{
	if (m_b_Vehiculo_disp == false)
	{
		m_b_Vehiculo_disp = true;
	}
}
void CVehiculo::setDisponisbleFalse()
{
	if (m_b_Vehiculo_disp == true)
	{
		m_b_Vehiculo_disp = false;
	}
}

