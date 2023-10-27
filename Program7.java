/*
	Write a program to find factorial of given number.
*/

import java.util.Scanner;

class Numbers
{

	private int iNum;
	
	public Numbers(int iValue)
	{
		iNum = iValue;
	}
	
	public int factorial()
	{
		int iCnt = 0,iFact = 1;
		
		if(iNum < 0)
		{
			iNum = -iNum;
		}
		
		for(iCnt = 1; iCnt <= iNum; iCnt++)
		{
			iFact = iFact * iCnt;
		}
		return iFact;
	
	}
	
}

class Program7
{

	public static void main(java.lang.String[] Arg)
	{	
		int iNo = 0;
	
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter Number : ");
		iNo = sObj.nextInt();
		
		Numbers nObj = new Numbers(iNo);
		
		System.out.println("Factorial of "+iNo+" is : "+nObj.factorial());
				
		sObj.close();		
		
	}
}
