#include <iostream>

int main()
{
	using namespace std;
	int nights = 1001;
	cout << "nights valuse = ";
	cout << nights << ": location " << &nights << endl;

	int * pt = new int;
	*pt = 1001;
	cout << "int value = " << *pt << ": location " << pt << endl;
	
	double * pd = new double;
	*pd = 10000001.01;
	cout << "double value = " << *pd << ": location " << pd << endl;

	cout << "size of pt = " << sizeof pt << endl;
	cout << "size of *pt = " << sizeof *pt << endl;
	cout << "size of pd = " << sizeof pd << endl;
	cout << "size of *pd = " << sizeof *pd << endl;
	return 0;
}
