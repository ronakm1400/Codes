/*
	Accept N numbers from user and returns the frequency of even numbers.
*/

import java.util.Scanner;

class ArrayX
{

	private int iArr[];
	
	public Array(int iSize)
	{
		iArr = new int[iSize];
	}
	
	public void accept_display()
	{
		int iCnt = 0;
		
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("\nEnter elements : ");
		for(iCnt = 0; iCnt < iArr.length; iCnt++)
		{
			iArr[iCnt] = sObj.nextInt();
		}
	
		System.out.println("\nElements stored in array are : ");
		for(iCnt = 0; iCnt < iArr.length; iCnt++)
		{
			System.out.print(iArr[iCnt]+"\t");
		}
		System.out.println();
		
		sObj.close();
	}	
	
	public int freqOfEvenElements()
	{	
		int iCnt = 0,iCount = 0;
		
		for(iCnt = 0; iCnt < iArr.length; iCnt++)
		{
			if(((iArr[iCnt]) % 2) == 0)
			{
				iCount++;
			}
		}
		return iCount;
	}
	
}

class Program13
{
	public static void main(java.lang.String Arg[])
	{
		int iValue = 0;
		
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number of elements you want to store in array : ");
		iValue = sObj.nextInt();
		
		ArrayX aObj = new ArrayX(iValue);
		
		aObj.accept_display();
		System.out.println("\nCount of even elements stored in array is : "+aObj.freqOfEvenElements());
		
		sObj.close();
			
	}
}
