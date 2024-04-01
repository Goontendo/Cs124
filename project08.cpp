/***********************************************************************
* Program:
*    Assignment 09, ????          (e.g. Assignment 10, Hello World)
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
#include <fstream>
#define numwords 256
#define numletters 32
using namespace std;

void getMadLib(char madlib[]);
int readMadLib(char madlib[], char story[numwords][numletters], int &size);
int questions(char story[numwords][numletters], int &size);


/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
void getMadLib(char madlib[])
{
   cout << "Please enter the filename of the Mad Lib: ";
   cin >> madlib;
   cin.ignore();
   
   return;
}
int readMadLib(char madlib[], char story[numwords][numletters], int &size)
{
   ifstream fin;
   fin.open(madlib);
   if (fin.fail())
   {
      cout << "Error reading file \"" << madlib << "\"" << endl;
      return 2;
   }
   int i = 0;
   while (fin >> story[i])
   {
      i++;
   }
   size = i;

   return 0;
}
int questions(char story[numwords][numletters], int &size)
{
   for (int c = 0; c < size; c++)
   {
      if (story[c][0] == ':' && isalpha(story[c][1]))
      {
         for (int l = 0; l < numletters; l++)
         {
            if (story[c][l] == '_')
            {
               story[c][l] = ' ';
            }
            story[c][l] = tolower(story[c][l]);
         }
            story[c][0] = '\t';
            story[c][1] = toupper(story[c][1]);
            cout << story[c]
                 << ": ";
            cin.getline(story[c], 32);
      }
   }
   return 0;
} 
//void printMadLib(madlib[], )
int main()
{
   char madlib[256];
   char story[numwords][numletters];
   int size;
   getMadLib(madlib);
   readMadLib(madlib, story, size);
   questions(story, size);
   

   cout << "Thank you for playing." << endl;

   return 0;
}