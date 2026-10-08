#include <iostream>
using namespace std;

/*
Ella Goldman
9/24/26
This code takes three values (2 ints and 1 double), and performs calculations.
*/

int main()
{
    int a = 11;
    int b = 4;
    double c = 2.0;
    
    cout << "a / b = " << a / b << endl;
    cout << "a % b = " << a % b << endl;
    cout << "a / c = " << a / c << endl;

    return 0;

    // prediction: a/b=2, a%b=3, a/c=5.5
}

// a/b and a/c produce different outputs because a/c includes a double
// and a/b is only ints, so a/c produces a double while a/b produces an int.