#include <iostream>
using namespace std;

/*
Ella Goldman
9/28/26
Counts the number of hot and cold readings given after 5 readings.
*/

int main()
{
    int temp;
    int i = 1;
    int ccount = 0;
    int hcount = 0;
    while (i <= 5)
    {
        cout << "Reading " << i << ": " << endl;
        cin >> temp;
        i++;
        if (temp < 0)
        {
            ccount += 1;
        }
        else if (temp > 35)
        {
            hcount += 1;
        }
        else
        {
            ;
        }
    }
    cout << "Cold: " << ccount << endl;
    cout << "Hot: " << hcount << endl;
    return 0;
}