#include "CVehiculoAtiendeIncidente.h"
#include <time.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

using namespace std;

CVehiculoAtiendeIncidente::CVehiculoAtiendeIncidente()
{
	int m_i_matricula = 0;
	int m_i_ID_incidente = 0;
}

CVehiculoAtiendeIncidente::CVehiculoAtiendeIncidente(int matricula, int incidente)
{
	m_i_matricula = matricula;
	m_i_ID_incidente = incidente;
}


CVehiculoAtiendeIncidente::~CVehiculoAtiendeIncidente()
{
}

int CVehiculoAtiendeIncidente::getMatricula()
{
	return m_i_matricula;
}

int CVehiculoAtiendeIncidente::getID_Incidente()
{
	return m_i_ID_incidente;
}
