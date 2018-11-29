#pragma once
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

class CAfectados
{
private:

	int m_i_cantidad;
	std::string m_s_tipo_afectados;
	bool m_b_recuperado;
	int m_i_ID_Afectado;
	//CIncidentes *m_incidente;

public:

	CAfectados::CAfectados();
	CAfectados::~CAfectados();
	CAfectados::CAfectados(int Cantidad, std::string Tipo_Afectados, bool Recuperado, int ID_Afectado);
	int getCantidad();
	int getID_Afectado();
	bool getRecuperado();
	std::string getTipoAfectado();
	void setRecuperadoTrue();
	void setRecuperadoFalse();

};

