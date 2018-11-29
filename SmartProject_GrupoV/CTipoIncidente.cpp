#include "CTipoIncidente.h"
#include <iostream>
#include "string.h"

using namespace std;


CTipoIncidente::CTipoIncidente()
{
	std::string m_s_tipo_personal = "";
	std::string m_s_tipo_vehiculo = "";
	int m_i_ID_Tipo = 0;
	std::string m_s_tipo_servicio = "";
	//std::list<CIncidente*> Incidente_Asociado = "";
}


CTipoIncidente::~CTipoIncidente()
{
}

CTipoIncidente::CTipoIncidente(std::string Tipo_Personal, std::string Tipo_Vehiculo, int ID_Tipo, std::string Tipo_Servicio)
{
	std::string m_s_tipo_personal = Tipo_Personal;
	std::string m_s_tipo_vehiculo = Tipo_Vehiculo;
	int m_i_ID_Tipo = ID_Tipo;
	std::string m_s_tipo_servicio = Tipo_Servicio;
	//std::list<CIncidente*> Incidente_Asociado = "";
}

std::string CTipoIncidente::getTipoPersonal()
{
	return m_s_tipo_personal;
}

std::string CTipoIncidente::getTipoVehiculo()
{
	return m_s_tipo_vehiculo;
}

int CTipoIncidente::getID_tipo()
{
	return m_i_ID_Tipo;
}

std::string CTipoIncidente::getTipoServicio()
{
	return m_s_tipo_servicio;
}
