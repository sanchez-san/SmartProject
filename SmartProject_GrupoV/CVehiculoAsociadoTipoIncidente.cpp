#include "CVehiculoAsociadoTipoIncidente.h"
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


CVehiculoAsociadoTipoIncidente::CVehiculoAsociadoTipoIncidente()
{
	int m_i_ID_Tipo_Incidente = 0;
	int m_i_Matricula = 0;

}


CVehiculoAsociadoTipoIncidente::~CVehiculoAsociadoTipoIncidente()
{
}

CVehiculoAsociadoTipoIncidente::CVehiculoAsociadoTipoIncidente(int ID_Tipo_Incidente, int Matricula)
{
	int m_i_ID_Tipo_Incidente = ID_Tipo_Incidente;
	int m_i_Matricula = Matricula;
}

int CVehiculoAsociadoTipoIncidente::getMatricula(){
	return m_i_Matricula;
}

int CVehiculoAsociadoTipoIncidente::getID_Tipo_Incidente(){
	return m_i_ID_Tipo_Incidente;
}