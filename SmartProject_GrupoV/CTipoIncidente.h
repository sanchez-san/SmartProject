#pragma once
#include <iostream>

class CTipoIncidente
{

private:
	std::string m_s_tipo_personal;
	std::string m_s_tipo_vehiculo;
	int m_i_ID_Tipo;
	std::string m_s_tipo_servicio;
	std::list <CIncidentes> Incidente_Asociado;

public:
	CTipoIncidente();
	~CTipoIncidente();
	CTipoIncidente::CTipoIncidente(std::string Tipo_Personal, std::string Tipo_Vehiculo, int ID_Tipo, std::string Tipo_Servicio);
	std::string getTipoPersonal();
	std::string getTipoVehiculo();
	int getID_tipo();
	std::string getTipoServicio();
	void setTipoVehiculo(std::string tipovehiculo);
};



