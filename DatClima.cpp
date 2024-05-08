/*
 * DatClima.cpp
 *
 *  Created on: May 3, 2024
 *      Author: pc1
 */
#include "DatClima.hpp"

DatClima::DatClima ()
{
	veloViento = 0.0;
	temp = 0.0;
	humedadRela = 0.0;
	mmH20 = 0.0;
}


DatClima::DatClima(const int& a, const int& m , const int& d)
{

}

std::ostream& operator<< (std::ostream& os , const DatClima& d)
{
	os << d.GetFecha() << "-" << d.GetVeloViento() << "-" << d.GetTemp() << "-" << d.GetHumedadRela() << "-" << d.GetmmH20();
	return os;
}

std::istream& operator>> (std::istream& is , DatClima& d)
{
	char deter('0');
	Fecha aux;
	is >> aux;
	d.SetFecha(aux);
	is >> deter;

	if( deter != '-')
	{
		throw 1;
	}

	float tmp;

	is >> tmp;
	d.SetVeloViento(tmp);
	is >> deter;

	if( deter != '-')
	{
		throw 1;
	}

	is >> tmp;
	d.SetTemp(tmp);
	is >> deter;

	if( deter != '-')
	{
		throw 1;
	}

	is >> tmp;
	d.SetHumedadRela(tmp);
	is >> deter;

	if( deter != '-')
	{
		throw 1;
	}

	is >> tmp;
	d.SetmmH20(tmp);

	return is;
}

