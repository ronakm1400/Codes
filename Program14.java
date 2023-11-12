/*
	Write a program which accepts N numbers from user and accept one another number as NO and return index of 
	first occurence of that NO.
*/

import java.util.Scanner;

class ArrayX
{

	private int iArr[];
	
	public ArrayX(int iSize)
	{
		iArr = new int[iSize];
	}
	
	public void accept_display()
	{
		int iCnt = 0,iNum = 0;
		
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
		
		System.out.println("\nEnter number that you want to search first occurence : ");
		iNum = sObj.nextInt();
	
		sObj.close();
	}	
	
	public int searchFirstOccurence(int iNo)
	{	
		int iCnt = 0;
		boolean bFlag = false;
		
		for(iCnt = 0; iCnt < iArr.length; iCnt++)
		{
			if(iNo == iArr[iCnt])
			{
				bFlag = true;
				break;
			}
		}
		if(bFlag == true)
		{
			return iCnt+1;
		}
		else 
		{
			return -1;
		}
	}
	
}

class Program14
{
	public static void main(java.lang.String Arg[])
	{
		int iValue = 0,iNum = 0,iRet = 0;
		
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number of elements you want to store in array : ");
		iValue = sObj.nextInt();
		
		ArrayX aObj = new ArrayX(iValue);
		
		aObj.accept_display();
			
		iRet = aObj.searchFirstOccurence(iNum);
		System.out.println("\n"+iNum+" first occured at "+iRet+" index");	
		
		sObj.close();
			
	}
}
