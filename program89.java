//Q-Problems of Digits-
// display the digits in reverese order

import java.util.*;

class Digit
{
    public int DisplayDigits(int iNo)
    {
        int iDigit  = 0;
        while(iNo !=0)
        {
            iDigit = iNo%10
            System.out.println(iDigit);
            iNo = iNo/10 ;
    }
}




class program89
{
    public static void main(String A[])
    {
        int iValue = 0;
    
       
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number:");
        iValue = sobj.nextInt();
        
        Digit dobj = new Digit(iValue);
        dobj.DisplayDigits(iValue);

        System.out.println("The digits are "+lRet);
       
        // important to write,below syntax to call garbage collector for resource deallocation.
        sobj = null;
        dobj = null;

        System.gc();

             
    }
}