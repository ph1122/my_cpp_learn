#include <iostream>
using namespace std;
// using std::cin;
// using std::cout;
// using std::endl;
int main(void)
{
	int carrots;

	cout << "How many carrots do you have?" << endl;
	// std::cout << "How many carrots do you have?" << std::endl;
	cin >> carrots;
	cout << "Here are two more.";
	carrots = carrots + 2;
	cout << "Now you have " << carrots << " carrots." << endl;

	return 0;
}
