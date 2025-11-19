//Q-Problems on N numbers Array-

import java.util.*;

class ArrayX

{
    public void Display(int Brr[])      //Helper Function we can remove it 
    {
        int i=0;
        System.out.println("Elements of the array are:");

        for(i=0; i< Brr.length; i++)
        {
            System.out.println(Brr[i]);
        }
    }
    public int CountEven(int Brr[])
    {
        int i = 0, iCount = 0;
        for(i=0; i< Brr.length; i++)
        {
            if(Brr[i]%2 == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }
    public int Summation(int Brr[])
    {
        int i = 0, iSum = 0;
        for(i=0; i< Brr.length; i++)
        {
            
            iSum= iSum +Brr[i];
            
        }
        return iSum;

    }
}


class program101
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iSize = 0, i = 0,iRet = 0,iRet2=0;
       
        System.out.println("Enter the Size of an array");
        iSize =sobj.nextInt();

        int Arr[] = new int[iSize];
        System.out.println("Enter the elements of an array:");
        
        for(i=0; i < Arr.length; i++)
        {
            Arr[i] = sobj.nextInt();
        }

        ArrayX aobj = new ArrayX();
        aobj.Display(Arr);

        iRet = aobj.CountEven(Arr);
        System.out.println("Even element are :"+iRet);

        iRet2 = aobj.Summation(Arr);
        System.out.println("Sum of the element are :"+iRet2);

    // Important to deallocate the memory

        aobj = null;
        Arr = null;
        sobj = null;

        System.gc(); //request for garbage collector
             
    }
}