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

import java.util.Scanner;

class ArrayX
{
	private int iArr[];
	
	ArrayX(int iSize)
	{
		iArr  = new int[iSize];
	}
	
	public void acceptElements()
	{
		int iCnt = 0;
	
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("\nEnter elements : ");
		
		for(iCnt = 0; iCnt < iArr.length; iCnt++)
		{
			iArr[iCnt] = sObj.nextInt();
		}
		
		sObj.close();
	}
	
	public void displayElements()
	{
		int iCnt = 0;
		
		System.out.println("\nElements stored in array are : ");
		
		for(iCnt = 0; iCnt < iArr.length; iCnt++)
		{
			System.out.print(iArr[iCnt]+"\t");
		}
		
		System.out.println();
	}
	
	public int findLargestElement()
	{
		int iCnt = 0,iLarge = 0;
		
		for(iCnt = 0; iCnt < iArr.length; iCnt++)
		{
			iLarge = iArr[0];
			
			if(iArr[iCnt] > iLarge)
			{
				iLarge = iArr[iCnt];
			}
		}	
		
		return iLarge;
	}

}

class Program17
{

	public static void main(java.lang.String Arg[])
	{
		int iLength = 0,iRet = 0;
		
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number of elements that you want to store in array : ");
		iLength = sObj.nextInt();
		
		ArrayX aObj = new ArrayX(iLength);
		
		aObj.acceptElements();
		aObj.displayElements();
		
		iRet = aObj.findLargestElement();
		System.out.println("\nLargest element from array is : "+iRet);
		
		sObj.close();			
	}

}
