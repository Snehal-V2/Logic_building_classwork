//problems on n numbers-Array-Using malloc-take n numbers perform average

#include<stdio.h>
#include<stdlib.h>

float CountAvg(int Arr[],int iSize)
{
    int iCnt =0, iSum=0;

    for (iCnt =0; iCnt < iSize; iCnt++) 
    {
       iSum = iSum+Arr[iCnt];
      
    }
    return ((float)iSum/(float)iSize);
}


int main()
{

    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    float fRet = 0.0f;

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
   
    fRet =CountAvg(ptr, iLength);

    printf("The average is : %f",fRet);

    free(ptr);

    return 0;
}