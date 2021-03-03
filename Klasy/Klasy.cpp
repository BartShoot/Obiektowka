#include <iostream>

#include "TPunkt.h"
#include "TOdcinek.h"
#include "TTrojkat.h"

using namespace std;

int main()
{
	TPunkt p0(1, 1);
	TPunkt p1(1, 2);
	TPunkt p2(2, 1);
	TPunkt p3(1, 5);

	system("CLS");
	TTrojkat t0 (p0, p1, p2);
	cout << t0.ObwodTrojkata() << endl;
	cout << t0.PoleTrojkata() << endl;
	//t0.WyswietlTrojkat();

}