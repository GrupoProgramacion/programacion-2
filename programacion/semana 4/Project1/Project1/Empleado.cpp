#include "Empleado.h"



Empleado::Empleado(string apellido, string nombre, fecha* contratacion, fecha* nacimiento)
{
	Empleado::apellido = apellido;
	Empleado::nombre = nombre;
	Empleado::contratacion = contratacion;
	Empleado::nacimiento = nacimiento;
}


Empleado::~Empleado()
{
}
