#include <iostream>
using namespace std;

/*
Ella Goldman
9/19/26
This code takes a given length and width and calculates the area and perimeter of the rectangle.
*/

int main()
{
    double length;
    cout << "Enter the length: " << endl;
    cin >> length;

    double width;
    cout << "Enter the width: " << endl;
    cin >> width;

    double area = length * width;
    double perimeter = (length * 2) + (width * 2);
    cout << "Area = " << area << endl;
    cout << "Perimeter = " << perimeter << endl;
    return 0;
}

/*
part b:
When a negative value is inputted by the user for the width value, the code
still performs the calculations and outputs a negative area which doesn't make sense.
Instead, the program should check if the input the user gave is negative, and if 
it is negative, it should tell the user to try again.
*/