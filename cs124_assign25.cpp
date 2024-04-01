/***********************************************************************
* Program:
*    Assignment 25, Loop Design  (e.g. Assignment 10, Hello World)
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
int NumberDays()
{
   int days;
   cout << "Number of days: ";
   cin >> days;
   return days;
}
int ComputeOffset()
{
   int offset;
   cout << "Offset: ";
   cin >> offset;
   return offset;
}
void displaytable(int days, int offset)
{
   int n;
   int D;
   cout << setw(4)
   << "Su" << setw(4) 
   << "Mo" << setw(4)
   << "Tu" << setw(4)
   << "We" << setw(4)
   << "Th" << setw(4)
   << "Fr" << setw(4)
   << "Sa" << setw(4)
   << endl;
   
      for (D = 0; D <= offset; D++)
      {
         if (offset != 6)
         cout << "    ";
      }
   for (n = 1; n <= days; n++)
   {
      D += 1;
      if ( D % 7 == 0)
         cout << setw(4) << n << endl;
      if ( D % 7 != 0)
         cout << setw(4) << n;
      if (n >= days && D % 7 != 0 )
         cout << endl;
   }   
   return;
}
int main()
{
   int days = NumberDays();
   int offset = ComputeOffset();
   displaytable(days, offset);
   return 0;
}
