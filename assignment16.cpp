/***********************************************************************
* Program:
*    Assignment 16, Taxes          (e.g. Assignment 10, Hello World)
*    Brother Birch, CS124
* Author:
*    Jared Thomasson
* Summary: 
*    if then statements in a function to compute tax percentage.
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
using namespace std;
/**********************************************************************
 * function to compute tax
 *********************************************************************/
double ComputeTax(double Income)
{
   double ComputeTax;

   if (Income >= 336551)
      ComputeTax = 35;

   else if (Income >= 188451)
      ComputeTax = 33;
   
   else if (Income >= 123701)
      ComputeTax = 28;
   
   else if (Income >= 61301)
      ComputeTax = 25;
   
   else if (Income >= 15101)
      ComputeTax = 15;
   
   else ComputeTax = 10;
      
      return ComputeTax;
}
/**********************************************************************
 * Main Function
 ***********************************************************************/
int main()
{
    cout.setf(ios::fixed); 
   cout.precision(0);
   
   double Income;

   cout << "Income: ";
   cin >> Income;

   cout << "Your tax bracket is " << ComputeTax (Income) << "%" << endl;

   return 0;
}
