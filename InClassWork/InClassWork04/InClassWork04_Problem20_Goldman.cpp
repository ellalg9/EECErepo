#include <iostream>
using namespace std;

/*
Ella Goldman
10/6/2026
Make a menu for the user to choose what shape to make.
*/

int main()
{
    int choice;
    int size;
    do
    {
        cout << "1 = Triangle  2 = Pyramid  3 = Diamond  0 = Quit" << endl;
        cout << "Choice: ";
        cin >> choice;
        if (choice == 1 || choice == 2 || choice == 3)
        {
            cout << "Size: ";
            cin >> size;
        }
    if (choice == 1)
    {
        int n = size;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout << "*";
            }
        cout << endl;
        }
    } 
    else if (choice == 2)
    {
        int n = size;
        for (int i = 1; i <= n; i++)
        {
            for (int k = 1; k <= (n-i); k++)
        {
                cout << " ";
            }
            for (int j = 1; j <= (2*i-1); j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else if (choice == 3)
    {
        int n = size;
        for (int i = 1; i <= n; i++)
        {
            for (int k = 1; k <= (n-i); k++)
            {
                cout << " ";
            }
            for (int j = 1; j <= (2*i-1); j++)
            {
                cout << "*";
            }
            cout << endl;
        }
        n -= 1;
        for (int i = n; i >= 1; i--)
        {
            for (int k = 0; k <= (n-i); k++)
            {
                cout << " ";
            }
            for (int j = 1; j <= (2*i-1); j++)
            {
                cout << "*";
            }
            cout << endl;
        }
    }
    else if (choice != 0)
    {
        cout << "Invalid choice" << endl;
    }
    } while (choice != 0);
    
    cout << "Goodbye" << endl;
    return 0;
}