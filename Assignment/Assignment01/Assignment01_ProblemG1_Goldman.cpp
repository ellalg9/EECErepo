#include <iostream>
using namespace std;

/*
Ella Goldman
9/22/26
This code takes three resistance values and finds their sum and average.
*/

int main()
{
    double res1 = 220.0;
    double res2 = 330.0;
    double res3 = 470.0;

    cout << "Resistance 1: " << res1 << " ohms." << endl;
    cout << "Resistance 2: " << res2 << " ohms." << endl;
    cout << "Resistance 3: " << res3 << " ohms." << endl;

    double totalres = res1 + res2 + res3;
    cout << "Total resistance: " << totalres << " ohms." <<endl;

    double avgres = totalres / 3.0; //Divide by 3.0 because the res values are doubles and dividing by 3.0 will also be a double value.
    cout << "Average resistance: " << avgres << " ohms." << endl;

    return 0;
}