////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//	Write a program which accepts N numbers from user and accept one another number as NO and returns the
//	index of last occurence of that NO.

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
		Scanner sObj = new Scanner(System.in);
		
		int iCnt = 0;
		
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
		
	}
	
	public int searchLastOccurence(int iNum)
	{
		int iCnt = 0,iIndex = -1;
		
		for(iCnt = 0; iCnt < iArr.length; iCnt++)
		{
			if(iNum == iArr[iCnt])
			{
				iIndex = iCnt;
			}
		}
		return iIndex+1;
	}
	
}

class Program16
{

	public static void main(java.lang.String Arg[])
	{
		int iValue = 0,iNo = 0,iRet = 0;
		
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number of elements you want to store in array : ");
		iValue = sObj.nextInt();
		
		ArrayX aObj = new ArrayX(iValue);
		
		aObj.acceptDisplay();		
		
		System.out.println("\nEnter number that you want to search last occurence : ");
		iNo = sObj.nextInt();
		
		iRet = aObj.searchLastOccurence(iNo);
		System.out.println("\n"+iNo+" last occured at "+iRet+" position\n");			
			
		sObj.close();
	}
}
