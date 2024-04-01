/*********************************************************
* Program:     
*    Test 1, practice12
*    Brother Birch, CS124
* Author:
*    Jared Thomasson
* Summary: 
*    programs tells user if they passed the test or not.
*************************************************/

#include <iostream>
using namespace std;

int main()
{
   int iUp = 0; //1
   int iDown = 10; //2

   while (iUp < iDown)
   {
      cout << iUp << '\t' 
           << iDown << endl;
      iUp++;
      iDown--;
   }
   return 0;
}
