/***********************************************************************
* Program:
*    Project 12, Sudoku          (e.g. Assignment 10, Hello World)
*    Brother Birch, CS124
* Author:
*    Jared Thomasson
* Summary: 
*    A program to grab a file, display the sudoku board in the file and 
*    allow the player to make changes.
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

void GetFilename(char filename[]);
bool Readfile(char filename[], char sudoku[][9]);
void display(char sudoku[][9]);
int editcoordinates(char sudoku[][9]);
int Writefile(char sudoku[][9]);
bool command(char factor, char sudoku[][9]);
void getpossible(int possible[],char sudoku[][9], int &r, int &c);



/**********************************************************************
 * function to collect sudoku board to be inputted into program.
 ***********************************************************************/
void GetFilename(char filename[])
{
   cout << "Where is your board located? ";
   cin.getline(filename, 256);

   return;
}

/***********************************************
 * board function/ reads the sudoku file
 **********************************************/
bool Readfile(char filename[], char sudoku[][9])
{
   ifstream fin;
   fin.open(filename);
   if (fin.fail())
      return false;

   for (int row = 0; row < 9; row++)
   {
      for (int col = 0; col < 9; col++)
      {
         fin >> sudoku[row][col];
         if (fin.fail())
            return false;
      }
   }

   fin.close();
   return true;
}

/*****************************
 * display function
 *****************************/
void display(char sudoku[][9])
{
   for (int x = 0; sudoku[x][0]; x++)
      for (int y = 0; sudoku[x][y]; y++)
      {   
         if (sudoku[x][y] == '0')
            sudoku[x][y] = ' '; 
      }
   cout << "   A B C D E F G H I" << endl
        << "1  " << sudoku[0][0] << " " << sudoku[0][1] << " "
        << sudoku[0][2] << "|" << sudoku[0][3] << " " << sudoku[0][4] 
        << " " << sudoku[0][5] << "|" << sudoku[0][6] << " "
        << sudoku[0][7] << " " << sudoku[0][8] 
        << endl 
        << "2  " << sudoku[1][0] << " " << sudoku[1][1] << " "
        << sudoku[1][2] << "|" << sudoku[1][3] << " " << sudoku[1][4] 
        << " " << sudoku[1][5] << "|" << sudoku[1][6] << " "
        << sudoku[1][7] << " " << sudoku[1][8] 
        << endl
        << "3  " << sudoku[2][0] << " " << sudoku[2][1] << " "
        << sudoku[2][6] << "|" << sudoku[2][3] << " " << sudoku[2][4] 
        << " " << sudoku[2][5] << "|" << sudoku[2][6] << " "
        << sudoku[2][7] << " " << sudoku[2][8] 
        << endl
        << "   -----+-----+-----"
        << endl
        << "4  " << sudoku[3][0] << " " << sudoku[3][1] << " "
        << sudoku[3][2] << "|" << sudoku[3][3] << " " << sudoku[3][4] 
        << " " << sudoku[3][5] << "|" << sudoku[3][6] << " "
        << sudoku[3][7] << " " << sudoku[3][8] 
        << endl 
        << "5  " << sudoku[4][0] << " " << sudoku[4][1] << " "
        << sudoku[4][2] << "|" << sudoku[4][3] << " " << sudoku[4][4] 
        << " " << sudoku[4][5] << "|" << sudoku[4][6] << " "
        << sudoku[4][7] << " " << sudoku[4][8] 
        << endl
        << "6  " << sudoku[5][0] << " " << sudoku[5][1] << " "
        << sudoku[5][2] << "|" << sudoku[5][3] << " " << sudoku[5][4] 
        << " " << sudoku[5][5] << "|" << sudoku[5][6] << " "
        << sudoku[5][7] << " " << sudoku[5][8] 
        << endl
         << "   -----+-----+-----"
        << endl
        << "7  " << sudoku[6][0] << " " << sudoku[6][1] << " "
        << sudoku[6][2] << "|" << sudoku[6][3] << " " << sudoku[6][4] 
        << " " << sudoku[6][5] << "|" << sudoku[6][6] << " "
        << sudoku[6][7] << " " << sudoku[6][8] 
        << endl 
        << "8  " << sudoku[7][0] << " " << sudoku[7][1] << " "
        << sudoku[7][2] << "|" << sudoku[7][3] << " " << sudoku[7][4] 
        << " " << sudoku[7][5] << "|" << sudoku[7][6] << " "
        << sudoku[7][7] << " " << sudoku[7][8] 
        << endl
        << "9  " << sudoku[8][0] << " " << sudoku[8][1] << " "
        << sudoku[8][2] << "|" << sudoku[8][3] << " " << sudoku[8][4] 
        << " " << sudoku[8][5] << "|" << sudoku[8][6] << " "
        << sudoku[8][7] << " " << sudoku[8][8] 
        << endl
        << endl;


   return;

}

/******************************************
* function to show all possible values
*******************************************/
void getcoordinates(int &r, int &c, string &cord)
{
   cout << "What are the coordinates of the square: ";
   cin >> cord;
    
   cord[0] = toupper(cord[0]);
   cord[1];

   c = (int)cord[0] - 65;
   r = (int)cord[1] - 49;

   return;

}

