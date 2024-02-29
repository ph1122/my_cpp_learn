#include <iostream>

int main()
{
	using namespace std;
	double wages[3] = {1000.0, 2000.0, 3000.0};
	short stacks[3] = { 3, 2, 1};
	double *pw = wages;
	// double *pw = &wages[0]; // 等价于指针指向第一个元素
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	
	short* ps = &stacks[0];
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "ps = " << ps << ", *ps = " << *ps << endl;

	cout << "stacks[0] = " << stacks[0] << " " << " stacks[1] " << stacks[1] << endl;
	cout << "stacks = " << stacks << endl;
	cout << "stacks + 1 = " << stacks + 1 << endl;
	cout << "*stacks = " << *stacks << " " << "&stacks[0] = " << &stacks[0] << endl;
	// 数组名是指向数组第一个元素的地址。
	cout << "*(stacks + 1) = " << *(stacks + 1) << endl;
	
	cout << sizeof(wages) << endl;// 数组的长度 3*8
	cout << sizeof(wages[0]) << endl;
	cout << sizeof(pw) << endl;// 地址的长度
	cout << wages << endl;
	cout << &wages << endl;
	cout << wages + 1 << endl; // 将地址加8
	cout << &wages + 1 << endl; // 将地址加（3*8）=24
	return 0;
}
