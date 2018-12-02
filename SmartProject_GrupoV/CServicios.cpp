#include "CServicios.h"
#include <time.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

using namespace std;

CServicios::CServicios()
{
	int m_i_ID_Servicio = 0;
	int m_i_ID_Centro = 0;
	int m_i_ID_Tipo_Incidente = 0;
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
