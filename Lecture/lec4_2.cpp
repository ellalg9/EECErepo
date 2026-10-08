#include <iostream>
using namespace std;

int main()
{
    int Num1, Num2;
    cout << "Please enter two numbers: ";
    cin >> Num1 >> Num2;
    if (Num1 > Num2)
        cout << "Num1 is greater than Num2" << endl;
    else
        cout << "Num1 is not greater than Num2" << endl;
    return 0;
}