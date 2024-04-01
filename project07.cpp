/***********************************************************************
* Program:
*    Project 07, Calendar Program          (e.g. Assignment 10, Hello World)
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
#include <fstream>

using namespace std;

/**********************************************************************
 * Function to prompt user for month.
 ***********************************************************************/
int GetMonth()
{  
   int month;

   cout << "Enter a month number: ";
   cin >> month;
   while (month > 12 || month < 0)
   {
      cout << "Month must be between 1 and 12.\n";
      cout << "Enter a month number: ";
      cin >> month;
   }   
   return month;
      
}

/**********************************************************************
 * Function to prompt user for year.
 ***********************************************************************/
float GetYear()
{
   float year;

   cout << "Enter year: ";
   cin >> year;
   while (year < 1753)
   {
      cout << "Year must be 1753 or later.\n";
      cout << "Enter year: ";
      cin >> year;
   }
   return year;
}

/**********************************************************************
 * Function to determine if year is a leap year.
 ***********************************************************************/
bool isLeapyear(int year)
{

   if ((year % 4 == 0 ) && (year % 100 != 0)) 
      return true;

   else if (year % 400 == 0)
      return true;
   
   else 
      return false;

}
 
/*********************************************************************
 * Function to calculate number of days per month.
 ***********************************************************************/
int CalculateDays(int monthnum, int year)
{
   int month; 

   if (monthnum == 1)
      month = 31;

   if ((monthnum == 2) && (isLeapyear(year) == true))
      month = 29;

   else if (monthnum == 2)
      month = 28;

   if (monthnum == 3)
      month = 31;

   if (monthnum == 4)
      month = 30;

   if (monthnum == 5)
      month = 31;

   if (monthnum == 6)
      month = 30;

   if (monthnum == 7)
      month = 31;

   if (monthnum == 8)
      month = 31;

   if (monthnum == 9)
      month = 30;

   if (monthnum == 10)
      month = 31;

   if (monthnum == 11)
      month = 30;

   if (monthnum == 12)
      month = 31;

   return month;
}

/**********************************************************************
 * Function to calculate offset.
 ***********************************************************************/
int CalculateOffSet(int monthnum, int year)
{
   int monthcounter;
   int yearcounter;
   int daysofyear = 0;
   int daysofmonth = 0;
   int leapyear = 0;
   int offset = 0;
   int m = 1;

   for (yearcounter = 1753; yearcounter < year; yearcounter++)
   {
      daysofyear += 365;
      if (isLeapyear(yearcounter))
      {
         leapyear++;
      }

   }
   
   for (monthcounter = 1; monthcounter < monthnum; monthcounter++)
   {
      daysofmonth+= (CalculateDays(m, year));
      m++;
   }
   offset = (daysofmonth + daysofyear + leapyear) % 7;

   return offset;

}

/*********************************************
 * Display function
 ********************************************/
int display(int days, int year, int offset, int monthnum)
{
   monthnum = monthnum - 1;
   char monthname[][256] =
   {
      "January", // 0
      "February", // 1
      "March", // 2
      "April", // 3
      "May" // 4
      "June", // 5
      "July", // 6
      "Auguest", // 7
      "September", // 8
      "October", // 9
      "November", // 10
      "December" // 11
   };
   cout << endl;
   cout << monthname[monthnum] << ", " << year << endl;
   cout << setw(4)
      << "Su" << setw(4) 
      << "Mo" << setw(4)
      << "Tu" << setw(4)
      << "We" << setw(4)
      << "Th" << setw(4)
      << "Fr" << setw(4)
      << "Sa" << setw(4)
      << endl;
   int d;
   int n;
   for (d = 0; d <= offset; d++)
   {
      if (offset != 6)
         cout << "    ";
   }
   for (n = 1; n <= days; n++)
   {
      d += 1;
      if (d % 7 == 0)
         cout << setw(4) << n << endl;
      if (d % 7 != 0)
         cout << setw(4) << n;
      if (n >= days && d % 7 != 0 )
         cout << endl;
   }   
  
   return 0;
}

/**********************************************************************
 * Main function.
 ***********************************************************************/
int main()
{
   char monthname[][256] =
   {
      "January", // 0
      "February", // 1
      "March", // 2
      "April", // 3
      "May" // 4
      "June", // 5
      "July", // 6
      "Auguest", // 7
      "September", // 8
      "October", // 9
      "November", // 10
      "December" // 11
   };

   int monthnum = GetMonth();
   int year = GetYear();
   int days = CalculateDays(monthnum, year);
   int offset = CalculateOffSet(monthnum, year);
   

   display (days, year, offset, monthnum);
   
   return 0;
}