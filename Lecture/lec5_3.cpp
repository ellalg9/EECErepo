#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "*"; // add endl; to make the stars print vertically
    }
    cout << endl;
return 0;
}