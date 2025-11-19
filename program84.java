//Q- Check perfect number- Addition of Factors is the number itself

import java.util.*;

class Number
{
    public boolean  CheckPerfect (int iNo)
    { 
        if(iNo < 0)
        {
            iNo = -iNo;
        }
        int i = 0;
        int iSum = 0;
                                // condition clubbed here from program83 with &&  
        for(i = 1; (i <= (iNo/2)) && (iSum < iNo); i++)
            {
                if ((iNo %i)== 0)
                {
                 iSum = iSum +i;
                }
                
            }
        return (iSum == iNo); 
    }       
ß
} // End of Number Class

class program84
{
    
    public static void main(String A[])
    {
        int iValue = 0;
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number:");
        iValue = sobj.nextInt();
        
        Number nobj = new Number();
        bRet = nobj.CheckPerfect(iValue);

        if(bRet == true)
        {
            System.out.println (iValue +" is perfect number");
        }
        else
        {
            {
            System.out.println (iValue+" is not a perfect number");
            }
        }

        // important to write,below syntax to call garbage collector for resource deallocation.
        sobj = null;
        nobj = null;

        System.gc();

             
    }
}