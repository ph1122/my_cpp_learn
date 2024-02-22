#include <iostream>

int main()
{
	using namespace std;
	cout << "What year was your house bulit?\n";
	int year;
	cin >> year;
	cin.get();
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year bulit: " << year << endl;
	cout << "Adress : " << address << endl;
	cout << "Done!\n";

	return 0;
}

