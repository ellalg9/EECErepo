#include <iostream>
using namespace std;

/*
Ella Goldman
9/28/26
Reads sensor values and counts the values
that are at least 70 before the user enters -1.
*/

int main()
{
    int reading;
    int count = 0;
    cout << "Enter reading (-1 to stop): " << endl;
    cin >> reading;
    while (reading != -1)
    {
        if (reading >= 70)
            count++;
        
        cout << "Enter reading (-1 to stop): " << endl;
        cin >> reading;
    }
    cout << "Readings at least 70: " << count << endl;
    return 0;
}