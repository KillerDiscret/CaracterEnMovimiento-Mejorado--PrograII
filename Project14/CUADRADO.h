#pragma once
#include <conio.h>
#include <iostream>
#include <Windows.h>
using namespace std;
using namespace System;
class Cuadrado
{
private:
	int x, y, color, direccion;

public:	 
	Cuadrado();
	~Cuadrado();
	void setX(int X);
	void setY(int Y);
	void setColor(int COLOR);
	void setDireccion(int Direccion);
	int getX();
	int getY();
	int getCOLOR();
	int getDIRECCION();
	void imprimir();
	void mover();
	void borrar();
};
Cuadrado::Cuadrado()
{
	x = 0;
	y = 0;
	direccion = 0;
	color = 0;
}
void Cuadrado::setX(int X)
{
	x = X;
}
void Cuadrado::setY(int Y)
{
	y = Y;
}
void Cuadrado::setColor(int COLOR)
{
	color = COLOR;
}
void Cuadrado::setDireccion(int DIRECCION)
{
	direccion = DIRECCION;
}
int Cuadrado::getX()
{
	return x;
}
int Cuadrado::getY()
{
	return y;
}
int Cuadrado::getCOLOR()
{
	return color;
}
int Cuadrado::getDIRECCION()
{
	return direccion;
}
void Cuadrado::imprimir()
{
	Console::SetCursorPosition(x, y);
	cout << char(219);
}
void Cuadrado::mover()
{
	if (x==0&&y==0)
	{
		direccion = 0;
	}
	if (x == 79 && y == 0)
	{
		direccion = 1;
	}
	if(x ==79  && y == 29)
	{
		direccion = 2;
	}
	if (x == 0 && y == 29)
	{
		direccion = 3;
	}
	if (direccion == 0)x++;
	if (direccion == 1)y++;
	if (direccion == 2)x--;
	if (direccion == 3)y--;
}
void Cuadrado::borrar()
{
	Console::SetCursorPosition(x,y);
	cout << " ";
}


Cuadrado::~Cuadrado()
{

}