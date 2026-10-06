#include <iostream>
using namespace std;

/*
Ella Goldman
9/26/26
Takes an initial population and number of days,
then calculates the population for each day.
*/

int main()
{
    int pop;
    cout << "Enter initial population: " << endl;
    cin >> pop;
    int days;
    cout << "Enter days: " << endl;
    cin >> days;
    for (int i = 1; i <= days; i++)
        {
        pop *= 2;
        cout << "Day " << i << ": " << pop << endl;
        }
    return 0;
}