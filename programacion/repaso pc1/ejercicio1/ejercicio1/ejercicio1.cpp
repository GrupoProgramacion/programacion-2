// ejercicio1.cpp: define el punto de entrada de la aplicación.
//

#include "ejercicio1.h"

#include"empleado.h";
#include"fecha.h"

#include <string>

using namespace std;

int main()
{
	Fecha test = Fecha::Fecha(10, 10, 10);

	Empleado pepe = Empleado::Empleado ("pepe","quispe",test,test);

	return 0;
}
