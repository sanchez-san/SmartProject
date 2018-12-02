#include "Gestor.h"
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

//Globales
SQLHENV _env;
SQLRETURN _ret;
SQLHSTMT _stmt;
SQLHDBC _dbc;

Gestor::Gestor()
{
}


Gestor::~Gestor()
{
}

SQLRETURN Gestor::opendb()
{
	SQLHENV env; SQLRETURN ret;
	SQLAllocHandle(SQL_HANDLE_ENV, SQL_NULL_HANDLE, &env);
	// We want ODBC 3 support
	ret = SQLSetEnvAttr(env, SQL_ATTR_ODBC_VERSION, (void *)SQL_OV_ODBC3, 0);
	if (ret == SQL_SUCCESS) {

		// Allocate a connection handle
		SQLAllocHandle(SQL_HANDLE_DBC, env, &_dbc);
		// stablish connection. ODBC DSN configuration is required
		ret = SQLDriverConnect(_dbc, NULL, TEXT("DSN=MySQLCon;"), SQL_NTS, NULL, 0, NULL, SQL_DRIVER_COMPLETE);
		ret = SQLSetConnectAttr(_dbc, SQL_ATTR_AUTOCOMMIT, (SQLPOINTER)FALSE, 0);
		if (ret != SQL_SUCCESS) {
			// you can get the error in the message string.
			SQLWCHAR status[10]; SQLINTEGER error;
			SQLSMALLINT i_size; SQLWCHAR message[1000];
			SQLGetDiagRec(SQL_HANDLE_DBC, _dbc, 1, status, &error, message, 1000, &i_size);
		}
		else {
			// Allocate a statement handle
			ret = SQLAllocHandle(SQL_HANDLE_STMT, _dbc, &_stmt);
		}
	}
	return ret;
}

SQLRETURN Gestor::releasedb()
{
	SQLRETURN ret;
	// release the statement
	ret = SQLFreeStmt(_stmt, SQL_CLOSE);
	if (_stmt != NULL) SQLFreeHandle(SQL_HANDLE_STMT,_stmt);
	return ret;
}
// Funciones de select
// Funciones de insert
SQLRETURN Gestor::insertQ(std::string query)
{
	SQLRETURN ret, ret2;
	SQLWCHAR       SqlState[6], SQLStmt[1000], Msg[SQL_MAX_MESSAGE_LENGTH];
	SQLINTEGER    NativeError;
	SQLSMALLINT   i, MsgLen;
	wchar_t wcstring[1000];
	// conversion from UTF8 to UNICODE
	MultiByteToWideChar(CP_UTF8, 0, query.c_str(), -1, wcstring, 1000);
	// query execution


	ret = SQLExecDirect(_stmt, wcstring, SQL_NTS);
	// Execute the SQL statement and return any errors or warnings.  
	if ((ret == SQL_SUCCESS_WITH_INFO) || (ret == SQL_ERROR)) {
		// Get the status records.  
		i = 1;
		while ((ret2 = SQLGetDiagRec(SQL_HANDLE_STMT, _stmt, i, SqlState, &NativeError,
			Msg, sizeof(Msg), &MsgLen)) != SQL_NO_DATA) {
			cout << Msg << endl;
			i++;
		}
	}
	ret = SQLEndTran(SQL_HANDLE_DBC, _dbc, SQL_COMMIT);
	return ret;
}
SQLRETURN Gestor::insertincidente(const CIncidentes& I)
{
	SQLRETURN ret;

	std::ostringstream ss;
	ss << "INSERT INTO Incidentes ( ID_Incidentes, Tipo_Incidentes, Tiempo, Coord_Incidentes_X, Coord_Incidentes_Y, Estado ) VALUES ("
		<< I.getID_Incidente << ","
		<< I.getTipoIncidente << ","
		<< "NOW()" << ","
		<< I.getCoord_IncidenteX << ","
		<< I.getCoord_IncidenteY << ","
		<< I.getEstado << ")";
	std::string query = ss.str();
	ret = insertQ(query);
	ret = SQLEndTran(SQL_HANDLE_DBC, _dbc, SQL_COMMIT);
	return ret;
}

