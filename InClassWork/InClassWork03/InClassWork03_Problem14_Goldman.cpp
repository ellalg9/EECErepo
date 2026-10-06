#include <iostream>
using namespace std;

/*
Ella Goldman
9/28/26
Takes positive int and divides it by 10
repeatedly to count decimal digits and prints count.
*/

int main()
{
    int num;
    int count = 0;
    cout << "Enter positive integer: " << endl;
    cin >> num;
    while (num > 0)
    {
        num /= 10;
        count++;
    }
    cout << "Digits: " << count << endl;
    return 0;
}