#include <iostream>

int main()
{
    using namespace std;
    cout << "Are you handsome?";
    char ch;
    cin >> ch;
    if ('y' == ch || 'Y' == ch)
        cout << "You are right!";
    else if ('n' == ch || 'N' == ch)
        cout << "You're not right.";
    else
        cout << "The error you entered.";
    return 0;
}