#include <iostream>
using namespace std;

/*
Ella Goldman
9/26/26
Takes a voltage and resistance value and calculates power.
*/

int main()
{
    int V;
    double R;
    cout << "Enter maximum voltage: " << endl;
    cin >> V;
    cout << "Enter resistance: " << endl;
    cin >> R;
    for (int i = 1; i <= V; i++)
        cout << i << " V: " << (i*i/R) << " W" << endl;
    return 0;
}