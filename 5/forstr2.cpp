#include <iostream>
#include <string>
int main()
{
    using namespace std;
    cout << "Enter a word: ";
    string word;
    cin >> word;
    char temp;
    int i, j;
    for (j = 0, i = word.size() - 1;j < i;++j, --i)
    {
//        char temp;    // temp在每轮循环中都将被分配和释放。这比在循环前定义要慢一些。
        temp = word[i];
        word[i] = word[j];
        word[j] = temp;
    }
    cout << temp << endl;
    cout << word << endl;
    return 0;
}