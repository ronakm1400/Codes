/*
	Accept N numbers from user and returns the frequency of even numbers.
*/

using System;

class ArrayX
{
	private int[] iArr;
	
	public ArrayX(int iSize)
	{
		iArr = new int[iSize];
	}
	
	public void accept_display()
	{	
		int iCnt = 0;
		
		Console.WriteLine("Enter array elements : ");
		
		for(iCnt = 0; iCnt < iArr.Length; iCnt++)
		{
			iArr[iCnt] = Convert.ToInt32(Console.ReadLine());
		}
		
		Console.WriteLine("Elements stored in array are : ");
		
		for(iCnt = 0; iCnt < iArr.Length; iCnt++)
		{
			Console.Write(iArr[iCnt]+"\t");
		}
		Console.WriteLine();
	}
	
	public int freqOfEvenElements()
	{
		int iCnt = 0,iCount = 0;
		
		for(iCnt = 0;iCnt < iArr.Length; iCnt++)
		{
			if(((iArr[iCnt])%2) == 0)
			{
				iCount++;
			}	
		}
		
		return iCount;
	}

}

class EntryPointMain
{

	static int Main()
	{
		int iValue = 0;

		Console.WriteLine("Enter number of elements you want to store in array : ");
		iValue = Convert.ToInt32(Console.ReadLine());
		
		ArrayX aObj = new ArrayX(iValue);
		
		aObj.accept_display();
		Console.WriteLine("Count of even elements stored in array is : "+aObj.freqOfEvenElements());			
		
		return 0;
	}
}
