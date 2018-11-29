#include "CPersonal.h"
#include <time.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

using namespace std;


CPersonal::CPersonal()
{
	int m_i_ID_Personal = 0;
	bool m_b_Personal_Disponible = false;
	std::string m_s_Tipo_Personal = "";
	int m_i_Cant_Maxima_Afectados = 0;
	int m_i_ID_Centro = 0;
	int m_i_Turno = 0;
	int m_i_ID_Tipo_Incidente = 0;
	int m_i_Cant_Afectados = 0;
	time_t m_t_Hora_Entrada;
	//CTipoIncidente *m_Tipo_Incidente
}


CPersonal::~CPersonal()
{
}

int CPersonal::get_ID_Personal()
{
	return m_i_ID_Personal;
}
bool CPersonal::getPersonalDisponible()
{
	return m_b_Personal_Disponible;
}
std::string CPersonal::getTipoPersonal()
{
	return m_s_Tipo_Personal;
}
int CPersonal::getCantMaxAfectados()
{
	return m_i_Cant_Maxima_Afectados;
}
int CPersonal::getIDCentro()
{
	return m_i_ID_Centro;
}
int CPersonal::getTurno()
{
	return m_i_Turno;
}

int CPersonal::getIDTipoIncidente()
{
	return m_i_ID_Tipo_Incidente;
}

int CPersonal::getCantAfectados()
{
	return m_i_Cant_Afectados;
}
time_t CPersonal::getHoraEntrada()
{
	return m_t_Hora_Entrada;
}
void CPersonal::ModifyTurno(const int& new_turno)
{

}
void CPersonal::setPersonaldisponibleTrue()
{
	if (m_b_Personal_Disponible == false)
	{
		m_b_Personal_Disponible = true;
	}
}
void CPersonal::setPersonaldisponibleFalse()
{
	if (m_b_Personal_Disponible == true)
	{
		m_b_Personal_Disponible = false;
	}
}
void CPersonal::ModifyCant_Afectados(const int& new_cant)
{
	//HACERLOOOOO
}
void CPersonal::ModifyHoraEntrada(const time_t& new_hora)
{
	//HACERLOOOOO
}