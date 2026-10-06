#include <iostream>
using namespace std;

/*
Ella Goldman
9/25/26
Checks if the pump should be on or off based on
user input for maintenance and water level.
*/

int main()
{
    double wlevel;
    int maintenance;

    cout << "Enter water level: " << endl;
    cin >> wlevel;
    cout << "Maintenance flag (0 or 1): " << endl;
    cin >> maintenance;

    if (maintenance == 1)
        cout << "Pump off" << endl;
    else
        if (wlevel < 25)
            cout << "Pump on" << endl;
        else
            cout << "Pump off" << endl;

    return 0;
}