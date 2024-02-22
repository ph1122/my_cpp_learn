#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    int n_int = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

    // 对类型名（如int）使用sizeof，应将名称放在括号里。但对变量名使用sizeof时，括号是可选的。sizeof不是函数，是一个计算符！
	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof (n_long) << " bytes." << endl;
	cout << "long long is " << sizeof n_llong <<" bytes." << endl;

    cout << "Maximum values:" << endl;
    cout <<"int: "<< n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl;
	
	cout << "-------------" << endl;
	int a =5;
	cout << a << endl;
	
	int a1(15);
	cout << a1 << endl;

	int a2{25};
	cout << a2 << endl;
	return 0;
}
