//problems on n numbers-Array

#include<stdio.h>

void Display(int Arr[])
{
    int iCnt =0;
    for (iCnt =0; iCnt<4; iCnt++) 
    {
        printf("%d\n",Arr[iCnt]);  //another way to get values from array check pointer arithmatic concept
    }
}




int main()
{

    int Brr[]={10,20,30,40};
    
    Display(Brr);

    return 0;
}