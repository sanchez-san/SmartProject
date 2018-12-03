#include "CVehiculoAcudeCentro.h"
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


CVehiculoAcudeCentro::CVehiculoAcudeCentro()
{
	int m_i_ID_Matricula = 0;
	int m_i_ID_Centro = 0;
}


CVehiculoAcudeCentro::~CVehiculoAcudeCentro()
{
}

CVehiculoAcudeCentro::CVehiculoAcudeCentro(int Matricula, int ID_Centro)
{
	m_i_ID_Matricula = Matricula;
	m_i_ID_Centro = ID_Centro;
}

int CVehiculoAcudeCentro::getID_Matricula()
{
	return m_i_ID_Matricula;
}
int CVehiculoAcudeCentro::getID_Centro_Vehiculo()
{
	return m_i_ID_Centro;
}

