
/*
  Algorithm
  START
    Accept First number as no1
    Accept second number as no2
    if the input is negative then convert it into positive
    Perform Addition of no1 and no2
    Display the Addition on screen
  STOP
*/

///////////////////////////////////////////////////////////////////////////////
//
// Required Header file
//
///////////////////////////////////////////////////////////////////////////////


#include<stdio.h>


///////////////////////////////////////////////////////////////////////////////
//
//  Function Name : AdditionTwoNumbers
//  Description :   It is used to perform addition
//  Input :         Float,Float
//  Output :        Flost
//  Author :        Snehal S Shinde 
//  Date :          09/10/2025
//
///////////////////////////////////////////////////////////////////////////////


float AdditionTwoNumbers(
                            float fNo1,     //First Input
                            float fNo2      //First Input
                        )
{
  float fSum = 0.0f;                        //To store the result

  if(fNo1 < 0.0f)                           //Updater
    {
    fNo1 = -fNo1;
    }
   
    if(fNo2 < 0.0f)                                       //Updater
    {
    fNo2 = -fNo2;
    }

   fSum = fNo1 + fNo2;                                   //business logic
   return fSum;  
}   //  End od addition of two numbers

///////////////////////////////////////////////////////////////////////////////
//
//  Entry Point Function for the application.
//
///////////////////////////////////////////////////////////////////////////////

int main()
{   
    
    float fValue1 = 0.0f,fValue2 = 0.0f;                   // TO accept input from uses
    float fRet=0.0f;                                      // To store the result

    printf("Enter First Number\n");
    scanf("%f", &fValue1);

    printf("Enter Second Number\n");
    scanf("%f", &fValue2);

    fRet = AdditionTwoNumbers(fValue1,fValue2);          // Method call

    printf("Addition is : %f\n",fRet);
    return 0;
}   //  End of main

///////////////////////////////////////////////////////////////////////////////
//
// Testcases Successful handled by the application
//  Input1  : 10.5      Input2  : 3.2    Output  : 13.7
//  Input2  : -10.5     Input2  : 3.2    Output  : 13.7
//  Input3  : 10.5      Input2  : -3.2   Output  : 13.7
//  Input4  : -10.5     Input2  : -3.2   Output  : 13.7
//  Input5  : 10.5      Input2  : 0      Output  : 13.7
//    
//
//
///////////////////////////////////////////////////////////////////////////////
