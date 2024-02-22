#include <iostream>
int main()
{
	using namespace std;
	int auks, bats, coots;
	auks = 19.99 + 11.99;
	cout << "auks = " << auks << endl;
	bats = (int)19.99 + (int)11.99;
	cout << "bats = " << bats << endl;
	coots = int(19.99) + int(11.99);
	cout << "bats = " << coots << endl;

	char ch = 'E';
	cout << ch << endl;
	cout << int(ch) << endl;
	cout << static_cast<int>(ch) << endl;


	// cout << sizeof(int);
	return 0;
}

