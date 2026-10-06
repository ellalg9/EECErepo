#include <iostream>
using namespace std;

/*
Ella Goldman
9/28/26
Asks the user for their destination floor.
Tells the user how many floors up or down they need 
to travel, or if they need to stay. Prints total floors traveled.
*/

int main()
{
    int destination = 1;
    int floor = 1;
    int travel = 0;
    cout << "Destination (0 to stop): " << endl;
    cin >> destination;

    while (destination != 0)
    {
        if ((destination > floor) && (destination <= 10))
        {
            cout << "UP " << (destination - floor) << " floors" << endl;
            travel += (destination - floor);
            floor = destination;
        }
        else if ((destination < floor) && (destination >= 0))
        {
            cout << "DOWN " << (floor - destination) << " floors" << endl;
            travel += (floor - destination);
            floor = destination;
        }
        else
        {
            cout << "STAY" << endl;
        }
        cout << "Destination (0 to stop): " << endl;
        cin >> destination;
    }
    cout << "Total floors traveled: " << travel << endl;
    return 0;
}