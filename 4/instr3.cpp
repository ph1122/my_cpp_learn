#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin.get(name, ArSize).get();
	cout << "Enter your favarite dessert:\n";
	cin.get(dessert, ArSize);
	cin.get();
	cout << "I have favorite dessert " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}
/* 
 * cin 提供了面向行的类成员函数：getlint()和get()
 * get()不再读取并丢弃换行符，而是将其留在输入队列中。
 * 由于第一次调用后，换行符将留在输入队列中
 * 因此第二次调用时看到的第一个字符便是换行符。
 * cin.get()调用可读取下一个字符（即使是换行符），因此可以用它处理换行符。
 * */
