/***********************************************************************
* Program:
*    Assignment 11, ????          (e.g. Assignment 10, Hello World)
*    Brother Birch, CS124
* Author:
*    Jared Thomasson
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
#include <iomanip>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()

{
   cout.setf(ios::fixed); 
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout << "\tItem" << setw(20) << "Projected" << endl;
   cout << "\t=============  ==========" << endl;
   cout << "\tIncome" << setw(10) << "$" << setw(9) << 1000.00 << endl;
   cout << "\tTaxes" << setw(11) << "$" << setw(9) << 100.00 << endl;
   cout << "\tTithing" << setw(9) << "$" << setw(9) << 100.00 << endl;
   cout << "\tLiving" << setw(10) << "$" << setw(9) << 650.00 << endl;
   cout << "\tOther" << setw(11) << "$" << setw(9) << 90.00 << endl;
   cout << "\t=============  ==========" << endl;
   cout << "\tDelta" << setw(11) << "$" << setw(9) << 60.00 << endl;
   return 0;
}
