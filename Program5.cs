/*
	Write a program which accept number from user and return summation of all its non factors.
*/
using System;

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
		
		if(iNum < 0)
		{
			iNum = -iNum;
		}
		
		for(iCnt = 1; iCnt < iNum/2; iCnt++)
		{
			if((iNum % iCnt) != 0)
			{
				iSum = iSum + iCnt;
			}
		}
		return iSum;
	}

}

class EntryPointMain
{
	static int Main(string[] Arg)
	{
		int iNo = 0,iRet = 0;
		
		Console.WriteLine("Enter number : ");		
		iNo = Convert.ToInt32(Console.ReadLine());
		
		Numbers nObj = new Numbers(iNo);
		
		iRet = nObj.summationOfNonFactors();
		Console.WriteLine("Summation of all non-factors of "+iNo+" is : "+iRet);	
		
		return 0;	
	}

}
