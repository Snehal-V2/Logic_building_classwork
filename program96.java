
//Q-Problems on N numbers Array-

class ArrayX

{
    public void Display(int Brr[])
    {
        int i=0;
        for(i=0; i< Brr.length; i++)
        {
            System.out.println(Brr[i]);
        }
    }
}


class program96
{
    public static void main(String A[])
    {
        int Arr[] = new int[4];         //Dynamic Memorey allocation.

        Arr[0]=10;
        Arr[1]=20;
        Arr[2]=30;
        Arr[3]=40;
        ArrayX aobj = new ArrayX();
        aobj.Display(Arr);

             
    }
}