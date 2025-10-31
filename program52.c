#include <stdio.h>
int CountNonFactors(iNo)
{
  int iCnt=0, iFrequency = 0;
  
  if(iNo<0)
  {
    iNo=-iNo;
  }

  for (iCnt=1; iCnt< iNo; iCnt++)
  {
   if(iNo % iCnt != 0)
   {
      iFrequency++;
   }
  }
  return iFrequency;
}



// Time complexity O(N/2)
int main()
{
  int iValue = 0 ,iRet = 0;

  printf("Enter the number:\n");
  scanf("%d",&iValue);
  
  iRet = CountNonFactors(iValue);

  printf("Number of Non Factors are: %d\n",iRet);

  return 0;
}
