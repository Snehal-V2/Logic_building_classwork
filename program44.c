// input :  12  2   output  : true 
// input :  12  3  output  : true 
// input :  12  5   output  : false
// input :  12  2   output  : true 
// input :  12  7   output  : false

#include <stdio.h>
#include<stdbool.h>

bool CheckDivisible(int iNo1, int iNo2)
{
  if(iNo1 % iNo2 == 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}



// Time complexity O(N)
int main()
{
  int iValue1 = 0 , iValue2= 0;
  bool bRet = false;

  printf("Enter First Number:\n");
  scanf("%d", &iValue1);

  printf("Enter Second Number:\n");
  scanf("%d", &iValue2);

  bRet = CheckDivisible(iValue1,iValue2);
  
  if(bRet == true)
  {
    printf("It is completely divisible\n");

  }
  else
  {
    printf("Its is not divisible");
  }
    
  
    return 0;
}
