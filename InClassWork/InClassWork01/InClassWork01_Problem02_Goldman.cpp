#include <iostream>
using namespace std;

/*
Ella Goldman
9/19/26
This code saves two numbers in variables and then later uses them to compute the numbers'
sum (numsum), difference (numdiff), product (numprod), and quotient (numquot), and then it all gets printed out.
*/

int main()
{
    int number1 = 15.0;
    int number2 = 2.0;
    
    double numsum = number1 + number2;
    double numdiff = number1 - number2;
    double numprod = number1 * number2;
    double numquot = number1 / number2;
    
    cout << number1 << " + " << number2 << " = " << numsum << endl;
    cout << number1 << " - " << number2 << " = " << numdiff << endl;
    cout << number1 << " * " << number2 << " = " << numprod << endl;
    cout << number1 << " / " << number2 << " = " << numquot << endl;
    return 0;
}

/*
part b:
When the declarations were changed from double to int, the last line
where the answer is 7.5 (the quotient) changed to 7 because int
tells the code to ignore everything after the decimal point, while double
tells the code to include the decimal point when printing out the answer. 
*/