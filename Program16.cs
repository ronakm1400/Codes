////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//	Write a program which accepts N numbers from user and accept one another number as NO and returns the
//	index of last occurence of that NO.

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
	
	public int searchLastOccurence(int iNum)
	{
		int iCnt = 0,iIndex = -1;
		
		for(iCnt = 0; iCnt < iArr.Length; iCnt++)
		{
			if(iNum == iArr[iCnt])
			{
				iIndex = iCnt;
			}
		}
		return iIndex+1;
	}
	
}

class EntryPointMain
{

	static int Main()
	{
		int iValue = 0,iNo = 0,iRet = 0;
		
		Console.WriteLine("Enter number of elements you want to store in array : ");
		iValue = Convert.ToInt32(Console.ReadLine());
		
		ArrayX aObj = new ArrayX(iValue);
		
		aObj.acceptDisplay();
		
		Console.WriteLine("\nEnter number that you want to search last occurence : ");
		iNo = Convert.ToInt32(Console.ReadLine());
		
		iRet = aObj.searchLastOccurence(iNo);
		Console.WriteLine("\n"+iNo+" last occured at "+iRet+" position\n");
	
		return 0;
	}
}
