#include "CVehiculoAtiendeIncidente.h"
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
