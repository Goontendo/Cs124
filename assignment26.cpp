/***********************************************************************
* Program:
*    Assignment 26, Files          (e.g. Assignment 10, Hello World)
*    Brother Birch, CS124
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
#include <fstream>
#include <iomanip>
using namespace std;


/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
void getFileName(char fileName[])
{
   cout << "Please enter the filename: ";
   cin >> fileName;
   
   return;
}
float readFile(char fileName[])
{
   float Grade = 0;
   float sum = 0;
   float count = 0;

   ifstream fin(fileName);
   if (fin.fail())
   {
      cout << "Error reading file \"" << fileName << "\"" << endl;
      return 2;
   }
   
   while (fin >> Grade)
   {
      sum = sum + Grade;
      count++;
   }
   
   float average = sum / count;

   if (average > 100 || average < 0)
   {
      cout << "Error reading file \"" << fileName << "\"" << endl;
      return 2;
   }

   if (count > 10 || count < 10)
    {
      cout << "Error reading file \"" << fileName << "\"" << endl;
      return 2;
   }

   fin.close();
   return average;
}
void display(float average)
{
   cout.setf(ios::fixed);
   cout.precision(0);

   cout << "Average Grade: " << average << "%" << endl;

   return;
}
int main()
{
   char fileName[256];
   getFileName(fileName);
   float average = readFile(fileName);
   if (average != 2)
   {
      display (average);
   }
   return 0;
}
