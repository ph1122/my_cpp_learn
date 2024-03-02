#include <iostream>

int main()
{
    using namespace std;
    int n;

    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favorite number\n";
    do
    {
        cin >> n;
        cout << "no, again!\n";
    }while(n != 7);
    cout << "yes, 7 is my favorite.\n";
    return 0;
}