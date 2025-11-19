// accept n numbers and  accept one another number to check whether that number is there or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// order of N O(N)
bool LinearSearch(int Arr[],int iSize,int iNo)
{
    int iCnt =0,iCount = 0;
    for(iCnt = 0; iCnt< iSize; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iCount++;
        }
    } 
    
        if(iCount>0)
        {
           return true;
        }
        else
        {
            return false;
        }
} 


typedef int * IPTR; // replace (int *) with IPTR

int main()
{
    int iLenght = 0, iCnt = 0,iValue = 0; //auto storage class -refer 
    bool bRet = false;
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
     
    printf("Enter the number to Search:\n");
    scanf("%d",&iValue);

    // Step -II use the memory
    //call to the function. which contains business logic
    // Fun(iPtr,iLenght); example function 

    bRet = LinearSearch (iPtr,iLenght,iValue);

    if(bRet == true)
    {
        printf("%d is present in the data\n",iValue);
    }
    else
    {
        printf("%d is  not present in the data\n",iValue);
    }
    //Step III free the memory

    free(iPtr);

    return 0;
}