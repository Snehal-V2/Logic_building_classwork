//Q-Problems of Digits-
// display the digits in reverese order

import java.util.*;

class Digit
{
    public int SumDigits(int iNo)
    {
        int iDigit  = 0;
        int iSum = 0;
        while(iNo !=0)
        {
            iDigit = iNo%10;
            iSum = iSum + iDigit;
            iNo = iNo/10 ;
        }
        return iSum;
    }
}




class program90
{
    public static void main(String A[])
    {
        int iValue = 0,iRet = 0;

       
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number:");
        iValue = sobj.nextInt();
        
        Digit dobj = new Digit();

        iRet = dobj.SumDigits(iValue);

        System.out.println("The digits are "+iRet);
       
        // important to write,below syntax to call garbage collector for resource deallocation.
        sobj = null;
        dobj = null;

        System.gc();

             
    }
}