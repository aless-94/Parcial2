/*
 * EstacionMeteo.hpp
 *
 *  Created on: May 7, 2024
 *      Author: pc1
 */


#ifndef ESTACIONMETEO_HPP_
#define ESTACIONMETEO_HPP_
#include <vector>
#include <iostream>
#include <fstream>
#include "DatClima.hpp"
class EstacionMeteo
{
	private:
		std::vector<DatClima> datos;
	public:
		EstacionMeteo(){};
		EstacionMeteo(float vel, float t, float mm, int a, int m, int d, int h, int mn);

		void SetEstacionMeteo (const std::vector<DatClima>& date) {datos(date);}
		void SetEstacionMeteo (const DatClima& date) {datos.push_back(date);}
};
std::istream& operator>>(std::istream& in,  EstacionMeteo& vec);



#endif /* ESTACIONMETEO_HPP_ */

