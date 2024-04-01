/***********************************************************************
* Program:
*    Assignment 33, date         (e.g. Assignment 10, Hello World)
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
float SamAccount()
{
   float accountSam = 0.00;
   cout << "What is Sam's balance? ";
   cin >> accountSam;

   return accountSam;
}
float SueAccount()
{
   float accountSue = 0.00;
  cout << "What is Sue's balance? ";
  cin >> accountSue;

  return accountSue;
}
void date(float * pAccount)
{
   float dinner = 0.00;
   float movie = 0.00;
   float icecream = 0.00;
   float dateprice = 0.00;
      cout << "Cost of the date:" << endl;
      cout << "\tDinner:    ";
         cin >> dinner;
      cout << "\tMovie:     ";
         cin >> movie;
      cout << "\tIce cream: ";
         cin >> icecream;

   dateprice = dinner + movie + icecream;

   *pAccount -= dateprice;

   return;
}
int main()
{
   float accountSam = 0.00; // Sam's account
   accountSam = SamAccount();
   float accountSue = 0.00; // Sue's account
   accountSue = SueAccount();
   float * pAccount; //pointer
      
      if (accountSam > accountSue) 
         pAccount = &accountSam; 
      else 
         pAccount = &accountSue;

   date(pAccount);

   cout << "Sam's balance: $" << accountSam << endl;
   cout << "Sue's balance: $" << accountSue << endl; 


   return 0;
}
