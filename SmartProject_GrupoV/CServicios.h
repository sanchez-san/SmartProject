#pragma once
#include <time.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

class CServicios
{
private:
	int m_i_ID_Servicio;
	int m_i_ID_Centro;
	int m_i_ID_Tipo_Incidente;
	std::string TipoServicio;
	std::list <CTipoIncidente> m_tipo_incidente;
	std::list <CCentros> m_centros;

public:
	CServicios();
	~CServicios();
	CServicios::CServicios(int ID_Servicio, int ID_Centro, int ID_Tipo_Incidente);
	int Get_ID_Servicio();
	int Get_ID_Centro();
	std::string getTipoServicio();
	int Get_ID_Tipo_Incidente();
};

