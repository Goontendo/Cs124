/***********************************************************************
* Program:
*    Assignment ##, ????          (e.g. Assignment 10, Hello World)
*    Brother {Cook, Comeau, Falin, Lilya, Honeycutt, Unsicker, Peterson, Phair, Ellsworth, Helfrich}, CS124
* Author:
*    your name
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
int getPower()
{
   int power;
   cout << "How many powers of two: ";
   cin >> power;

   return power;
}
int display(int power)
{
   int answer = 2;
   int E;
   for (E = 0; E < power; E++)
   {
      cout << "\t"
      << "2^" 
      << E 
      << "\t";
      if (E == 0)
         cout << "1" << endl;
      else if (E == 1)
         cout << "2" << endl;
      else
         answer += answer;
      if (E > 1)
         cout << answer << endl;
   }

   return 0;
}
int main()
{
   int power = getPower();
   display(power);

   return 0;
}
