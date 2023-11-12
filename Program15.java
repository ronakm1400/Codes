////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//	Write a program which accepts N numbers from user and returns the difference between summation of even 
//	elements and summation of odd elements.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

import java.util.Scanner;

class ArrayX
{
	
	private int iArr[];
	
	public ArrayX(int iSize)
	{
		iArr = new int[iSize];
	}
	
	public void acceptDisplay()
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
	
	public int diffSumEvenOdd()
	{
		int iCnt = 0,iSumEven = 0,iSumOdd = 0;
		
		for(iCnt = 0; iCnt < iArr.length; iCnt++)
		{
			if((iArr[iCnt] % 2) == 0)
			{
				iSumEven = iSumEven + iArr[iCnt];
			}
			else
			{
				iSumOdd = iSumOdd + iArr[iCnt];
			}
		}
		return iSumEven - iSumOdd;
	}

}

class Program15
{
	public static void main(java.lang.String Arg[])
	{
		int iValue = 0,iRet = 0;
	
		Scanner sObj = new Scanner(System.in);
	
		System.out.println("Enter number of elements you want to store in array : ");
		iValue = sObj.nextInt();
		
		ArrayX aObj = new ArrayX(iValue);
		
		aObj.acceptDisplay();
		
		iRet = aObj.diffSumEvenOdd();
		System.out.println("\nDifference between summation of even and odd elements is : "+iRet);
		
		sObj.close();		
	}
}
