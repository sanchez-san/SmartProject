#pragma once
#include <time.h>
#include <time.h>
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include "string.h"
#include <list>
#include "CVehiculoAtiendeIncidente.h"

class CVehiculo
{
private:

	bool m_b_Vehiculo_disp;
	int m_i_matricula;
	int Coord_Vehiculo_X;
	int Coord_Vehiculo_Y;
	std::string m_s_tipo_vehiculo;
	std::list <CVehiculoAtiendeIncidente> m_l_AtiendeInc;
	CVehiculoAsociadoTipoIncidente m_l_vehiculoasociadoATipo;


public:

	CVehiculo();
	~CVehiculo();
	CVehiculo::CVehiculo(bool disponible, int matricula, int Coord_Vehiculo_X, int Coord_Vehiculo_Y, std::string tipo_Vehiculo);
	bool getVehiculoDisp();
	int GetCoord_Vehiculo_X();
	int GetCoord_Vehiculo_Y();
	std::string getTipoVehiculo();
	std::string getAtiendeInc();
	std::string getVehiculoAsociadoATipo();
	void ModifyCoordVehiculo(int CoordX, int CoordY);
	void setDisponibleTrue();
	void setDisponisbleFalse();
	void getVehiculoID();
};

