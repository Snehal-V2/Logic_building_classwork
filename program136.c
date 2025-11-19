// accept n numbers and  accept one another number to check whether frequency of number 

#include<stdio.h>
#include<stdlib.h>

int FrequencyCalculate(int Arr[],int iSize,int iNo)
{
    int iCnt =0,iCount = 0;
    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    } return iCount;
}





typedef int * IPTR; // replace (int *) with IPTR

int main()
{
    int iLenght = 0, iCnt = 0,iValue = 0,iRet = 0; //auto storage class -refer 
    IPTR iPtr = NULL;

    printf("Enter the number of element:\n");
    scanf("%d",&iLenght);

// Step-I allocate the memory
    iPtr = (IPTR) malloc (iLenght * sizeof(int)); 
    
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memory");
        return -1;
    }
   

    printf("Enter the values :\n");
    
    for(iCnt = 0; iCnt< iLenght; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);

    }
     
    printf("Enter the number whoes frequency needs to be calculate:\n");
    scanf("%d",&iValue);

    // Step -II use the memory
    //call to the function. which contains business logic
    // Fun(iPtr,iLenght); example function 

    iRet = FrequencyCalculate(iPtr,iLenght,iValue);
    printf("The frequency of %d is : %d\n",iValue,iRet);

    //Step III free the memory

    free(iPtr);

    return 0;
}