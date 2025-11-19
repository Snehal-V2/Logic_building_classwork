//Q-Calculate Factorials input 5 output should be 5*4*3*2*1 = 120

import java.util.*;

class Number
{
    public int CalculateFactorial (int iNo)
    { 
        if(iNo < 0)
        {
            iNo = -iNo;
        }

        int i = 0;
        int iFact = 1;
        for(i =1; i <= iNo; i++)
        {
            iFact = iFact * i;
        }
    return iFact;
       
    }       

} // End of Number Class

class program86
{
    
    public static void main(String A[])
    {
        int iValue = 0,iRet=0;
       
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number:");
        iValue = sobj.nextInt();
        
        Number nobj = new Number();
        iRet = nobj.CalculateFactorial(iValue);

        System.out.println("The Factorial is "+iRet);
       
        // important to write,below syntax to call garbage collector for resource deallocation.
        sobj = null;
        nobj = null;

        System.gc();

             
    }
}