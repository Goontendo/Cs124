/***********************************************************************
* Program:
*    Assignment 31, array placement         (e.g. Assignment 10, Hello World)
*    Brother Birch, CS124
* Author:
*   jared Thomasson 
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
#include <cassert>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int getgrades(int listgrades[])
{
   int g;
   for (g = 1; g <= 10; g++)
   {
      cout << "Grade " << g << ": ";
      cin >> listgrades[g];
   }
   return listgrades[g];
}
int GradeAvg(int listgrades[])
{

   int g = 0;
   int avg = 0;
   int sum = 0;
   int divider = 0;
   for (g = 1; g <= 10; g++)
   {
      if (listgrades[g] >= 0)
      {
      sum += listgrades[g];
      divider++;
      }
   }
   if (sum != 0)
   {
   avg = sum / divider;
   }
   else
   {
      avg = -1;
   }
   

   return avg;
}
int main()
{
   int listgrades[10];
   getgrades(listgrades);
   int avg = GradeAvg(listgrades);

   if (avg != -1)
   {
      cout << "Average Grade: " << avg << "%" << endl;
   }
   else
      cout << "Average Grade: ---%" << endl;

   return 0;
}