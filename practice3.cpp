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
#include <fstream>
#include <algorithm>
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
float readFile(float number[], char fileName[])
{
   int i = 0;
   ifstream fin(fileName);
   if (fin.fail())
   {
      cout << "Error reading file \"" << fileName << "\"" << endl;
      return 2;
   }
   fin >> number;
   return 0;
}
int main()
{
   char fileName[256];
   getFileName(fileName);
   float number[256];
   readFile(number, fileName);
   sort(number, number+256);
   while (number[i])
   {
      cout << number[i] << endl;
      i++;
   }

   return 0;
}
