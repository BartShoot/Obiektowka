#include "TPunkt.h"
#include <iostream>
#include <Windows.h>

using namespace std;

TPunkt::TPunkt() : y(0), x(0)
{
	x = 0;
}

TPunkt::TPunkt(int x, int y) : x(x)
{
	this->y = y;
}

TPunkt::TPunkt(const TPunkt& other)
{
	this->x = other.x;
	this->y = other.y;
}

void TPunkt::Display() const {

	cout << x << " " << y << endl;
}

int TPunkt::GetX() const
{
	return x;
}

int TPunkt::GetY() const
{
	return y;
}

void TPunkt::SetX(int value)
{
	x = value;
}
void TPunkt::SetY(int value)
{
	y = value;
}

TPunkt::~TPunkt()
{
}

void TPunkt::PrzesunDo(int nowyX, int nowyY)
{
	x = nowyX;
	y = nowyY;
}

float TPunkt::OdlegloscDo(const TPunkt &punkt) const
{
	return sqrt(pow(punkt.x - x, 2) + pow(punkt.y - y, 2));
}

void gotoxy(int x, int y)
{
	COORD c;
	c.X = x - 1;
	c.Y = y - 1;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void TPunkt::WyswietlWUkladzieWspolrzednych()
{
	gotoxy(x, y);
	cout << "*";
}
