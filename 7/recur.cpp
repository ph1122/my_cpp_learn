// 7.16
#include <iostream>
void countdown(int n);
int main()
{
    countdown(4);
    return 0;
}
void countdown(int n)
{
    std::cout << "Counting down ..." << n
        << "(n at " << &n << ")\n";
    if (n > 0)
        countdown(n - 1);
    std::cout << n << ": Kaboom!"
            << "(n at " << &n << ")\n";
}
