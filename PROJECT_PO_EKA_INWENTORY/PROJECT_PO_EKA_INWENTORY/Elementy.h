//Klasa bazowa element,reszta dziedziczy publicznie, dodawanie metod uzna³em za zbêdne,poniewa¿ bedziemy podawac rodzaj i poszczególne parametry,wiêc tylko by zabrudzily kod.
#include <iostream>
using namespace std;

class  Element :
{     public:
	int rodzaj;
	int ilosc;

};

class Rezystor : public Element
{
public:
	float rezystancja;
	float tolerancja;
	float moc_znamion;
};

class Potencjometr : public Rezystor
{
public:
	float zakres_rezystancji;
};

class Kondensator : public Element
{
public:
	float pojemnosc;
	float nap_znamion;
	float stratnosc;
	float tolerancja;
};

class Cewka : public Element
{
public:
	float indukcyjnosc;
	float reaktancja;
	float impedancja;
	float dobroc;
};

class Tranzystor : public Element
{
public:
	float prad_kolekt;
	float napiecie_uce;
	float prad_bazy;
	float napiecie_nasycenia;
	float dop_straty_mocy;
};

class Dioda : public Element
{ public :
	float prad_przebicia;
	float opornosc;
	float temperatura_zlacza;
	
};

class Tyrystor : public Element
{ public:
	float prad_graniczny_obc;
	float graniczne_nap_powtarzalne;
};

