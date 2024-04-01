/*********************************************************
* Program:     
*    Test 1, UnitTest 1
*    Brother Birch, CS124
* Author:
*    Jared Thomasson
* Summary: 
*    Program to let user know if more studying is required
*    or if they are ready for the test.
*************************************************/

#include <iostream>
using namespace std;

/********************************
 * Prompt user for score.
 *******************************/
float UserScore()
{
   float score;

   cout << "What was your score on the practice final in percentage points? ";
   cin >> score;

   return score;
}

/***********************************
 * Function for being ready to test
 **********************************/
bool readytest(float score)
{
   if (score >= 85)
      cout << "\tYou are ready to take the test!\n";

   return 0;
}

/***********************************
 * Function for more studying
 **********************************/
bool morestudy(float score)
{
   if (score < 85)
      cout << "\tMore studying is required.\n";

   return 0;
}

/**********************************
 * Main Function
 *********************************/
int main()
{
   float score = UserScore();
   bool pass = readytest(score);
   bool failed = morestudy(score);

   return 0;
}