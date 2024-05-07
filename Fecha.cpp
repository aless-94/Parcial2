/*
 * Fecha.cpp
 *
 *  Created on: May 3, 2024
 *      Author: pc1
 */
#include "Fecha.hpp"

Fecha::Fecha()
{
	anio = 0;
	mes = 0;
	dia = 0;
	hora = 0;
	min = 0;
}
Fecha::Fecha(const int& a, const int& m, const int& d, const int& h, const int& mi)
{
	anio = a;
	mes = m;
	dia = d;
	hora = h;
	min = mi;

	if(!fechaValida())
	{
		throw 1;
	}

}

void Fecha::SetFecha (const int& a, const int& m, const int& d, const int& h, const int& mi)
{
	//manejo error
	anio = a;
	mes = m;
	dia = d;
	hora = h;
	min = mi;

	if(!fechaValida())
	{
		throw 1;
	}
}

void Fecha::SetAnio (const int& a)
{
	anio = a;
	if(!fechaValida())
	{
		throw 1;
	}
}

void Fecha::SetMes (const int& m)
{
	mes = m;
	if(!fechaValida())
	{
		throw 1;
	}
}

void Fecha::SetDia (const int& d)
{
	dia = d;
	if(!fechaValida())
	{
		throw 1;
	}
}

void Fecha::SetHora (const int& h)
{
	hora = h;
	if(!fechaValida())
	{
		throw 1;
	}
}

void Fecha::SetMinuto (const int& m)
{
	min = m;
	if(!fechaValida())
	{
		throw 1;
	}
}

bool Fecha::fechaValida()
{
	if (anio < 0 || mes < 1 || mes > 12 || dia < 1 || hora  < 0 || hora > 23 || min < 0 || min > 59)
	{
		return false;
	}

	int diaEnMes[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	return ( dia <= diaEnMes[mes - 1] );
}


void SetMes (const int& m);
void SetDia (const int& d);
void SetHora (const int& h);
void SetMinuto (const int& m);

std::ostream& operator<< (std::ostream& os, const Fecha& f)
{
	os << f.GetAnio() << "-" << std::setw(2) << std::setfill('0') << f.GetMes() << "-" << std::setw(2) << std::setfill('0') << f.GetDia()
	<< "-" << std::setw(2) << std::setfill('0') << f.GetHora() << "-" << std::setw(2) << std::setfill('0') << f.GetMin() ;
	return os;
}

std::istream& operator>> (std::istream& is, Fecha& f)
{
	char delimit;
	int anio, mes, dia, hora, min;

	is >> anio >> delimit >> mes >> delimit >> dia >> delimit >> hora >> delimit >> min;

	f.SetFecha(anio, mes, dia, hora, min);

	return is;
}


