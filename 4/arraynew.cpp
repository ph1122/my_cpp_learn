#include <iostream>

int main()
{
	using namespace std;
	double * p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "*p3 = " << *p3 << endl;
	cout << "p3[0] is " << p3[0] << endl;
	cout << "p3[1] is " << p3[1] << endl;
	cout << "p3[2] is " << p3[2] << endl;
	
	p3 = p3 + 1;
	cout << "p3[0] is " << p3[0] << endl;
	cout << "p3[1] is " << p3[1] << endl;
	cout << "p3[2] is " << p3[2] << endl;
	
	p3 = p3 - 1;	//p3加1导致p3指向第二个元素而不是第一个元素了，
					//所以将p3减一后，指针将指向原来的值，这样程序便
					//可以给delete[]提供正确的地址了。
	delete [] p3;
	return 0;
}
