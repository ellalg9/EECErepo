#include <iostream>
using namespace std;

/*
Ella Goldman
9/22/26
This code takes a given number of seconds and breaks it up into hours, minutes, and seconds.
It prints the result and then double checks the calculations in the last line of code.
*/

int main()
{
    int seconds;
    cout << "Enter elapsed seconds: " << endl;
    cin >> seconds;

    cout << seconds << " seconds is:" << endl;

    int hours = seconds / 3600;
    int min = (seconds % 3600) / 60;
    int sec = seconds % 60;

    cout << hours << " hours" << endl;
    cout << min << " minutes" << endl;
    cout << sec << " seconds" << endl;
    
    cout << "Check: " << hours << "*3600" << " + " << min << "*60" << " + " << sec << " = " << (hours*3600)+(min*60)+sec << endl;
    return 0;
}