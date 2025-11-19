//problems on n numbers-Array
// 
#include<stdio.h>

void Display(int *ptr)
{
    int iCnt =0;
    for (iCnt =0; iCnt<4; iCnt++)
    {
        printf("%d\n",*ptr); //logic is incorrect  first value of the array will be printed pointer is not moving
   
    }

}


int main()
{

    int Arr[]={10,20,30,40};
    
    Display(Arr);

    return 0;
}