#include <iostream>
using namespace std;

/*
Ella Goldman
9/22/26
This code computes the sum of two numbers, fixing the code from part F.
*/

int main()
{
    int first, second;
    int total = 0;

    cout << "Enter two whole numbers: ";
    cin >> first >> second;

    total = first + second;
    cout << "The sum is " << total << endl;

    return 0;
}