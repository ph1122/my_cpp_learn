#include <iostream>
using namespace std;
struct antarctica_years_end
{
	int year;
};

int main()
{
	antarctica_years_end s01, s02, s03;
	s01.year = 1998;
	antarctica_years_end* pa = &s02;
	pa->year = 1999;
	antarctica_years_end trio[3];
	trio[0].year = 2003;
	cout << trio->year << endl;
	const antarctica_years_end * arp[3] = {&s01, &s02, &s03};
	cout << arp[1]->year << endl;
	cout << (*arp[1]).year << endl;
	cout << "arp= " << arp << endl;
	cout << "&arp= " << &arp << endl;
	cout << "arp[0]= " << arp[0] << endl;
	cout << "&arp[0]= " << &arp[0] << endl;
	cout << "*arp= " << *arp << endl;
	cout << "&s01= " << &s01 << endl;
	cout << endl;
	const antarctica_years_end ** ppa = arp;
	cout << "ppa= " << ppa << endl;
	cout << "&ppa= " << &ppa << endl;
	cout << "ppa[0]= " << ppa[0] << endl;
	cout << "&ppa[0]= " << &ppa[0] << endl;
	cout << "*ppa= " << *ppa << endl;
	// cout << **ppa << endl;
	cout << (*ppa)->year << endl;
	cout << (**ppa).year << endl;

	auto ppb = arp;
	cout << "ppb= " << ppb << endl;
	cout << "*ppb= " << *ppb << endl;
	// cout << **ppa << endl;
	cout << (*ppb)->year << endl;
	cout << (**ppb).year << endl;


	return 0;
}
	
