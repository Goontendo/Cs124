/***********************************************************************
* Program:
*    Assignment 35, letter grade          (e.g. Assignment 10, Hello World)
*    Brother birch, CS124
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
int promptgrade()
{
   int percent = 0;
   cout << "Enter number grade: ";
   cin >> percent;

   return percent;
}
char lettergrade(int numgrade)
{
   char letter;
   if (numgrade >= 90)
   {
      letter = 'A';
   }
   else if (numgrade >= 80 && numgrade < 90)
   {
      letter = 'B';
   }
   else if (numgrade >= 70 && numgrade < 80)
   {
      letter = 'C';
   }
   else if (numgrade >= 60 && numgrade < 70)
   {
      letter = 'D';
   }
   else if (numgrade < 60)
   {
      letter = 'F';
   }

   return letter;   
}
char gradesign(int numgrade)
{
   int remain = numgrade % 10;
   char sign;
   if (numgrade > 59 && numgrade < 95)
   {
      if (remain < 3)
      {
         sign = '-';
      }
      else if (remain <= 6 && remain >= 3)
      {
         sign = 'w';
      }
      else if (remain > 6)
      {
         sign = '+';
      }
   }
   if (numgrade < 60 || numgrade > 95)
   {
      sign = 'w';
   }
   return sign;
}
int main()
{
   int numgrade = promptgrade();
   char letter = lettergrade(numgrade);
   char sign = gradesign(numgrade);
   int remain = numgrade % 10;
   if (sign != 'w')
   {
      cout << numgrade 
        << "% is "
        << letter
        << sign
        << endl;
   }
   else
   {
      cout << numgrade 
        << "% is "
        << letter
        << ""
        << endl;
   }
   
   return 0;
}
