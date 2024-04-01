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
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main()
{
   int num = 0;
   int sum = 0;
   int avg = 0;

   cout << "How many grades? ";
   cin >> num;
   int numbers[num];

   for (int i = 0; i < num; i++)
   {
      cout << "\tEnter grade " << i + 1 << ": ";
      cin >> numbers[i];
   }
   for (int i = 0; i < num; i++)
   {
      if (numbers[i] > 100 || numbers[i] < 0)
      {
         cout << "\tGrade " << i+1 << " is not valid. Please re-enter grade " << i+1 << ": ";
         cin >> numbers[i];
      }
   }
   for (int i = 0; i < num; i++)
   {
      sum += numbers[i];
      avg = sum / num;
   }
   cout << "The average grade is " << avg << "%" << endl;
   return 0;
}
