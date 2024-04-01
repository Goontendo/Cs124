/***********************************************************************
* Program:
*    Assignment 12, Monthly Income
*    Brother Birch, CS124
* Author:
*    Jared Thomasson
* Summary: 
*    Using input commands and output commands to display monthly income
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Make sure to include iomanip for the setw commands.
 ***********************************************************************/
int main()
{
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout << "\tYour monthly income: ";
   float Income;
   cin >> Income;
   cout << "Your income is:" << setw(2) << "$" << setw(9) << Income << "\n";


   return 0;
}
