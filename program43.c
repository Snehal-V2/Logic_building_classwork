// input :  12  2   output  : true 
// input :  12  3  output  : true 
// input :  12  5   output  : false
// input :  12  2   output  : true 
// input :  12  7   output  : false

#include <stdio.h>
#include<stdbool.h>




// Time complexity O(N)
int main()
{
  int iValue1 = 0 , iValue2= 0;
  printf("Enter First Number:\n");
  scanf("%d", &iValue1);

  printf("Enter Second Number:\n");
  scanf("%d", &iValue2);

  if((iValue1 % iValue2) == 0)
  {
    printf("It is completely divisible\n");

  }
  else
  {
    printf("Its is not divisible");
  }
    
    return 0;
}
