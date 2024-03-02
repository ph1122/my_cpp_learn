// 值为0的表达式将被转化为boll值false，导致循环结束。
#include <iostream>

int main()
{
    using namespace std;
    cout << "Enter the starting countdown valude: ";
    int limit;
    cin >> limit;
    int i = 10;

    for (int i = limit; i; i--)     // 这个i的作用域在for循环内
        cout << "i = " << i << endl;
    cout << "Done now that i = " << i << endl;

    for (i = limit; i; i--)
        cout << "i = " << i << endl;
    cout << "Done now that i = " << i << endl;
    return 0;
}