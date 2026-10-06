#include <iostream>
using namespace std;

/*
Ella Goldman
9/27/26
Takes a battery percentage and subteacts 7 every minute.
*/

int main()
{
    int percent;
    cout << "Enter battery percentage: " << endl;
    cin >> percent;
    int i = 1;
    while (percent > 0)
    {
        if (percent-7 > 0)
        {
            percent -= 7;
            cout << "Minute " << i << ": " << percent << "%" << endl;
            i++;
        }
        else
        {
            percent = 0;
            cout << "Minute " << i << ": " << percent << "%" << endl;
        }
    }
    return 0;
}