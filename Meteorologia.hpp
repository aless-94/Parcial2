/*
 * Meteorologia.hpp
 *
 *  Created on: May 3, 2024
 *      Author: pc1
 */

#ifndef METEOROLOGIA_HPP_
#define METEOROLOGIA_HPP_
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include <list>
#include "Fecha.hpp"



class DatClima
{
private:
	Fecha fecha;
	float veloViento;
	float temp;
	float mmH20;
public:
	DatClima ();
	DatClima(const int& a, const int& m , const int& d);

	float GetTemp() const { return temp; }
	float GetveloViento() const { return veloViento; }
	float GetmmH20() const { return mmH20; }

	void SetTemp(const float& t) { temp = t; }
	void  SetveloViento(const float& v) { veloViento = v; }
	void SetmmH20(const float& h) { mmH20 = h; }

};
std::ostream& operator<< (std::ostream& os , const DatClima& d);
std::istream& operator>> (std::istream& in , const DatClima& d);
class EstacionMet
{
	private:
	std::list<DatClima> lectura;
	public:
	EstacionMet();




};




#endif /* METEOROLOGIA_HPP_ */
