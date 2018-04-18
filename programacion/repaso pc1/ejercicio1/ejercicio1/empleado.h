#pragma once

#include"fecha.h"
#include <string>

class Empleado
{
public:
	Empleado(string nombre,string apellido ,Fecha nacimiento, Fecha contratacion);
	~Empleado();

private:
	string nombre;
	string apellido;

	Fecha nacimiento;
	Fecha Contratacion;
};

Empleado::Empleado(string nombre, string apellido, Fecha nacimiento, Fecha contratacion)
{
	nombre = Empleado::nombre;
	contratacion = Empleado::Contratacion;
	nacimiento = Empleado::nacimiento;
	apellido = Empleado::apellido;
}

Empleado::~Empleado()
{
}