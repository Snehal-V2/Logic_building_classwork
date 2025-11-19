//problems on n numbers-Array-Using malloc
//Segmentation fault here check wisely.
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iSize)
{
    int iCnt =0;
    for (iCnt =0; iCnt < iSize; iCnt++) 
    {
        printf("%d\n",Arr[iCnt]); 
    }
}


int main()
{

    int iLength = 0;
    int *ptr = NULL;
    int iCnt = 0;
    printf("Enter the number of elements:\n");
    scanf("%d", &iLength);

    
    ptr = (int*)malloc(iLength * sizeof(int));
   //major issue if onlu single = is used ,it will make pointer to null and below that program stops 
   //  segmentation fault

   if(ptr = NULL) 
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the element:\n");

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    Display(ptr, iLength);

    free(ptr);

    return 0;
}