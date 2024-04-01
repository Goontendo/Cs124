/***********************************************************************
* Program:
*    Assignment 32, string         (e.g. Assignment 10, Hello World)
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
#include <cassert>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
void lettercounter(char text[])
{
assert('\0' == false);
char letter;
int x;
int counter = 0;
//int size = sizeof(text) / sizeof(*text);
cout << "Enter a letter: ";
cin >> letter;
cin.ignore();
cout << "Enter text: ";
cin.getline(text, 256);

   for (x = 0; text[x] != '\0'; x++)
   {
       if (text[x] == letter)
         counter++;
   }
 cout << "Number of '" << letter << "'s: " << counter << endl;
   return;
}
int main()
{  
   char text[256];
   lettercounter(text);
   
   return 0;
}
