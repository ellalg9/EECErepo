#include <iostream>
using namespace std;

/*
Ella Goldman
9/24/26
This code calculates the value of n uising ++n, n++, --n, and n--.
*/

int main()
{
    int n = 3;
    cout << n++ << endl;
    cout << ++n << endl;
    cout << n-- << endl;
    cout << --n << endl;

    // prediction: 5, 7, 7, 5
    return 0;
}

// The difference between ++n and n++ is that ++n tells the code to add
// 1 to the n value before executing the code, while n++ tells the code to add
// 1 to the n value after executing the code. The same order goes for --n and n--.