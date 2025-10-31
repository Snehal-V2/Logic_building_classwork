
#include <stdio.h>


void Displayfactors(iNo)
{
  int iCnt = 0;
  if (iNo < 0)
  {
    iNo = -iNo;
  }
  for(iCnt=1; iCnt< iNo; iCnt++)
  {
    if(iNo% iCnt ==0)
    {
      printf("%d\n",iCnt);
    }
  
  }
}



// Time complexity O(N)
int main()
{
  int iValue = 0;
  

  printf("Enter Number:\n");
  scanf("%d", &iValue);
  
  Displayfactors(iValue);

  return 0;
}
