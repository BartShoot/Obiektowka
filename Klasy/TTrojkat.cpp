#include "TTrojkat.h"
#include <math.h>

TTrojkat::TTrojkat(const TPunkt &p1, const TPunkt &p2, const TPunkt &p3)
{
	this->p1 = p1;
	this->p2 = p2;
	this->p3 = p3;
}

float TTrojkat::PoleTrojkata() const
{
	float p = this->ObwodTrojkata() / 2;
	return sqrt(p * (p - p1.OdlegloscDo(p2)) * (p - p1.OdlegloscDo(p2)) * (p - p3.OdlegloscDo(p1)));
}

void TTrojkat::WyswietlTrojkat()
{
	p1.WyswietlWUkladzieWspolrzednych();
	p2.WyswietlWUkladzieWspolrzednych();
	p3.WyswietlWUkladzieWspolrzednych();
}

float TTrojkat::ObwodTrojkata() const
{
	return p1.OdlegloscDo(p2) + p1.OdlegloscDo(p2) + p3.OdlegloscDo(p1);
}
