
//Iteration
#include <stdio.h>

int main()
{
    int iNo = 723614;
    int iDigit= 0;
    printf("--------------------------------------------\n");
    printf("The original value of iNo is:%d\n",iNo);
    
    while(iNo !=0)
    {
        printf("--------------------------------------------\n");
        iDigit = iNo % 10 ;
        printf("iDigit is:%d\n",iDigit);
        iNo = iNo/10;
        printf("The iNo is:%d\n",iNo);
    }
    
    printf("--------------------------------------------\n");
    printf("xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
    return 0;
}