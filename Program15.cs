////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//	Write a program which accepts N numbers from user and returns the difference between summation of even 
//	elements and summation of odd elements.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
using System;

class ArrayX
{

	private int[] iArr;
	
	public ArrayX(int iSize)
	{
		iArr = new int[iSize];
	}
	
	public void acceptDisplay()
	{
		int iCnt = 0;
		
		Console.WriteLine("\nEnter elements : ");
		for(iCnt = 0; iCnt < iArr.Length; iCnt++)
		{
			iArr[iCnt] = Convert.ToInt32(Console.ReadLine());
		}
		
		Console.WriteLine("\nElements stored in array are : ");
		for(iCnt = 0; iCnt < iArr.Length; iCnt++)
		{
			Console.Write(iArr[iCnt]+"\t");
		}
		Console.WriteLine();	
	}
	
	public int diffSumEvenOdd()
	{	
		int iCnt = 0,iSumEven = 0,iSumOdd = 0;
		
		for(iCnt = 0; iCnt < iArr.Length; iCnt++)
		{
			if((iArr[iCnt] % 2) == 0)
			{
				iSumEven = iSumEven + iArr[iCnt];
			}
			else
			{
				iSumOdd  = iSumOdd  + iArr[iCnt];
			}
		}		
		return iSumEven-iSumOdd;
	}

}

class EntryPointMain
{

	static int Main()
	{
		int iLength = 0,iRet = 0;
		
		Console.WriteLine("Enter number of elements you want to store in array : ");
		iLength = Convert.ToInt32(Console.ReadLine());
		
		ArrayX aObj = new ArrayX(iLength);
		
		aObj.acceptDisplay();
		iRet = aObj.diffSumEvenOdd();
		Console.WriteLine("\nDifference between summation of even and odd elements is : "+iRet);
			
		return 0;
	}
}
