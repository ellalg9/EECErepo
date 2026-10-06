#include <iostream>
using namespace std;

/*
Ella Goldman
9/25/26
Takes an input number and counts
up to that number for output.
*/

int main()
{
    int ncount;
    cout << "Enter sample count: " << endl;
    cin >> ncount;
    for (int i = 1; i <= ncount; i++)
    {
        cout << i << endl;
    }
    return 0;
}