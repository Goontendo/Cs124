/***********************************************************************
* Program:
*    Test 2, compound interest         (e.g. Assignment 10, Hello World)
*    Brother Birch, CS124
* Author:
*    Jared Thomasson
* Summary: 
*    Program will display a compound interest over thirty years
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
using namespace std;

/***********************************************************************
 * function to get investment
***********************************************************************/
float getInvestment()
{
   cout.setf(ios::fixed); 
   cout.setf(ios::showpoint);
   cout.precision(2);
   float investment;
   cout << "How much are you investing? ";
   cin >> investment;

   return investment;
}

/***********************************************************************
 * function to get percent
***********************************************************************/
float getPercentage()
{
   cout.setf(ios::fixed); 
   cout.setf(ios::showpoint);
   cout.precision(1);
   float percent;
   cout << "What is the interest rate in percent? ";
   cin >> percent;
   float compound = (percent / 100);

   return compound;
}

/***********************************************************************
 * function to get year
***********************************************************************/
int getYear()
{
   int year;
   cout << "How long will this investment grow in years? ";
   cin >> year;

   return year;
}

/***********************************************************************
 * Function to compute interest and display it.
***********************************************************************/
double display(int year, float investment, float compound)
{
   cout.setf(ios::fixed); 
   cout.setf(ios::showpoint);
   cout.precision(2);
   int y;
   for (y = 1; y <= year; y++)
   {
      investment += (investment * compound);
   }
   cout << "At the end of "
      << year
      << " years, you will have $"
      << investment
      << endl;

   return 0;
}

/***********************************************************************
 * Main function
***********************************************************************/
int main()
{  
   cout.setf(ios::fixed); 
   cout.setf(ios::showpoint);
   cout.precision(1);
   float investment = getInvestment();
   float compound =  getPercentage();
   int year = getYear();

   display(year, investment, compound);

   return 0;
}
