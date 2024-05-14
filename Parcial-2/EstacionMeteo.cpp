/*
 * EstacionMeteo.cpp
 *
 *  Created on: May 7, 2024
 *      Author: pc1
 */
#include "EstacionMeteo.hpp"
#include "DatClima.hpp"

EstacionMeteo::EstacionMeteo(float vel, float t, float mm, int a, int m, int d, int h, int mn)
{

	        DatClima nuevoDato;
	        Fecha nuev;
	        nuevoDato.SetveloViento(vel);
	        nuevoDato.SetTemp(t);
	        nuevoDato.SetmmH20(mm);
	        nuev.SetAnio(a);
	        nuev.SetMes(m);
			nuev.SetDia(d);
			nuev.SetHora(h);
			nuev.SetMinuto(mn);
			nuevoDato.SetFecha(nuev);
	        datos.push_back(nuevoDato);
	    }

std::istream& operator>>(std::istream& in, EstacionMeteo& vec) {
    DatClima dato;
    char deter;
    // Leer números del archivo hasta que se alcance el final del archivo
    while (in >> dato) {
    	vec.SetEstacionMeteo(dato);
        in >> deter;
        if (deter != '-') {
        	throw 1;
        }
    }
    return in;
}



