#include "CVehiculoAcudeCentro.h"
#include <time.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

using namespace std;


CVehiculoAtiendeCentro::CVehiculoAtiendeCentro()
{
	int m_i_ID_Matricula = 0;
	int m_i_ID_Centro = 0;
}


CVehiculoAtiendeCentro::~CVehiculoAtiendeCentro()
{
}

CVehiculoAtiendeCentro::CVehiculoAtiendeCentro(int Matricula, int ID_Centro)
{
	m_i_ID_Matricula = Matricula;
	m_i_ID_Centro = ID_Centro;
}

int CVehiculoAtiendeCentro::getID_Matricula()
{
	return m_i_ID_Matricula;
}
int CVehiculoAtiendeCentro::getID_Centro_Vehiculo()
{
	return m_i_ID_Centro;
}

