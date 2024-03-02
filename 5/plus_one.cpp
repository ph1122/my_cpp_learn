//++x and x++
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    int a = 20;
    int b = 20;
    cout << "a = " << a << ";b = " << b << endl;
    cout << "a++ = " << a++ << ";++b = " << ++b << endl;
    cout << "a = " << a << ";b = " << b << endl;


    int x = 5;
    cout << "x = " << x << endl;
    x = 2 * x++ * (3 - ++x);
    cout << "x = 2 * x++ * (3 - ++x) = (2 * 5) * (3 - 7) = " << x << endl;
    return 0 ;
}