// accept n numbers and  accept one another number ,find  MIn,

// < O(N)-flag used here

#include<stdio.h>
#include<stdlib.h>



typedef int * IPTR; // replace (int *) with IPTR

int Min(int Arr[],int iSize)
{
    int iCnt = 0,iMin = 0; // iMax= 0 is unable to handle negative values so 
    // it should be initialized with below first element of array-important
    
    
    for(iMin = Arr[0],iCnt =0; iCnt< iSize; iCnt++)
    {    if(Arr[iCnt] < iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}


int main()
{
    int iLenght = 0, iCnt = 0, iRet = 0;
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

    // Step -II use the memory
    
   iRet =  Min(iPtr,iLenght);
    printf("Smallest number is: %d\n",iRet);
    //Step III free the memory

    free(iPtr);

    return 0;
    
}