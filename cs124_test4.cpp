/***********************************************************************
* Program:
*    Test 4, Counting strings          (e.g. Assignment 10, Hello World)
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
#include <cctype>
#include <iomanip>
#include <string>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/
int main(int argc, char **argv)
{
    string array;
    int letters = 0;
    int symbols = 0;
    int spaces = 0;
    int digits = 0;
    int i = 0;
    if(argc == 1)
    {
        cout << "Please enter some text: ";
        getline(cin, array);
	}
    else
    {
        for (i = 1; i < argc; i++)
        {
            array += *(argv + i);
            spaces++;
        }
        spaces--;
	}
	
    for (i = 0; array[i]; i++)
        {
            if(isdigit(array[i]))
                digits++;
            else if(isspace(array[i]))
                spaces++;
            else if (ispunct(array[i]))
                symbols++;
            else if(isalpha(array[i]))
                letters++;
		}

    cout << "\tLetters: " << letters << endl;
    cout << "\tDigits:  " << digits << endl;
    cout << "\tSymbols: " << symbols << endl;
    cout << "\tSpaces:  " << spaces << endl;

   return 0;
}
