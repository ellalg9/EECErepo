#include <iostream>
using namespace std;

/*
Ella Goldman
9/28/26
Takes a positive divisor and nonnegative target and
prints the smallest poositive multiple that is > target.
*/

int main()
{
    int d;
    int t;
    cout << "Enter divisor: " << endl;
    cin >> d;
    cout << "Enter target: " << endl;
    cin >> t;

    int mult = d;
    while (mult <= t)
        mult += d;
    cout << "First multiple above target: " << mult << endl;

    return 0;
}