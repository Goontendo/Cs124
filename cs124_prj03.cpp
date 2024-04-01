/***********************************************************************
* Program:
*    Project 03, MonthlyBudget  (e.g. Assignment 10, Hello World)
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
 * Program to display monthly income and expenses in chart
 * prompt user for income
 *********************************************************************/
float getIncome()
{    
   float income;
   cout << "This program keeps track of your monthly budget\n";
   cout << "Please enter the following:\n";
   cout << "\tYour monthly income: ";
   cin >> income;
   //return Income
   return income; 
}

/**********************************************************************
* Function to display budget living
* prompt user for budget living
**********************************************************************/
float getBudgetliving()
{    
   float bliving;
   cout << "\tYour budgeted living expenses: ";
   cin >> bliving;
   //return Budget Living
   return bliving; 
}

/**********************************************************************
 * Function to display actual living
 * prompt user for Actual living
 *********************************************************************/
float getActualLiving()  
{    
   float aliving;
   cout << "\tYour actual living expenses: ";
   cin >> aliving;
   //return Actual Living
   return aliving; 
}

/**********************************************************************
 * Function to display actual taxes
 * function to prompt user for tax
 *********************************************************************/
float getActualTaxes() 
{    
   float taxes;
   cout << "\tYour actual taxes withheld: ";
   cin >> taxes;
   //return actual taxes
   return taxes; 
}

/**********************************************************************
 * Function to display actual tithes
 * function to prompt user for tithes
 *********************************************************************/
float getActualTithing() 
{    
   float tithe;
   cout << "\tYour actual tithe offerings: ";
   cin >> tithe;
   //return computed tithes
   return tithe; 
}

/**********************************************************************
 * Function to display computed taxes
 * function to computation of taxes
 *********************************************************************/
float getComputeTaxes() 
{
   float ctaxes;
   ctaxes = 0;
   //returned computed taxes
   return ctaxes; 
}

/**********************************************************************
 * Function to display other expenses
 * function to prompt user for other expenses
 *********************************************************************/
float getActualOther() 
{    
   float other;
   cout << "\tYour actual other expenses: ";
   cin >> other;
   //return other expenses
   return other; 
}

/**********************************************************************
 * Function to display functions above in table format
 * function for table
 *********************************************************************/ 
int display (float income, float bliving, float aliving, 
   float ataxes, float atithes, 
   float other, float ctaxes, float ctithes, 
   float btaxes, float bother)
{
   cout.setf(ios::fixed); 
   cout.setf(ios::showpoint);
   cout.precision(2);
   cout << "\n";
   cout << "The following is a report on your monthly expenses\n";
   cout << "\tItem                  Budget          Actual" << endl;
   cout << "\t=============== =============== ===============" << endl;
   cout << "\tIncome" << setw(11) << "$" << setw(11) << income 
        << setw (5) << "$" << setw (11) << income << endl;
   cout << "\tTaxes" << setw(12) << "$" << setw(11) << ctaxes 
        << setw (5) << "$" << setw (11) << ataxes << endl;
   cout << "\tTithing" << setw(10) << "$" << setw(11) << ctithes 
        << setw (5) << "$" << setw (11) << atithes << endl;
   cout << "\tLiving" << setw(11) << "$" << setw(11) << bliving 
        << setw (5) << "$" << setw (11) << aliving << endl;
   cout << "\tOther" << setw(12) << "$" << setw(11) << bother 
        << setw (5) << "$" << setw (11) << other << endl;
   cout << "\t=============== =============== ===============" << endl;
   cout << "\tDifference" << setw(7) << "$" << setw(11) 
        << 0.00 << setw (5) << "$" << setw (11) 
        << (income - ataxes - atithes - aliving - other) 
        << endl;
   return 0;
}

/**********************************************************************
 * int main used to compile all functions
 * main function
 *********************************************************************/
int main()
{
   float income = getIncome();
   float bliving = getBudgetliving();
   float aliving = getActualLiving();
   float ataxes = getActualTaxes();
   float atithes = getActualTithing();
   float other = getActualOther();
   float ctaxes = getComputeTaxes();
   float ctithes = income / 10;
   float btaxes = 0;
   float bother = (income - bliving - btaxes - ctithes);
   
   display (income, bliving, aliving, ataxes, atithes, 
      other, ctaxes, ctithes, btaxes, bother);

   return 0;
}
