
/*
  Algorithm
  START
        Accept number and store as input no1
        Divide no by 2
        if the remainder is zero
            then display as even
        otherwise 
            diplay as odd
   
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
//  Function Name : CheckEvenOdd
//  Description :   It is used to check odd and even number
//  Input :         Float,Float
//  Output :        Flost
//  Author :        Snehal S Shinde 
//  Date :          09/10/2025
//
///////////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int iNo)
{
    int iRem = 0;
    iRem = iNo%2;

    if(iRem == 0)
    {
        printf("It is even number..\n");
    }
    else
    {
        printf("It is odd numbe..\n");
    }

}




int main()
{

    int iValue = 0;
    printf("Enter number:");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);


    return 0;
}