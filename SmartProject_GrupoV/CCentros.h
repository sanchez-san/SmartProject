#pragma once
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"
#include "CVehiculoAcudeCentro.h"
#include <list>

class CCentros
{
private:
	int m_i_ID_Centro;
	int coord_CentroX;
	int coord_CentroY;
	std::string m_s_Tipo_Centro;
	std::list <CVehiculoAcudeCentro> m_l_vehiculoacudecentro;

public:
	CCentros();
	~CCentros();

	CCentros::CCentros(int ID_Centro, int CoordCentroX, int CoordCentroY, std::string Tipo_Centro);
	int GetID_Centro();
	int  GetCoord_CentroX();
	int  GetCoord_CentroY();
	std::string GetTipoCentro();
};

