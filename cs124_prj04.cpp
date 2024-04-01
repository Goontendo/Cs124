/***********************************************************************
* Program:
*    Project 04, Montly Budget      (e.g. Assignment 10, Hello World)
*    Brother Birch, CS124
* Author:
*    Jared Thomasson
* Summary: 
*    program to compute and display monthly budget.
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
double getComputeTaxes(double income)
{
   double yearlyincome = (income * 12);
   double yearlyTax;

   if (0 <= yearlyincome && yearlyincome <= 15100)
      yearlyTax = (yearlyincome * 0.10);

   else if (15101 <= yearlyincome && yearlyincome <= 61300)
      yearlyTax = (1510 + 0.15 * (yearlyincome - 15100));
   
   else if (61301 <= yearlyincome && yearlyincome <= 123700)
      yearlyTax = (8440 + 0.25 * (yearlyincome - 61300));
   
   else if (123701 <= yearlyincome && yearlyincome <= 188450)
      yearlyTax = (24040 + 0.28 * (yearlyincome - 123700));
	
   else if (188451 <= yearlyincome && yearlyincome <= 336550)
      yearlyTax = (42170 + 0.33 * (yearlyincome - 188450));
   
   else yearlyTax = (91043 + 0.35 * (yearlyincome - 336550));
   
   double monthlyTax = (yearlyTax / 12);

   return monthlyTax;
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
int display (double income, double bliving, double aliving, 
   double ataxes, double atithes, 
   double other, double ctaxes, double ctithes, 
   double btaxes, double bother)
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
   double income = getIncome();
   double bliving = getBudgetliving();
   double aliving = getActualLiving();
   double ataxes = getActualTaxes();
   double atithes = getActualTithing();
   double other = getActualOther();
   double ctaxes = getComputeTaxes(income);
   double ctithes = income / 10;
   double btaxes = 0;
   double bother = (income - bliving - ctaxes - ctithes);
   
   display (income, bliving, aliving, ataxes, atithes, 
      other, ctaxes, ctithes, btaxes, bother);

   return 0;
}

