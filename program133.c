#include<stdio.h>
#include<stdlib.h>








int main()
{
    int iLenght = 0, iCnt = 0; //auto storage class -refer 
    int *iPtr = NULL;

    printf("Enter the number of element:\n");
    scanf("%d",&iLenght);

// Step-I allocate the memory
    iPtr = (int*) malloc (iLenght * sizeof(int)); 
    
    if(NULL == iPtr)
    {
        printf("Unable to allocate the memorey");
        return -1;
    }

    printf("Enter the values :\n");
    
    for(iCnt = 0; iCnt< iLenght; iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);

    }
    // Step -II use the memory
    //call to the function. which contains business logic
    // Fun(iPtr,iLenght); example function 

    //Step III free the memory

    free(iPtr);

    return 0;
}