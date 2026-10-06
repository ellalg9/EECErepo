#include <iostream>
using namespace std;

/*
Ella Goldman
9/25/26
Takes an int and outputs all even numbers until 0.
*/

int main()
{
    int num;
    cout << "Enter n: " << endl;
    cin >> num;
    for (int i = num; i >= 0; i--)
        if (i % 2 == 0)
            cout << i << endl;
        else
            ;

    return 0;
}