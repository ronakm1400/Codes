/*
	Write a program which accept number from user and return different between summation of all its factors
	and non-factors.
*/
using System;

class Numbers
{
	
	private int iNum;
	
	public Numbers(int iVal)
	{
		iNum = iVal;
	}
	
	public int diffOfFactorsNonFactors()
	{
		int iCnt = 0,iSumFact = 0,iSumNonFact = 0;
		
		if(iNum < 0)
		{
			iNum = -iNum;
		}
		
		for(iCnt = 1; iCnt < iNum; iCnt++)
		{
			if((iNum % iCnt) != 0)
			{
				iSumNonFact = iSumNonFact + iCnt;
			}
			if((iNum % iCnt) == 0)
			{
				iSumFact = iSumFact + iCnt;
			}
		}
		return (iSumFact-iSumNonFact);
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
		
		iRet = nObj.diffOfFactorsNonFactors();
		Console.WriteLine("Difference between all factors and non-factors of "+iNo+" is : "+iRet);	
		
		return 0;	
	}

}
