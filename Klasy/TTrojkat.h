#pragma once
#include "TPunkt.h"
#include "TOdcinek.h"
class TTrojkat
{
private:
	TPunkt p1, p2, p3;
public:
	TTrojkat(const TPunkt &p1, const TPunkt &p2, const TPunkt &p3);
	float ObwodTrojkata() const;
	float PoleTrojkata() const;
	void WyswietlTrojkat();
};

