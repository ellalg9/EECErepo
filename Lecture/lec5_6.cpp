#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char op;
    cout << "Enter two numbers and an operator: ";
    cin >> a >> b >> op;

    switch (op)
    {
        case '+':
            cout << "Result: " << a + b << endl;
            break;
        case '-':
            cout << "Result: " << a - b << endl;
            break;
        case '*':
            cout << "Result: " << a * b << endl;
            break;
        case '/':
            if (b != 0)
                cout << "Result: " << a / b << endl;
            else
                cout << "Error: Division by zero." << endl;
        default:
            cout << "Error: Invalid operator." << endl;
            break;
    }
return 0;
}