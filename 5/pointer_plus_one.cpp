// 前缀运算符的从右往左结合规则。*++pt：先将++应用于py，然后*应用于被递增后的pt。
#include <iostream>
int main()
{
    using namespace std;
    double arr[5] = {21.1, 32.8, 23.4, 45.2, 37.4};
    double * pt = arr;
    cout << pt << endl;
    cout << *pt << endl;
    ++pt;
    cout << pt << endl;
    cout << *pt << endl;
    cout << "*++pt = " << *++pt << endl;
    cout << pt << endl;
    cout << endl;
    cout << "++*pt = " << ++*pt << endl;
    cout << pt << endl;
    cout << "*pt = " << *pt << endl;
    cout << "arr[2] = " << arr[2] << endl;
    cout << endl;
    cout << "(*pt)++ = " << (*pt)++ << endl;
    cout << "*pt = " << *pt << endl;
    cout << "arr[2] = " << arr[2] << endl;
    cout << pt << endl;
    cout << endl;
    cout << "*pt++ = " << *pt++ << endl;
    cout << "*pt = " << *pt << endl;
    cout << "arr[3] = " << arr[3] << endl;
    cout << pt << endl;



    return  0;
}