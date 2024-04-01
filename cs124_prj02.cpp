/***********************************************************************
* Program:
*    Project 02, Monthly Income          (e.g. Assignment 10, Hello World)
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
   float income;
   float bliving;
   float aliving;
   float taxes;
   float tithes;
   float other;
   cout << "This program keeps track of your monthly budget\n";
   cout << "Please enter the following:\n";
   cout << "\tYour monthly income: ";
   cin >> income;
   cout << "\tYour budgeted living expenses: ";
   cin >> bliving;
   cout << "\tYour actual living expenses: ";
   cin >> aliving;
   cout << "\tYour actual taxes withheld: ";
   cin >> taxes;
   cout << "\tYour actual tithe offerings: ";
   cin >> tithes;
   cout << "\tYour actual other expenses: ";
   cin >> other;
   cout << endl;
   cout << "The following is a report on your monthly expenses\n";
   cout << "\tItem                  Budget          Actual" << endl;
   cout << "\t=============== =============== ===============" << endl;
   cout << "\tIncome" << setw(11) << "$" << setw(11) << income 
        << setw (5) << "$" << setw (11) << income << endl;
   cout << "\tTaxes" << setw(12) << "$" << setw(11) << 0.00 
        << setw (5) << "$" << setw (11) << taxes << endl;
   cout << "\tTithing" << setw(10) << "$" << setw(11) << 0.00 
        << setw (5) << "$" << setw (11) << tithes << endl;
   cout << "\tLiving" << setw(11) << "$" << setw(11) << bliving 
        << setw (5) << "$" << setw (11) << aliving << endl;
   cout << "\tOther" << setw(12) << "$" << setw(11) << 0.00 
        << setw (5) << "$" << setw (11) << other << endl;
   cout << "\t=============== =============== ===============" << endl;
   cout << "\tDifference" << setw(7) << "$" << setw(11) 
        << 0.00 << setw (5) << "$" << setw (11) << 0.00 << endl;
   return 0;
}
