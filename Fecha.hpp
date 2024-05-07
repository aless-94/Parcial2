/*
 * Fecha.hpp
 *
 *  Created on: May 3, 2024
 *      Author: pc1
 */

#ifndef FECHA_HPP_
#define FECHA_HPP_

#include <iostream>
#include <iomanip>

class Fecha
{
private:
	int anio;
	int mes;
	int dia;
	int hora;
	int min;

	bool fechaValida();
public:
	Fecha();
	Fecha(const int& a, const int& m, const int& d, const int& h, const int& mi);

	int GetAnio () const { return anio; }
	int GetMes () const { return mes; }
	int GetDia () const { return dia; }
	int GetHora () const { return hora; }
	int GetMin () const { return min; }

	//manejo error
	void SetFecha (const int& a, const int& m, const int& d, const int& h, const int& mi);
	void SetAnio (const int& a);
	void SetMes (const int& m);
	void SetDia (const int& d);
	void SetHora (const int& h);
	void SetMinuto (const int& m);
};

std::ostream& operator<< (std::ostream& os, const Fecha& f);
std::istream& operator>> (std::istream& is, Fecha& f);


#endif /* FECHA_HPP_ */
