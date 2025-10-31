#include <stdio.h>

//Dynamic Function

void Display(int iFrequency )
{
    int iCnt= 0;

    if(iFrequency <0)
    {
        printf("Invalid input\n");
        return;
    }

    for (iCnt= 1; iCnt<= iFrequency; iCnt++)
    {
        printf("Jay Ganesh.....\n");
    }
}

//Call by Value 

int main()
{   
    int iCnt = 0;
    printf("Enter the frequency:\n");
    scanf("%d", &iCnt);
    Display;
    return 0;

}