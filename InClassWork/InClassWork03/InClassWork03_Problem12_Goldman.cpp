#include <iostream>
using namespace std;

/*
Ella Goldman
9/27/26
Asks user for a value between 0 and 120 and prints the accepted value.
*/

int main()
{
    int val;
    cout << "Enter speed (0-120): " << endl;
    cin >> val;
    while ((val < 0) || (val >120))
    {
        cout << "Enter speed (0-120): " << endl;
        cin >> val;
    }
    cout << "Accepted: " << val << endl;
    return 0;
}