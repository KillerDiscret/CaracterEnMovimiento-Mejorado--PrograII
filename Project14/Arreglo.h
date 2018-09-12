#pragma once
#include "CUADRADO.h"
class Arreglo
{
private:
	Cuadrado**arregloObjetos;
	int *N;
public:
	Arreglo();
	void AgregarCuadrado(Cuadrado *obj);
	Cuadrado* ObtenerCuadrado(int indice);
	int getN();
	~Arreglo();

};
Arreglo::Arreglo()
{
	arregloObjetos = NULL;
	N = new int;
	*N = 0;
}
void Arreglo::AgregarCuadrado(Cuadrado *obj)
{
	Cuadrado **temporal;
	temporal = new Cuadrado*[*N + 1];
	if (temporal!=NULL)
	{
		for (int i=0; i<*N;i++)
		{
			temporal[i] = arregloObjetos[i];
		}
		temporal[*N] = obj;
		*N = *N + 1;
		arregloObjetos = temporal;
	}
}
Cuadrado*Arreglo::ObtenerCuadrado(int indice)
{
	return arregloObjetos[indice];
}
int Arreglo::getN()
{
	return *N;
}
Arreglo::~Arreglo()
{

}