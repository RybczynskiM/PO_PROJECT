
class  Element
{     
public:
	int rodzaj;
	int ilosc;

};

class Rezystor : public Element
{
public:
	float rezystancja;
	float tolerancja_r;
	float moc_znamion;
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
{   
public:
	float prad_przebicia;
	float opornosc;
};

class Tyrystor : public Element
{   
public:
	float prad_gran_obciazenia;
	float graniczne_nap_pow;
};