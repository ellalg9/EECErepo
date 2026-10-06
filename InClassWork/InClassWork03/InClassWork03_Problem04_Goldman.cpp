#include <iostream>
using namespace std;

/*
Ella Goldman
9/25/26
Checks if an input weight is small, medium, or large.
*/

int main()
{
    double weight;
    cout << "Enter weight (kg): " << endl;
    cin >> weight;

    if (weight <= 2)
        cout << "Small" << endl;
    else if (weight > 2 && weight <=10)
        cout << "Medium" << endl;
    else
        cout << "Large" << endl;

    return 0;
}