//Q-Calculate Factorials
//  input 5 output should be 5*4*3*2*1 = 120

import java.util.*;

class Number
{
    public long CalculateFactorial (int iNo)
    { 
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        int i = 0;
        long lFact = 1; // important for output giving  multiplication of factors for greater numbers
        i = 1; // step 1
        while (i <= iNo)        // step II Changed -for to while remember the steps to convert 
        {
            lFact = lFact * i;
            i++; // step -III
        }
    return lFact;
       
    }       

} // End of Number Class

class program88
{
    
    public static void main(String A[])
    {
        int iValue = 0;
        long lRet=0;
       
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number:");
        iValue = sobj.nextInt();
        
        Number nobj = new Number();
        lRet = nobj.CalculateFactorial(iValue);

        System.out.println("The Factorial is "+lRet);
       
        // important to write,below syntax to call garbage collector for resource deallocation.
        sobj = null;
        nobj = null;

        System.gc();

             
    }
}