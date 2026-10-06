#include <iostream>
using namespace std;

/*
Ella Goldman
9/19/26
This code takes in a number of seconds and computes the time in hours, minutes, and seconds.
It prints out the results and then checks the answers by working backwards to find the original
seconds value given by the user by using the equation hours*3600 + minutes*60 + seconds = given seconds value.
*/

int main()
{
    int sec;
    cout << "Enter elapsed seconds: " << endl;
    cin >> sec;

    cout << sec << " seconds is:" << endl;

    int hours = sec / 3600;
    int min = (sec % 3600) / 60;
    int seconds = sec % 60;

    cout << hours << " hours" << endl;
    cout << min << " minutes" << endl;
    cout << seconds << " seconds" << endl;
    
    cout << "Check: " << hours << "*3600" << " + " << min << "*60" << " + " << seconds << " = " << (hours*3600)+(min*60)+seconds << endl;
    return 0;
}