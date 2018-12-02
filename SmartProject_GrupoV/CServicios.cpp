#include "CServicios.h"
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

CServicios::CServicios()
{
	int m_i_ID_Servicio = 0;
	int m_i_ID_Centro = 0;
	int m_i_ID_Tipo_Incidente = 0;
	std::string TipoServicio = "";
	std::list <CTipoIncidente> m_tipo_incidente;
	std::list <CCentros> m_centros;
}


CServicios::~CServicios()
{
}

CServicios::CServicios(int ID_Servicio, int ID_Centro, int ID_Tipo_Incidente)
{
	m_i_ID_Servicio = ID_Servicio;
	m_i_ID_Centro = ID_Centro;
	m_i_ID_Tipo_Incidente = ID_Tipo_Incidente;
	//CTipoIncidente *m_tipo_incidente;
	//CCentro *m_centros;
}

int CServicios::Get_ID_Servicio()
{
	return m_i_ID_Servicio;
}

int CServicios::Get_ID_Centro()
{
	return m_i_ID_Centro;
}

int CServicios::Get_ID_Tipo_Incidente()
{
	return m_i_ID_Tipo_Incidente;
}

std::string CServicios::getTipoServicio()
{
	return TipoServicio;
}
