#include <iostream>

int main()
{
  using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin.getline(name, ArSize);
	cout << "Enter your favarite dessert:\n";
	cin.getline(dessert, ArSize);
	cout << "I have favorite dessert " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}
/* 
 * cin 提供了面向行的类成员函数：getlint()和get()
 * 这两个函数都读取一行输入，直到到达换行符。
 * getline()将丢弃换行符，而get()将换行符保留在输入序列中。
 *
 * */
