///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept N numbers from user and return the largest number.
//	
//	Input		  :	N-6
//				Elements: 85	66	3	66	93	88
//
//	Output		  : 93
//	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

using System;

class ArrayX
{

	public int[] iArr;
	
	ArrayX(int iSize)
	{
		iArr  = new int[iSize];
	}		
	
	public void acceptDisplayElements()
	{
		int iCnt = 0;
		
		Console.WriteLine("Enter elements : ");
		
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

	public int findLargestElement()
	{
		int iCnt = 0;
		int iLarge = 0;
		
		for(iCnt = 0; iCnt < iArr.Length; iCnt++)
		{
			iLarge = iArr[0];
			
			if(iArr[iCnt] > iLarge)
			{
				iLarge = this.iArr[iCnt];
			}
			
		}
				
		return iLarge;
	}
	

}

class EntryPointMain
{
	static int Main()
	{
		int iValue = 0,iRet = 0;
		
		Console.WriteLine("Enter number of elements you want to store in array : ");
		iValue = Convert.ToInt32(Console.ReadLine());	
		
		ArrayX aObj = new ArrayX(iValue);
		
		aObj.acceptDisplayElements();
		
		iRet = aObj.findLargestElement();
		Console.WriteLine("Largest element from array is : "+iRet);
		
		return 0;
	}
}
