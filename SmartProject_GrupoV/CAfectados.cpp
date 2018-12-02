#include "CAfectados.h"
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
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

CAfectados::CAfectados(void)
{
	int m_i_cantidad = 0;
	std::string m_s_tipo_afectados = "";
	bool m_b_recuperado = false;
	int m_i_ID_Afectado = 0;
	std::list <CIncidentes> m_incidente;
}

CAfectados::~CAfectados(void)
{
}

CAfectados::CAfectados(int Cantidad, std::string Tipo_Afectados, bool Recuperado, int ID_Afectado)
{
	m_i_cantidad = Cantidad;
	m_s_tipo_afectados = Tipo_Afectados;
	m_b_recuperado = Recuperado;
	m_i_ID_Afectado = ID_Afectado;
}

int CAfectados::getCantidad(void)
{
	return m_i_cantidad;
}

int CAfectados::getID_Afectado(void)
{
	return m_i_ID_Afectado;
}

bool CAfectados::getRecuperado(void)
{
	return m_b_recuperado;
}

std::string CAfectados::getTipoAfectado(void)
{
	return m_s_tipo_afectados;
}

void CAfectados::setRecuperadoTrue(void)
{
	if (m_b_recuperado == false)
	{
		m_b_recuperado = true;
	}
}

void CAfectados::setRecuperadoFalse(void)
{
	if (m_b_recuperado == true)
	{
		m_b_recuperado = false;
	}
}
