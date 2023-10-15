/*
	Write a program which accept number from user and return summation of all its non factors.
*/

import java.util.Scanner;

class Numbers
{
	private int iNum;
	
	public Numbers(int iVal)
	{
		iNum = iVal;
	}
	
	public int summationOfNonFactors()
	{
		int iCnt = 0,iSum = 0;
		
		for(iCnt = 1; iCnt < iNum; iCnt++)
		{
			if((iNum % iCnt) != 0)
			{
				iSum = iSum + iCnt;
			}
		}
		return iSum;
	}
	

}

class Program5
{
	public static void main(java.lang.String[] Arg)
	{	
		int iNo = 0;
		
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number : ");
		iNo = sObj.nextInt();
			
		Numbers nObj = new Numbers(iNo);
		
		System.out.println("Summation of all non-factors of "+iNo+" is : "+nObj.summationOfNonFactors());
		
		sObj.close();			
	} 

}
