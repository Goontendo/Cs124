/***********************************************************************
* Program:
*    Assignment 21, Stub    (e.g. Assignment 10, Hello World)
*    Brother Birch, CS124
* Author:
*    Jared Thomasson
* Summary: 
*    A stub program created as asked in assignment21.cpp.
*
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/***************************
 * stub
 **************************/
 double promptDevalue() 
{
    return 0; // stub to prompt for value
}

/***************************
 * stub
 **************************/
double promptInsurance()
{
   return 0; // stub to prompt for insurance
}

/***************************
 * stub
 **************************/
double promptParking()
{
   return 0; // stub to prompt for parking
}

/***************************
 * stub
 **************************/
double getPeriodicCost(double value, double insurance, double parking)
{
   return 0; // get periodic cost
}

/***************************
 * stub
 **************************/
double promptMileage()
{
   return 0; // prompt user for mileage
}

/***************************
 * stub
 **************************/
double promptGas()
{
   return 0; // prompt user for gas
}

/***************************
 * stub
 **************************/
double promptRepairs()
{
   return 0; // prompt user for repairs
}

/***************************
 * stub
 **************************/
double promptTires()
{
   return 0; // prompt user for tires
}

/***************************
 * stub
 **************************/
double getUsageCost( 
double mile, 
double gas, 
double repair, 
double tires)
{
   return 0;
}

/***************************
 * stub
 **************************/
int display ( double PeriodicCost, double UsageCost)
{
   cout << "Success\n";
   
   return 0;
}
/**********************************************************************
 * Main Function
 ***********************************************************************/
int main()
{
   double value = promptDevalue();
   double insurance = promptInsurance();
   double parking = promptParking();
   double PeriodicCost = getPeriodicCost( value, insurance, parking);
   double mile = promptMileage();
   double gas = promptGas();
   double repair = promptRepairs();
   double tires = promptTires();
   double UsageCost = getUsageCost( mile, gas, repair, tires);

   display (PeriodicCost, UsageCost);

   return 0;
}
