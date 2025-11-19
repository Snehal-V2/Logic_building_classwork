//problems on n numbers-Array

#include<stdio.h>


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

    int Brr[]={10,20,30,40}; //changed size of the array
    
    Display(Brr);

    return 0;
}