//Retocar la clase afectados para que nos consiga el id incident asociado
SQLRETURN Gestor::insertafectados(const CAfectados& A)
{
	SQLRETURN ret;
	std::ostringstream ss;
	ss << "INSERT INTO Afectados ( ID_Afectados, Tipo_Afectado, ID_Incidentes,  Recuperacion, Cantidad ) VALUES ("
		<< A.getID_Afectado << "," 
		<< A.getTipoAfectado << ","
		<< A.getID_incidente << ","
		<< A.getRecuperado << ","
		<< A.getCantidad<<  ")";
	std::string query = ss.str();
	ret = insertQ(query);
	ret = SQLEndTran(SQL_HANDLE_DBC, _dbc, SQL_COMMIT);
	return ret;
}

SQLRETURN Gestor::gettipoincidente( int id, list<CTipoIncidente*> &tipos_incidentes)
{
	SQLRETURN ret;
	string abc= to_string (id);
	string s = string("SELECT * FROM Tipo_Incidente WHERE ID_Tipo_Incidente = '")  + abc + "' ;";
	wchar_t wcstring[300];
	// conversion from UTF8 to UNICODE
	MultiByteToWideChar(CP_UTF8, 0, s.c_str(), -1, wcstring, 300);
	// query execution
	ret = SQLExecDirect(_stmt, wcstring, SQL_NTS);///<execute the statement in wcstring
	if (ret == SQL_SUCCESS) {
		SQLINTEGER indicator;
		SQLCHAR t_vehiculo[32];
		SQLINTEGER ID_tipo;
		SQLCHAR t_servicio[32];
		SQLCHAR t_personal[32];
		SQLCHAR Descripcion[200];

		SQLCHAR c_timestamp[30];
		while ((ret = SQLFetch(_stmt)) == SQL_SUCCESS) {
			ret = SQLGetData(_stmt, 1, SQL_C_CHAR, &t_vehiculo, 32, &indicator);
			ret = SQLGetData(_stmt, 2, SQL_C_LONG, &ID_tipo, 0, &indicator);
			ret = SQLGetData(_stmt, 3, SQL_C_CHAR, &t_servicio, 32, &indicator);
			ret = SQLGetData(_stmt, 4, SQL_C_CHAR, &t_personal, 32, &indicator);
			ret = SQLGetData(_stmt, 5, SQL_C_CHAR, &Descripcion, 200, &indicator);
			
			string a((char*)t_vehiculo);
			string b((char*)t_servicio);
			string c((char*)t_personal);
			string d((char*)Descripcion);
			CTipoIncidente *pi_t_incidente;
			pi_t_incidente = new CTipoIncidente( a, b, (int)ID_tipo, c, d);
			tipos_incidentes.push_back(pi_t_incidente);
		}
		ret = SQLEndTran(SQL_HANDLE_DBC, _dbc, SQL_COMMIT);
	}
	return ret;
}
SQLRETURN Gestor::getvehiculo(CTipoIncidente inc, list<CVehiculo*> list_v)
{
	SQLRETURN ret;
	string tipo = inc.getTipoVehiculo;
	string s = string("SELECT * FROM Vehiculos WHERE Tipo_Vehiculo = '") + tipo + "' AND Vehiculo_Disp = '1' ;";
	wchar_t wcstring[300];
	// conversion from UTF8 to UNICODE
	MultiByteToWideChar(CP_UTF8, 0, s.c_str(), -1, wcstring, 300);
	// query execution
	ret = SQLExecDirect(_stmt, wcstring, SQL_NTS);///<execute the statement in wcstring
	if (ret == SQL_SUCCESS) {
		SQLINTEGER indicator;
		
		SQLINTEGER ID_v;
		SQLINTEGER coor_x; 
		SQLINTEGER coor_y; 
		SQLINTEGER disp;
		SQLCHAR tipo_v[32];
		SQLINTEGER cant_ac;
		SQLINTEGER cant_max;
	

		SQLCHAR c_timestamp[30];
		while ((ret = SQLFetch(_stmt)) == SQL_SUCCESS) {
			ret = SQLGetData(_stmt, 1, SQL_C_LONG, &ID_v, 0, &indicator);
			ret = SQLGetData(_stmt, 2, SQL_C_LONG, &coor_x, 0, &indicator);
			ret = SQLGetData(_stmt, 3, SQL_C_LONG, &coor_y, 0, &indicator);
			ret = SQLGetData(_stmt, 3, SQL_C_CHAR, &tipo_v, 32, &indicator);
			ret = SQLGetData(_stmt, 4, SQL_C_LONG, &disp, 32, &indicator);
			ret = SQLGetData(_stmt, 5, SQL_C_LONG, &cant_ac, 0, &indicator);
			ret = SQLGetData(_stmt, 5, SQL_C_LONG, &cant_max, 0, &indicator);

			string a((char*)tipo_v);
			CVehiculo *pi_v;
			//checkear las clases de vehiculos para saber bien el orden

			pi_v = new CVehiculo((int) disp, (int) ID_v, (int) , );
			list_v.push_back(pi_v);
		}
		ret = SQLEndTran(SQL_HANDLE_DBC, _dbc, SQL_COMMIT);
	}
	return ret;
}
SQLRETURN Gestor::getpersonal(CTipoIncidente inc, list<CVehiculo*> list_v)
{
	SQLRETURN ret;
	string tipo = inc.getTipoPersonal;
	string s = string("SELECT * FROM Personal WHERE Tipo_Personal = '") + tipo + "' AND Personal_Disponible = '1' ;";
	wchar_t wcstring[300];
	// conversion from UTF8 to UNICODE
	MultiByteToWideChar(CP_UTF8, 0, s.c_str(), -1, wcstring, 300);
	// query execution
	ret = SQLExecDirect(_stmt, wcstring, SQL_NTS);///<execute the statement in wcstring
	if (ret == SQL_SUCCESS) {
		SQLINTEGER indicator;

		SQLINTEGER ID_p;
		SQLINTEGER disp;
		SQLCHAR T_P[32];
		SQLTIMESTAMP time;
		SQLINTEGER TURNO;
		SQLINTEGER ID_centro;
		SQLINTEGER ID_incidente;
		SQLINTEGER cant_ac;
		SQLINTEGER cant_max;








		while ((ret = SQLFetch(_stmt)) == SQL_SUCCESS) {
			ret = SQLGetData(_stmt, 1, SQL_C_LONG, &ID_p, 0, &indicator);
			ret = SQLGetData(_stmt, 2, SQL_C_LONG, &disp, 0, &indicator);
			ret = SQLGetData(_stmt, 3, SQL_C_CHAR, &T_P, 32, &indicator);
			ret = SQLGetData(_stmt, 3, SQL_C_TIMESTAMP, &time, 0, &indicator);
			ret = SQLGetData(_stmt, 4, SQL_C_LONG, &TURNO, 0, &indicator);
			ret = SQLGetData(_stmt, 5, SQL_C_LONG, &ID_centro, 0, &indicator);
			ret = SQLGetData(_stmt, 5, SQL_C_LONG, &ID_incidente, 0, &indicator);

			string a((char*)tipo_v);
			CVehiculo *pi_v;
			//checkear las clases de vehiculos para saber bien el orden

			pi_v = new CVehiculo((int)disp, (int)ID_v, (int), );
			list_v.push_back(pi_v);
		}
		ret = SQLEndTran(SQL_HANDLE_DBC, _dbc, SQL_COMMIT);
	}
	return ret;
}

	//Actualiza el estado del personal entre disponible (1) o no (0)
	SQLRETURN Gestor::updatePersonalDisponible(CPersonal Personal)
	{
		SQLRETURN ret;
		std::ostringstream ss;
		ss << "UPDATE Personal SET Personal_Disponible = " << Personal.getPersonalDisponible << ")";
		std::string query = ss.str();
		ret = insertQ(query);
		ret = SQLEndTran(SQL_HANDLE_DBC, _dbc, SQL_COMMIT);
		return ret;
	}

	//Actualiza el estado de incidente entre: espera, ocupado, atendido
	SQLRETURN Gestor::updateEstadoIncidente(CIncidentes Incidente)
	{
		SQLRETURN ret;
		std::ostringstream ss;
		ss << "UPDATE Incidentes SET Estado_Incidente = " << Incidente.getEstado << ")"; 
		std::string query = ss.str();
		ret = insertQ(query);
		ret = SQLEndTran(SQL_HANDLE_DBC, _dbc, SQL_COMMIT);
		return ret;
	}

