#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	char animal[20] = "bear";
	const char* bird = "wren";
	
	cout << animal << " " << bird << endl;
	int animal1[20] = {1,2,3};
	cout << animal1 << endl;
	
	char* ps;
	// cout << ps; // 可能显示一个空行、一堆乱码，或者程序将崩溃。
	
	cout << "Enter a kind of animal: ";
	cin >> animal;

	ps = animal;
	cout << ps << " at " << (int *) ps << endl;
	cout << animal << " at " << (int *) animal << endl;

	ps = new char [strlen(animal) + 1];
	strcpy(ps, animal);
	cout << ps << " at " << (int *) ps << endl;
	cout << animal << " at " << (int *) animal << endl;
	
	delete[] ps;
	return 0;
}
