/***********************************************************************
* Program:
*    Assignment 40, tic tac          (e.g. Assignment 10, Hello World)
*    Brother Birch, CS124
* Author:
*   Jared 
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
void GetFilename(char filename[])
{
   cout << "Enter source filename: ";
   cin.getline(filename, 256);

   return;
}
bool Readfile(char filename[], char tictac[][3])
{
   ifstream fin;
   fin.open(filename);
   if (fin.fail())
      return false;

   for (int row = 0; row < 3; row++)
   {
      for (int col = 0; col < 3; col++)
      {
         fin >> tictac[row][col];
         if (fin.fail())
            return false;
      }
   }

   fin.close();
   return true;
}
void display(char tictac[][3])
{
   for (int x = 0; tictac[x][0]; x++)
      for (int y = 0; tictac[x][y]; y++)
      {   
         if (tictac[x][y] == '.')
            tictac[x][y] = ' '; 
      }
   cout << " " << tictac[0][0] << " | " << tictac[0][1] << " | " 
        << tictac[0][2] << " "
        << endl 
        << "---+---+---"
        << endl
        << " " << tictac[1][0] << " | " << tictac[1][1] << " | " 
        << tictac[1][2] << " "
        << endl 
        << "---+---+---"
        << endl
        << " " << tictac[2][0] << " | " << tictac[2][1] << " | " 
        << tictac[2][2] << " "
        << endl;
}
int Writefile(char tictac[][3])
{
   char secondfile[256];
   cout << "Enter destination filename: ";
   cin.getline(secondfile, 256);

   ofstream fout(secondfile);

   for (int x = 0; tictac[x][0]; x++)
   {
      for (int y = 0; tictac[x][y]; y++)
      {
         fout << tictac[x][y];
         if (tictac[x][y] == ' ')
               fout << '.';
            
            fout << ' ';

            if (y == 2)
               fout << endl;
      }
   }
   cout << "File written\n";

   return 0;
}
int main()
{
   char filename[256];
   char tictac[3][3];
   GetFilename(filename);
   Readfile(filename, tictac);
   display(tictac);
   Writefile(tictac);
   return 0;
}
