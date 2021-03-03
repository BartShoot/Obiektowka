#pragma once
class TPunkt
{
private:
	int x, y;
public:
	// konstruktory
	// - domyslny, kopiujacy
	TPunkt();
	TPunkt(int x, int y);
	TPunkt(const TPunkt& other);
	// selektory
	void Display() const;
	int GetX() const;
	int GetY() const;
	// modyfikatory
	void SetX(int value);
	void SetY(int value);

	//destruktor
	~TPunkt();

	// statyczne
	void PrzesunDo(int nowyX, int nowyY);

	float OdlegloscDo(const TPunkt &punkt) const; 

	void WyswietlWUkladzieWspolrzednych();
};