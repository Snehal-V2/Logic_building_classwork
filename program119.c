//problems on n numbers-Array

#include<stdio.h>

// the loop condition here < 4 is fixed which is only work on 4 elements
//  even array  is greater than 4 element
void Display(int Arr[])
{
    int iCnt =0;
    for (iCnt =0; iCnt< 7; iCnt++) 
    {
        printf("%d\n",Arr[iCnt]); 
    }
}




int main()
{

    int Brr[]={10,20,30,40,50,60,70}; //changed size of the array
    
    Display(Brr);

    return 0;
}