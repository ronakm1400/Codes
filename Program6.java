/*
	Write a program which accept number from user and return different between summation of all its factors
	and non-factors.
*/

import java.util.Scanner;

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
		return (iSumFact - iSumNonFact);
	}
	

}

class Program6
{
	public static void main(java.lang.String[] Arg)
	{	
		int iNo = 0;
		
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number : ");
		iNo = sObj.nextInt();
			
		Numbers nObj = new Numbers(iNo);
		
		System.out.println("Difference between of all factors and non-factors of "+iNo+" is : "+nObj.diffOfFactorsNonFactors());
		
		sObj.close();			
	} 

}
