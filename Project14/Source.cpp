#include"Arreglo.h"
#include "CUADRADO.h"
#include <Windows.h>
#define A 97
int main()
{
	Cuadrado *objcuadrado;
	Arreglo *ArregloDeObjetos;
	objcuadrado = new Cuadrado();
	ArregloDeObjetos = new Arreglo();
	ArregloDeObjetos->AgregarCuadrado(objcuadrado);
	Console::SetWindowSize(80, 30);
	while (1)
	{
		for (int i=0; i<ArregloDeObjetos->getN();i++)
		{
			objcuadrado=ArregloDeObjetos->ObtenerCuadrado(i);
			objcuadrado->borrar();
			objcuadrado->mover();
			objcuadrado->imprimir();
		}
		if (_kbhit())
		{
			char tecla = _getch();
			if (tecla==A)
			{
				objcuadrado = new Cuadrado();
				ArregloDeObjetos->AgregarCuadrado(objcuadrado);

			}
		}
		_sleep(100);
	}
	return 0;
}