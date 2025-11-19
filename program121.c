//problems on n numbers-Array

#include<stdio.h>


void Display(int Arr[],int iSize)
{
    int iCnt =0;
    for (iCnt =0; iCnt < iSize; iCnt++) 
    {
        printf("%d\n",Arr[iCnt]); 
    }
}




int main()
{

    int Brr[]={10,20,30,40}; //changed size of the array
    
    Display(Brr,4); //(100,4)

    return 0;
}