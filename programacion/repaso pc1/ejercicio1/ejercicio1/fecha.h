#pragma once

class Fecha
{
public:
	Fecha(int dia,int mes , int a�o);
	~Fecha();

	int getDia() { return dia; };
	int getMes() { return mes; };
	int getA�o() { return a�o; };
private:
	int dia;
	int mes;
	int a�o;
};

Fecha::Fecha(int dia, int mes, int a�o)
{
	dia = Fecha::dia;
	mes = Fecha::mes;
	a�o = Fecha::a�o;
}

Fecha::~Fecha()
{
}