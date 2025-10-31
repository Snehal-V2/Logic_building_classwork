#include <stdio.h>

//Dynamic Function

void Display(int iFrequency )
{
    int iCount= 0;
    for (iCount= 1; iCount<=iFrequency; iCount++)
    {
        printf("Jay Ganesh.....\n");
    }
}

//Call by Value 

int main()
{   
    int iCount = 0;
    printf("Enter the frequency:\n");
    scanf("%d", &iCount);

    Display();
    return 0;

}