#include <iostream>
using namespace std;

int main()
{
    /*
    for (int i = 10; i > 0; i--) // while and for both iterate
        cout << "Iteration: " << i << endl;
    */
    
    // while is more academic, for is more practical/industrial
    int i = 0;
    while (i < 10)
    {
        cout << "Iteration: " << i << endl;
        i++;
    }
    return 0;
}