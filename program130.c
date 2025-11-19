//problems on n numbers-Array-Using malloc-Count ODD

#include<stdio.h>
#include<stdlib.h>

int CountOdd(int Arr[],int iSize)
{
    int iCnt =0,iCount = 0;
    for (iCnt =0; iCnt < iSize; iCnt++) 
    {
       if(Arr[iCnt]%2 != 0)
       {
         iCount++;
       }
    }
    return iCount;
}


int main()
{

    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0, iRet = 0;

    printf("Enter the number of elements:\n");
    scanf("%d", &iLength);

    
    ptr = (int*)malloc(iLength * sizeof(int));
   
    if(NULL == ptr)  //industrial way of coding for this pointer 
        {
            printf("Unable to allocate memory");
            return -1;
        }

    printf("Enter the element:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
        {
            scanf("%d",&ptr[iCnt]);
        }
   
    iRet =CountOdd(ptr, iLength);

    printf("The number of odd elements are: %d",iRet);

    free(ptr);

    return 0;
}