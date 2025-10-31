#include <stdio.h>

void DisplayDigits (int iNo)
{

    int iDigit= 0;
    printf("--------------------------------------------\n");
    printf("The given value of iNo is:%d\n",iNo);
    
    while(iNo !=0)
    {
        printf("--------------------------------------------\n");
        iDigit = iNo % 10 ;
        printf("iDigit is:%d\n",iDigit);
        iNo = iNo/10;
        printf("The iNo is:%d\n",iNo);
    }
    
}


int main()
{
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);


    DisplayDigits(iValue);

    printf("--------------------------------------------\n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    return 0;
}