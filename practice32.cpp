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
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
void getFilename(char filename[])
{
   cout << "What is the name of the file: ";
   cin >> filename;
   cin.ignore();
   
   return;
}
int getthreshold()
{
   float t = 0.0;
   cout << "What is the threshold: ";
   cin >> t;

   return t;
}
int displayfile(char filename[], float threshold, float below[])
{
   float mileage= 0.0;
   float i = 0.0;
   int c = 0;
   ifstream fin(filename);
   if (fin.fail())
   {
      cout << "Error reading file \"" << filename << "\"" << endl;
      return 2;
   }
   while (fin >> mileage )
   {
      i = mileage;
      if (i < threshold)
      {
        below[c] = i;
         c++;
      }
   }
   return 0;
}
int main()
{
   cout.setf(ios::fixed); 
   cout.setf(ios::showpoint);
   cout.precision(1);
   char filename[256];
   float below[256] = {};
   int i = 0;
   float threshold = 0.0;
   getFilename(filename);
   threshold = getthreshold();
   displayfile(filename, threshold, below);
   
   

   cout << "The following items are below the threshold:" << endl;
   for (i = 0; below[i]; i++)
   {
      if (below[i] < threshold)
      {
      cout << "\t" << below[i] << endl;
      }
   }  
   
   return 0;
}
