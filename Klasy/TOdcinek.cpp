#include "TOdcinek.h"

TOdcinek::TOdcinek(const TPunkt &p1, const TPunkt &p2)
{
	this->p1 = p1;
	this->p2 = p2;
}

float TOdcinek::DlugoscOdcinka() const
{
	return p1.OdlegloscDo(p2);
}

void TOdcinek::PrzesunOdcinek(int x, int y)
{
	p1.PrzesunDo(p1.GetX() + x, p1.GetY() + y);
	p2.PrzesunDo(p2.GetX() + x, p2.GetY() + y);
}

void TOdcinek::WyswietlOdcinek()
{
	p1.WyswietlWUkladzieWspolrzednych();
	p2.WyswietlWUkladzieWspolrzednych();
}
