#include <stdio.h>
#include<stdbool.h>


bool CheckPrime(iNo)
{
  int iCnt=0;
  bool bFlag= false;   //initialisation of bool should be false not true
  
  if(iNo<0)
  {
    iNo=-iNo;
  }

  bFlag =true;   //little modification

  for (iCnt=2; iCnt<=(iNo/2); iCnt++)
  {
   if(iNo % iCnt == 0)
   {
      bFlag=false; 
      break;             //Optimizatioin loop stops at first factor. break applies to loop only(for) not if(condition)
   }
  }
  return bFlag;
}

// Time complexity is either O(N/2) for prime number,
// 1 for even and 2 for odd numebrs,complexity is how much times the 'for' loop iterates.


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



