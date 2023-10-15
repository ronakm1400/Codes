/*
	Write a program which accept number from user and return different between summation of all its factors
	and non-factors.
*/

#include<stdio.h>

int diffOfFactorsNonFactors(int iNum)
{
	
	register int iCnt = 0;
	auto int iSumFact = 0,iSumNonFact = 0,iDiff = 0;
	
	if(iNum < 0)
	{
		iNum = -iNum;
	}
	
	for(iCnt = 1; iCnt < iNum; iCnt++)
	{
		if((iNum % iCnt) == 0) 
		{
			iSumFact = iSumFact + iCnt;
		}
		if((iNum % iCnt) != 0)
		{
			iSumNonFact = iSumNonFact + iCnt;
		}
		iDiff = iSumFact - iSumNonFact;
	}
	
	return iDiff;
	
}

int main(void)
{
	int diffOfFactorsNonFactors(int);
	
	int iNo = 0,iRet = 0;

	printf("Enter number : ");
	scanf("%d",&iNo);
	
	iRet = diffOfFactorsNonFactors(iNo);
	printf("Difference between summation of all factors and non-factors of %d is : %d\n",iNo,iRet);
		
	return 0;

}
