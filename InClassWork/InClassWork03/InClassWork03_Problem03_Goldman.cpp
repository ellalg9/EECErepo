#include <iostream>
using namespace std;

/*
Ella Goldman
9/25/26
This code checks if a given voltage is low, high, or normal.
*/

int main()
{
    double volt;
    cout << "Please enter a voltage." << endl;
    cin >> volt;
    if (volt < 4.5)
        cout << "Low" << endl;
    else if (volt > 5.5)
        cout << "High" << endl;
    else
        cout << "Normal" << endl;

    return 0;
}