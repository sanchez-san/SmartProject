#pragma once
#include <time.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

class CVehiculoAcudeCentro
{
private:
	int m_i_ID_Matricula;
	int m_i_ID_Centro;
public:
	CVehiculoAcudeCentro();
	~CVehiculoAcudeCentro();
	CVehiculoAcudeCentro::CVehiculoAcudeCentro(int Matricula, int ID_Centro);
	int getID_Matricula();
	int getID_Centro_Vehiculo();
};


