#include <iostream>
using namespace std;

/*
Ella Goldman
9/28/26
Reads an int that is >1 and decides whether it has
a divisor between 2 and n-1, 
and prints if it is prime or not prime.
*/

int main()
{
    int num;
    cout << "Enter n: " << endl;
    cin >> num;
    for (int i = 2; i < (num-1); i++)
    {
        if (num % i == 0)
        {
            cout << "Not prime" << endl;
        }
    }
    cout << "Prime" << endl;
    return 0;   
}