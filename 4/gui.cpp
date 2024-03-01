#include <stdlib.h>
#include <iostream>
#include <cstdio>
using namespace std;
int main(void) {
	int guizi2 = 888; //存枪的第 2 个柜子
	int* guizi1 = &guizi2; //存第 2 个柜子地址的第一个柜子
	int** liujian = &guizi1; //手握第一个柜子地址的刘建
	
	printf("刘建打开第一个柜子，获得第二个柜子的地址：0x%p\n", *liujian);
	printf("guizi2 的地址:0x%p\n", &guizi2);
	int* tmp;
	tmp = *liujian;
	printf("访问第二个柜子的地址，拿到枪：%d\n", *tmp);
	printf("刘建一步到位拿到枪：%d\n", **liujian); //缩写成 **liujian
	system("pause");


	//printf("guizi2 = ",guizi);
	cout << "guizi2= " << guizi2 << endl;
	cout << "&guizi2= " << &guizi2 << endl;
	cout << "guizi1= " << guizi1 << endl;
	cout << "*guizi1= " << *guizi1 << endl;
	cout << "&guizi= " << &guizi1 << endl;
	cout << "liujian= " << liujian << endl;
	cout << "*liujian= " << *liujian << endl;
	cout << "**liujian= " << **liujian << endl;

	cout << endl;
	auto zhjangsan = &guizi1;
	cout << "guizi2= " << guizi2 << endl;
	cout << "&guizi2= " << &guizi2 << endl;
	cout << "guizi1= " << guizi1 << endl;
	cout << "*guizi1= " << *guizi1 << endl;
	cout << "&guizi= " << &guizi1 << endl;
	cout << "zhjangsan= " << zhjangsan << endl;
	cout << "*zhjangsan= " << *zhjangsan << endl;
	cout << "**zhjangsan= " << **zhjangsan << endl;
	return 0;
}
