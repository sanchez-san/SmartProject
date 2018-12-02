#include "CIncidenteAsociadoTipoIncidente.h"
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

using namespace std;

CIncidenteAsociadoTipoIncidente::CIncidenteAsociadoTipoIncidente()
{
	int m_i_ID_Incidentes = 0;
	int m_i_ID_Tipo_Incidente = 0;
}


CIncidenteAsociadoTipoIncidente::~CIncidenteAsociadoTipoIncidente()
{
}

CIncidenteAsociadoTipoIncidente::CIncidenteAsociadoTipoIncidente(int ID_Incidentes, int ID_Tipo_Incidente)
{
	m_i_ID_Incidentes = ID_Incidentes;
	m_i_ID_Tipo_Incidente = ID_Tipo_Incidente;
}

int CIncidenteAsociadoTipoIncidente::getID_Incidente()
{
	return m_i_ID_Incidentes;
}

int CIncidenteAsociadoTipoIncidente::getID_Tipo_Incidente()
{
	return m_i_ID_Tipo_Incidente;
}
