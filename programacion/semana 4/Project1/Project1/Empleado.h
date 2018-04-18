#pragma once

#include <string>
#include "fecha.h"

using namespace std;

class Empleado
{
	string apellido;
	string nombre;
	fecha* contratacion ;
	fecha* nacimiento;
    
public:
	Empleado(string apellido,string nombre,fecha* contratacion,fecha* nacimiento);
	~Empleado();
};