/**************************************
* function to show possible values
***************************************/
void frompossible(char sudoku[][9])
{
   int count = 0;
   string cord;
   int r = 0;
   int c = 0;

   getcoordinates(r,c,cord);

   int possible[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

   getpossible(possible, sudoku, r, c);

   cout << "The possible values for '" << cord << "' are: ";
        
   for (int i = 0; i < 9; i++)
   {
      if (possible[i] != 0)
      {
         if (count == 0)
            cout << possible[i];
         else 
            cout << ", " << possible[i];

         count++;
      }
   }
   cout << endl << endl;
}

/***************************************************************
* calculates possible outcomes
****************************************************************/ 
void getpossible(int possible[],char sudoku[][9], int &r, int &c)
{

   int left = c / 3 * 3;
   int right = left + 2;
   int top = r / 3 * 3;
   int bottom = top + 2;

   for (int i = 0; i < 9; i++)
   {
      if (sudoku[r][i] != ' ')
      {
         possible[sudoku[r][i] - 49] = 0;
      }
   }
   for (int j = 0; j < 9; j++)
   {
      if (sudoku[j][c] != ' ')
      {
         possible[sudoku[j][c] - 49] = 0;
      }
   }

   for (int i = top; i <= bottom; i++)
   {
      for (int j = left; j <= right; j++)
      {
         if (sudoku[i][j] != ' ')
         {
            possible[sudoku[i][j] - 49] = 0;
         }
      }
   }
   return;
}

/***********************************
 * Edit coordinates
 ***********************************/
int editcoordinates(char sudoku[][9])
{
   int num;
   string cord;
   char value;
   int r = 0;
   int c = 0;

   getcoordinates(r,c,cord);

   int possible[9] = {1,2,3,4,5,6,7,8,9};

   getpossible(possible, sudoku, r, c);

   if ((r < 0 || r > 8) || (c < 0 || c > 8))
   {
      cout << "ERROR: Square '" << cord << "' is filled\n\n";
      return 0;
   }

   if (sudoku[r][c] != ' ')
   {
      cout << "ERROR: Square '" << cord << "' is filled\n\n";
      return 0;
   }
   
   cout << "What is the value at '" << cord << "': ";
   cin >> num;

   if (num < 1 || num > 9)
   {
      cout << "ERROR: Value '" << num << "' in square '" 
         << cord << "' is invalid\n" << endl;
      return 0;
   }
   bool temp = true;
   for (int i = 0; i < 9; i++)
   {
      if (num == possible[i])
      {     
         temp = false;
      }
   }
   if (temp)
   {
      cout << "ERROR: Value '" << num << "' in square '" 
         << cord << "' is invalid\n" << endl;
      return 0;
   }  

   value = (char)num + 48;
   sudoku[r][c] = value;
   
   cout << endl;

   return 0;

}

/******************************
 * save function
 *****************************/
int Writefile(char sudoku[][9])
{
   char secondfile[256];
   cout << "What file would you like to write your board to: ";
   cin >> secondfile;

   ofstream fout;
   
   fout.open(secondfile);

   for (int x = 0; sudoku[x][0]; x++)
   {
      for (int y = 0; sudoku[x][y]; y++)
      {  
         if (sudoku[x][y] == ' ')
         {
            sudoku[x][y] = '0';
         } 
         fout << sudoku[x][y];
         if (y == 9)
            fout << endl;
      }
   }
   if (fout.fail())
   {
      cout << "Written unsuccessfully";
      return 0;
   }

   fout.close();
   cout << "Board written successfully\n";

   return 0;
}

/******************************************
 * command function
 ******************************************/
bool command(char factor, char sudoku[][9])
{
   
   do
   {
      cout << "> ";
      cin >> factor;
      switch (factor)
      {
         case '?':
            cout << "Options:\n"
                 << "   ?  Show these instructions\n"
                 << "   D  Display the board\n"
                 << "   E  Edit one square\n"
                 << "   S  Show the possible values for a square\n"
                 << "   Q  Save and Quit\n"
                 << "\n"
                 << endl;
            break;
         case 'd':
         case 'D':
            display(sudoku);          
            break;
         case 'e':
         case 'E':
            editcoordinates(sudoku);     
            break;
         case 's':
         case 'S':
            frompossible(sudoku);
            break;
         case 'q':
         case 'Q':
            Writefile(sudoku);
            break;
      }
   } while (factor != 'q' && factor != 'Q');
   
   return true;
}

/********************
 * Main Function 
 ********************/
int main()
{
   char factor;
   char filename[256];
   char sudoku[9][9];
   GetFilename(filename);
   cout << "Options:\n"
         << "   ?  Show these instructions\n"
         << "   D  Display the board\n"
         << "   E  Edit one square\n"
         << "   S  Show the possible values for a square\n"
         << "   Q  Save and Quit\n"
         << "\n";
   Readfile(filename, sudoku);
   display(sudoku);
   command(factor, sudoku);

   return 0;
}
