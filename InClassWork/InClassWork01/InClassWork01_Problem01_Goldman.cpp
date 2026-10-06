#include <iostream>
using namespace std;

/*
Ella Goldman
9/19/26
This code outputs the class title, my name, class section, and a message saying that I wrote my first C++ program.
*/

int main()
{
    cout << "EECE 2140 - Computing Fundamentals\n" << "==================================\n" << endl;
    cout << "Name: Ella Goldman\n" << "Section: 01\n" << "Today I wrote my first C++ program.\n" << endl;
    return 0;
}

// The difference between \n and endl is that \n makes the code go to the next line
// before outputting the next thing (forces the output onto the next line), while endl tells the code that
// that line of code is finished and that it can read what to do next on the next line of code.