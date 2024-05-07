/*
 * Meteorologia.cpp
 *
 *  Created on: May 3, 2024
 *      Author: pc1
 */
#include "Meteorologia.hpp"

DatClima::DatClima ()
{
	veloViento = 0.0;
	temp = 0.0;
	mmH20 = 0.0;
}


DatClima::DatClima(const int& a, const int& m , const int& d)
{

}
std::ostream& operator<< (std::ostream& os , const DatClima& d)
{
	os << d.GetTemp() << "-" << d.GetmmH20() << "-" << d.GetveloViento();
	return os;
}
std::istream& operator>> (std::istream& in , const DatClima& d);
EstacionMet::EstacionMet()
{

}

