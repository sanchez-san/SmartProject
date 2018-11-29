#pragma once
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

class CIncidenteAsociadoTipoIncidente
{
private:
	int m_i_ID_Incidentes;
	int m_i_ID_Tipo_Incidente;
public:
	CIncidenteAsociadoTipoIncidente();
	~CIncidenteAsociadoTipoIncidente();
	CIncidenteAsociadoTipoIncidente::CIncidenteAsociadoTipoIncidente(int ID_Incidentes, int ID_Tipo_Incidente);
	int getID_Incidente();
	int getID_Tipo_Incidente();
};



