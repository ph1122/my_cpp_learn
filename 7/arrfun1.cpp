#include <iostream>
const int ArSize = 8;
int sum_arr(int arr[], int n);
int main()
{
    using namespace std;
    int cookies[ArSize] = {1, 2, 4, 8, 16, 32, 64, 128};
    cout << sizeof cookies << endl;
    cout << sizeof(int) << endl;
    cout << sizeof &cookies << endl;
    cout << cookies << " " << &cookies << endl;
    int sum = sum_arr(cookies, ArSize);
//    int sum = sum_arr(&cookies[0], ArSize);
//    int sum = sum_arr(&cookies[1], ArSize);
    cout << "Total cookies eaten: " << sum << "\n";
    return 0;
}
int sum_arr(int arr[], int n)
//int sum_arr(int* arr, int n)
{
    int total = 0;
    for (int i = 0; i < n; ++i)
        total += arr[i];
    return total;
}