#include <iostream>
using namespace std;

/*
Ella Goldman
9/28/26
Takes number of time steps, reads pedestrian request
and takes the number of waiting cars. If pedestrian is waiting,
WALK, otherwise print GREEN if cars are waiting, or RED
if there are no cars.
*/

int main()
{
    int tstep;
    int pedreq;
    int car;
    cout << "Enter time steps: " << endl;
    cin >> tstep;
    for (int i = 1; i <= tstep; i++)
    {
        cout << "Pedestrian request: " << endl;
        cin >> pedreq;
        cout << "Waiting cars: " << endl;
        cin >> car;
            if (pedreq == 1)
            {
                cout << "Step " << i << ": WALK" << endl;
            }
            else if (car > 0)
            {
                cout << "Step " << i << ": GREEN" << endl;
            }
            else
            {
                cout << "Step " << i << ": RED" << endl;
            }
    }
    return 0;
}