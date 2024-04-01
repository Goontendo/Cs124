/***********************************************************************
* Program:
*    test3, test          (e.g. Assignment 10, Hello World)
*    Brother Birch, CS124
* Author:
*    jared thomasson
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
#include <fstream>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
void getFilename(char filename[])
{
   cout << "Enter the filename: ";
   cin >> filename;
   
   return;
}
void readsort(char filename[], float stock[])
{
   cout.setf(ios::fixed); 
   cout.setf(ios::showpoint);
   cout.precision(2);
   float mileage = 0.00;
   int c = 0;
   int i = 0;
    ifstream fin(filename);
   if (fin.fail())
   {
      cout << "Error opening file "  << filename << endl;
      return;
   }
   while (fin >> mileage)
   {
      stock[c] = mileage;
      c++;
      i = c;
   }
   cout << "New order:";
   while (c != -1)
   {
      cout << stock[c] << endl;
      c--;
   }
   return;
}
int main()
{
   char filename[256];
   float stock[100];
   getFilename(filename);
   readsort(filename, stock);

   return 0;
}
