/***********************************************************************
* Program:
*    Assignment 13, F to C          (e.g. Assignment 10, Hello World)
*    Brother Birch, CS124
* Author:Thomasson
*    Jared 
* Summary: 
*    Enter a brief description of your program here!  Please note that if
*    you do not take the time to fill out this block, YOU WILL LOSE POINTS.
*    Before you begin working, estimate the time you think it will
*    take you to do the assignment and include it in this header block.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <cmath>
using namespace std;


/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{  cout.setf(ios::fixed); 
   cout.precision(0);
   
   cout << "Please enter Fahrenheit degrees: ";
   float F;
   cin >> F;
   float C = 5.0 / 9 * round(F - 32);
   cout << "Celsius: " << C << endl;
   return 0;
}
