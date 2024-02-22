#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];

	cout << "Enter your name:\n";
	cin >> name;
	cout << "Enter your favarite dessert:\n";
	cin >> dessert;
	cout << "I have favorite dessert " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}
/*
 *Enter your name:
lebron james
Enter your favarite dessert:
I have favorite dessert james for you, lebron.
 *为什么第二个cin直接跳过输入了？而name的输出也不正确？
 *原因是cin使用空白（空格、制表符和换行符）来确定字符串的结束位置
 *
 * */
