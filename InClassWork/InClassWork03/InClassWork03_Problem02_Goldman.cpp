#include <iostream>
using namespace std;

/*
Ella Goldman
9/25/26
Reads a device ID and determines whether its even or odd.
*/

int main()
{
    int ID;
    cout << "Enter a device ID: " << endl;
    cin >> ID;

    if (ID % 2 == 0)
        cout << "Even device ID" << endl;
    else
        cout << "Odd device ID" << endl;

    return 0;

}