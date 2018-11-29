#pragma once
#include <time.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

class CVehiculoAtiendeCentro
{
private:
	int m_i_ID_Matricula;
	int m_i_ID_Centro;
public:
	CVehiculoAtiendeCentro();
	~CVehiculoAtiendeCentro();
	CVehiculoAtiendeCentro::CVehiculoAtiendeCentro(int Matricula, int ID_Centro);
	int getID_Matricula();
	int getID_Centro_Vehiculo();
};


