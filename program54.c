#include <stdio.h>
#include<stdbool.h>


bool CheckPrime(iNo)
{
  int iCnt=0, iFrequency = 0;
  
  if(iNo<0)
  {
    iNo=-iNo;
  }

  for (iCnt=2; iCnt<=(iNo/2); iCnt++)
  {
   if(iNo % iCnt == 0)
   {
      iFrequency++;
   }
  }
  if (iFrequency==0)
  {
    return true;  //no Factors
  }

  else
 {
    return false;  //atleast one Factors
 }
}



// Time complexity O(N/2)
int main()
{
  int iValue = 0;
  bool bRet = false;
 

  printf("Enter the number:\n");
  scanf("%d",&iValue);
  
  bRet = CheckPrime(iValue);
  if(bRet == true)
  {
    printf("%d is prime number",iValue);
  }
  else
  {
      printf("%d is not prime number",iValue);
  }
  return 0;
}
