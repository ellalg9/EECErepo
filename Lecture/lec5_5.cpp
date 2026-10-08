#include <iostream>
using namespace std;

int main()
{
    int age = 25;
    switch (age)
    {
        case 18:
            cout << "You are an adult." << endl;
            break;
        case 21:
            cout << "You can drink." << endl;
            break;
        default:
            cout << "Age not recognized." << endl;
    }
return 0;
}

