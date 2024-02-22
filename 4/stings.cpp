#include <iostream>
#include <cstring>
int main()
{
	using namespace std;
	const int Size = 15;
	char name1[Size];
	char name2[Size] = "C++owboy";
	cout << "Howdy!I'm " << name2;
	cout << "! What's your name?\n";
	cin >> name1;
	cout << "Well, " << name1 << ", your name has ";
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof(name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << ".\n";
	name2[3] = '\0';
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;
	
	return 0;
}
/*
 *siezof 运算符指出整个数组的长度
 *strlen()函数返回的是存储在数组中的字符串的长度（不把空字符计算在内），而不是数组本身的长度
 *程序将name2[3]设置为空字符，这使得即使第三个字符后数组还有其他的字符，字符串在第三个字符后仍结束
 *程序使用符号常量来指定数组的长度，当需要修改程序以使用不同的数组长度时，工作将变得更简单。
 * */
