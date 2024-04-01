/***********************************************************************
* Program:
*    Project 09, Madlib Prompt        (e.g. Assignment 10, Hello World)
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
int printMadLib(char story[numwords][numletters], int &size);
int main();


/**********************************************************************
 * function for madlib
 ***********************************************************************/
void getMadLib(char madlib[])
{
   cout << "Please enter the filename of the Mad Lib: ";
   cin.getline(madlib, 256);
   
   return;
}

/***********************************************************************
 * function for reading madlib
 **********************************************************************/
int readMadLib(char madlib[], char story[numwords][numletters], int &size)
{
   // reads file
   ifstream fin;
   fin.open(madlib);
   if (fin.fail())
   {
      cout << "Error reading file \"" << madlib << "\"" << endl;
      return 2;
   }
   // declare i
   int i = 0;
   // reads file and assigns number for words to i
   while (fin >> story[i])
   {
      i++;
   }
   // assigns i to size for questions variable
   size = i; 

   return 0;
}

/***************************************************************
 * function to read madlib and prompt user for question
***************************************************************/
int questions(char story[numwords][numletters], int & size)
{
   // for loop to find words in need of alterations
   for (int c = 0; c < size; c++)
   {
      if (story[c][0] == ':' && isalpha(story[c][1]))
      {
         // for loop to change individual lettering
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
int puncuation(char story[numwords][numletters], int size)
{
   int i = 0;
   int c = 0;
   cout << endl;
   for (i = 0; i <= size; i++)
   { 
      if (story[i][0] == ':' && story[i][1] == '!')
      {
         story[i][0] = '\n';
         story[i][1] = '\0';
      }
      if (story[i][0] == ':' && story[i][1] == '.')
      {
         story[i][0] = '.';
         story[i][1] = '\0';
      }
      if (story[i][0] == ':' && story[i][1] == '<')
      {
         story[i][0] = '\"';
         story[i][1] = '\0';
      }
      if (story[i][0] == ':' && story[i][1] == ',')
      {
         story[i][0] = ',';
         story[i][1] = '\0';
      }
      if (story[i][0] == ':' && story[i][1] == '>')
      {
         story[i][0] = '\"';
         story[i][1] = '\0';
      }
   }
   for (i = 0; i < size; i++)
   {
      if (story[i + 1][0] == '.')
         cout << story[i];
      else if (story[i + 1][0] == ',') 
         cout << story[i];
      else if (story[i+1][0] == '\n') 
         cout << story[i];
      else if (story[i + 1][0] == '!')
        cout << story[i]; 
      else if (story[i + 1][0] == '?')
        cout << story[i];
      else if (story[i][0] == '\"') 
         cout << story[i];
      else if (story[i + 1][0] == '\"')
         cout << story[i] << ' ';
      else if (story[i][0] == '<')  
         cout << story[i];
      else if (story[i][0] == '>')
         cout << story[i];
      else if (story[i][0] == '\n')
         cout << story[i];
      else if (story[i][0] == '.' && story[i+1][0] == '\n')
         cout << story[i];
      else 
         cout << story[i] << ' ';
   }
   return 0;
}
void playAgain(char madlib[256])
{
   char choose;
   char newFile;

   cout << endl;
   cout << "Do you want to play again (y/n)? " ;
   cin >> choose;

   if (choose == 'y')
   {
      cin.getline(madlib, 256).clear();
      main();
   }
   else
   {
      cout << "Thank you for playing." << endl;
   }
}
/*******************************************************
 * compiler function/ main
*******************************************************/
int main()
{
   char madlib[256];
   char story[numwords][numletters] = {};
   int size = 0;

   getMadLib(madlib);
   readMadLib(madlib, story, size);
   questions(story, size);
   puncuation(story, size);
   playAgain(madlib);
   
   return 0;
}
