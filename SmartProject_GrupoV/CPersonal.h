#pragma once
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

class CPersonal
{
private:

	int m_i_ID_Personal;
	bool m_b_Personal_Disponible;
	std::string m_s_Tipo_Personal;
	int m_i_Cant_Maxima_Afectados;
	int m_i_ID_Centro;
	int m_i_Turno;
	int m_i_ID_Tipo_Incidente;
	int m_i_Cant_Afectados;
	time_t m_t_Hora_Entrada;
	//CTipoIncidente *m_Tipo_Incidente;

public:

	CPersonal();
	~CPersonal();
	int get_ID_Personal();
	bool getPersonalDisponible();
	std::string getTipoPersonal();
	int getCantMaxAfectados();
	int getIDCentro();
	int getTurno();
	int getIDTipoIncidente();
	int getCantAfectados();
	time_t getHoraEntrada();
	void ModifyTurno(const int& new_turno);
	void setPersonaldisponibleTrue();
	void setPersonaldisponibleFalse();
	void ModifyCant_Afectados(const int& new_cant);
	void ModifyHoraEntrada(const time_t& new_hora);
};

