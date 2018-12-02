#pragma once
#include <time.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"

class CVehiculoAtiendeIncidente
{
private:
	int m_i_matricula;
	int m_i_ID_incidente;
public:
	CVehiculoAtiendeIncidente();
	~CVehiculoAtiendeIncidente();
	CVehiculoAtiendeIncidente(int matricula, int incidente);
	int getMatricula();
	int getID_Incidente();
};



