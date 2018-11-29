#pragma once
#include <time.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

class CVehiculoAsociadoTipoIncidente
{
private:

	int m_i_ID_Tipo_Incidente;
	int m_i_Matricula;

public:

	CVehiculoAsociadoTipoIncidente();
	~CVehiculoAsociadoTipoIncidente();
	CVehiculoAsociadoTipoIncidente::CVehiculoAsociadoTipoIncidente(int ID_Tipo_Incidente, int Matricula);
	int getMatricula();
	int getID_Tipo_Incidente();
};




