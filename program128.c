//problems on n numbers-Array-Using malloc-Summation

#include<stdio.h>
#include<stdlib.h>

int Summation(int Arr[],int iSize)
{
    int iCnt =0,iSum = 0;
    for (iCnt =0; iCnt < iSize; iCnt++) 
    {
        iSum = iSum +Arr[iCnt];
    }
    return iSum;
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
   
    iRet =Summation(ptr, iLength);

    printf("The sum of the elements: %d",iRet);

    free(ptr);

    return 0;
}