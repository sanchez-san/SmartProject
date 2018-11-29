#include "CIncidentes.h"
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

using namespace std;


CIncidentes::CIncidentes()
{
	std::string m_s_tipo_incidente = "";
	int Coord_IncidenteX = 0;
	int Coord_IncidenteY = 0;
	int m_i_ID_Incidente = 0;
	std::string m_s_estado = "";
	time_t m_d_tiempo = time(0);
	//datetime m_d_tiempo = std::chrono::system_clock::now();
	//std::list <CIncidenteAsociadoTipoIncidente> m_l_tipoincidente_asociado;
}


CIncidentes::~CIncidentes()
{
}

CIncidentes::CIncidentes(std::string tipo_incidente, int coordIncidenteX, int coordIncidenteY, int ID_Incidente, std::string estado, time_t tiempo)
{
	m_s_tipo_incidente = tipo_incidente;
	m_i_ID_Incidente = ID_Incidente;
	Coord_Incidente_X = coordIncidenteX;
	Coord_Incidente_Y = coordIncidenteY;
	m_s_estado = estado;
	m_d_tiempo = tiempo;
	//std::list <CIncidenteAsociadoTipoIncidente> m_l_tipoincidente_asociado
}

std::string CIncidentes::getTipoIncidente()
{
	return m_s_tipo_incidente;
}

int CIncidentes::getCoord_IncidenteX()
{
	return Coord_Incidente_X;
}

int CIncidentes::getCoord_IncidenteY()
{
	return Coord_Incidente_Y;
}

int CIncidentes::getID_Incidente()
{
	return m_i_ID_Incidente;
}

std::string CIncidentes::getEstado()
{
	return m_s_estado;
}

time_t  CIncidentes::getTiempo()
{
	return m_d_tiempo;
}

void ModifyEstado(const std::string& estado)
{
	//HACERLOOOOO
}
