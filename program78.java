import java.util.*;

class Number
{
    public void DisplayFactors(int iNo)
    { 
        int i = 0;

        for(i = 1; i <= (iNo/2); i++)
            {
                if ((iNo %i)== 0)
                {
                 System.out.println(i);
                }
            }
    }    

} // End of Number Class

class program78
{
    // method can be written here above main or make seperate class 
    public static void main(String A[])
    {
        int iValue = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Number:");
        iValue = sobj.nextInt();
        
        Number nobj = new Number();
        nobj.DisplayFactors(iValue);
        // important to write,below syntax to call garbage collector for resource deallocation.
        sobj = null;
        nobj = null;

        System.gc();

             
    }
}