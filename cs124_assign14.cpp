/***********************************************************************
* Program:
*    Assignment 14, Matthew 18:21-22
*    Brother Birch, CS124
* Author:
*    Jared Thomasson
* Summary: 
*    This program will address Peter's question to the Lord in 
*    Matthew 18:21-22
*
*    Estimated:  0.0 hrs   
*    Actual:     0.0 hrs
*      Please describe briefly what was the most difficult part
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
* You are not allowed to change MAIN in any way; just implement the two
* functions: questionPeter() and responseLord()
***********************************************************************/
void questionPeter()
{  
   // Peter's question
   cout << "Lord, how oft shall my brother sin against me, and I forgive him?\n";
   cout << "Till seven times?" << endl;
    return;
}
   int responseLord()
{
   cout.setf(ios::fixed); 
   cout.precision(0);
   //The Lord's reponse
   int LordResponse;
   LordResponse = 7 * 70;
   return LordResponse;
}
   int main()
{  
   
   // ask Peter's question
   questionPeter();
   
   
   // the first part of the Lord's response
   cout << "Jesus saith unto him, I say not unto thee, Until seven\n";
   cout << "times: but, Until " << responseLord() << ".\n";

   return 0;
}




