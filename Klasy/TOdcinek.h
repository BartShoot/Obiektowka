#pragma once
#include "TPunkt.h"
class TOdcinek
{
private:
	TPunkt p1, p2;
public:
	TOdcinek(const TPunkt &p1, const TPunkt &p2);
	float DlugoscOdcinka() const;
	void PrzesunOdcinek(int x, int y);
	void WyswietlOdcinek();
};

