/***********************************************************************
* Program:
*    Assignment 23, Loop syntax          (e.g. Assignment 10, Hello World)
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
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   cout << "What multiples are we adding? ";
   int number;
   cin >> number;

   int sum;
   int N;
   for (int N = 0; N < 100; N += number)
   {
      sum += N;
   }
   cout << "The sum of multiples of " 
   << number 
   << " less than 100 are: " 
   << sum
   << "\n";

   return 0;

}


