#include <iostream>
using namespace std;

int main()
{
    int x = 5;
    cout << "Value of x: " << x << endl;
    x = x + 10;
    cout << "New value of x: " << x << endl;
    x++; // plus 1
    cout << "Value of x after increment: " << x << endl;
    --x; // minus 1
    cout << "Value of x after decrement: " << x << endl;
    return 0;
}

// can do ++x or x++ for this
// ++x means increment, then use
// x++ means use, then increment
// more important in for loops