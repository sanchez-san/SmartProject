#include "CCentros.h"
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

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
	//std::list <CVehiculoAcudeCentro> m_l_vehiculoacudecentro;
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
