////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//	Write a program which accepts N numbers from user and accept one another number as NO and return index of 
//	first occurence of that NO.

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
	
	public int searchFirstOccurence(int iNum)
	{
		int iCnt = 0,index = 0;
		
		for(iCnt = 0; iCnt < iArr.Length; iCnt++)
		{
			if(iNum == iArr[iCnt])
			{
				index = iCnt;
				break;
			}
		}	
		return index+1;
	}

}

class EntryPointMain
{

	static int Main()
	{
		int iValue = 0,iNo = 0;
	
		Console.WriteLine("Enter number of elements that you want to store in array : ");
		iValue = Convert.ToInt32(Console.ReadLine());
		
		ArrayX aObj = new ArrayX(iValue);
		
		aObj.acceptDisplay();
		
		Console.WriteLine("\nEnter number that you want to search first occurence : ");
		iNo = Convert.ToInt32(Console.ReadLine());
		
		Console.WriteLine("\n"+iNo+" first occured at "+aObj.searchFirstOccurence(iNo)+" position");
		
		return 0;
	}

}
