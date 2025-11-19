// accept n numbers and  and in place reverse it 

#include<stdio.h>
#include<stdlib.h>



typedef int * IPTR; // replace (int *) with IPTR

void ReverseDisplay(int Arr[],int iSize)
{

    int iCnt = 0;
    for(iCnt = (iSize-1) ; iCnt >= 0 ; iCnt--)
    {
        printf("%d\n",Arr[iCnt]);

    }
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
    
    ReverseDisplay(iPtr,iLenght);

    //Step III free the memory

    free(iPtr);

    return 0;
    
}