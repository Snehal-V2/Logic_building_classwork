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

        for(i =1; i <= iNo; i++)
        {
            lFact = lFact * i;
        }
    return lFact;
       
    }       

} // End of Number Class

class program87
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