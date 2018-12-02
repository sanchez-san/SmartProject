#include "CCentros.h"
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <list>
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

CCentros::CCentros()
{
	int m_i_ID_Centro = 0;
	int coord_CentroX = 0;
	int coord_CentroY = 0;
	std::string m_s_Tipo_Centro = "";
	std::list <CVehiculoAtiendeCentro> m_l_vehiculoacudecentro;
}

CCentros::~CCentros()
{
}

CCentros::CCentros(int ID_Centro, int CoordCentroX, int CoordCentroY, std::string Tipo_Centro)
{
	int m_i_ID_Centro = ID_Centro;
	int coord_CentroX = CoordCentroX;
	int coord_CentroY = CoordCentroY;
	m_s_Tipo_Centro = Tipo_Centro;
}

int CCentros::GetID_Centro()
{
	return m_i_ID_Centro;
}

int CCentros::GetCoord_CentroX()
{
	return coord_CentroX;
}

int CCentros::GetCoord_CentroY()
{
	return coord_CentroY;
}

std::string CCentros::GetTipoCentro()
{
	return m_s_Tipo_Centro;
}
