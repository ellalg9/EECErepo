#include <iostream>
using namespace std;

/*
Ella Goldman
9/25/26
Takes an input for number of days, and for each day
takes an input for kWh value. Then outputs total kWh
for all days.
*/

int main()
{
    int days;
    cout << "Enter number of days: "<< endl;
    cin >> days;
    int kWh = 0;
    int total = 0;
    for (int i = 1; i <= days; i++)
    {
        cout << "Day " << i << " kWh: " << endl;
        cin >> kWh;
        total += kWh;
    }
    cout << "Total: " << total << " kWh" << endl;
    return 0;
}