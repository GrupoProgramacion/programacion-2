#pragma once

class Fecha
{
public:
	Fecha(int dia,int mes , int año);
	~Fecha();

	int getDia() { return dia; };
	int getMes() { return mes; };
	int getAño() { return año; };
private:
	int dia;
	int mes;
	int año;
};

Fecha::Fecha(int dia, int mes, int año)
{
	dia = Fecha::dia;
	mes = Fecha::mes;
	año = Fecha::año;
}

Fecha::~Fecha()
{
}