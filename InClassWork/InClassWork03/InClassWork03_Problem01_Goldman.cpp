#include <iostream>
using namespace std;

/*
Ella Goldman
9/25/26
Checks temperature status based on input.
*/

int main()
{
    double temp;
    cout << "Enter temperature: " << endl;
    cin >> temp;
    
    if (temp < 0)
        cout << "Freezing" << endl;
    else
        cout << "Not freezing" << endl;

    return 0;
}