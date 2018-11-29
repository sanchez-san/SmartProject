#include "CAfectados.h"
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

using namespace std;

CAfectados::CAfectados(void)
{
	int m_i_cantidad = 0;
	std::string m_s_tipo_afectados = "";
	bool m_b_recuperado = false;
	int m_i_ID_Afectado = 0;
	//CIncidentes *m_incidente;

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
	//CIncidentes *m_incidente;

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
