#pragma once
#include <time.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

class CIncidentes
{
private:
	std::string m_s_tipo_incidente;
	int Coord_Incidente_X;
	int Coord_Incidente_Y;
	int m_i_ID_Incidente;
	std::string m_s_estado;
	time_t m_d_tiempo;
	std::list <CIncidenteAsociadoTipoIncidente> m_l_tipoincidente_asociado;

public:
	CIncidentes();
	~CIncidentes();
	CIncidentes::CIncidentes(std::string tipo_incidente, int coordIncidenteX, int coordIncidenteY, int ID_Incidente, std::string estado, time_t tiempo);
	std::string getTipoIncidente();
	int getCoord_IncidenteX();
	int getCoord_IncidenteY();
	int getID_Incidente();
	std::string getEstado();
	time_t getTiempo();
	void ModifyEstado(const std::string& estado);
};


