#include <iostream>
using namespace std;

/*
Ella Goldman
9/24/26
This code takes an age and a test score and checks if a person qualifies
based on set perameters.
*/

int main()
{
    int age;
    int score;

    cout << "Please input an age and test score: " << endl;
    cin >> age >> score;

    if (age >= 18 && score >= 70)
        cout << boolalpha << bool (age >= 18 && score >= 70) << endl;
    else
        cout << boolalpha << bool (age >= 18 && score >= 70) << endl;

    return 0;

}