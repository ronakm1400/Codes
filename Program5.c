/*
	Write a program which accept number from user and return summation of all its non factors.
*/

#include<stdio.h>

int summationOfNonFactors(int iNum)
{
	
	register int iCnt = 0;
	auto int iSum = 0;
	
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

int main(void)
{
	int summationOfNonFactors(int);
	
	int iNo = 0,iRet = 0;

	printf("Enter number : ");
	scanf("%d",&iNo);
	
	iRet = summationOfNonFactors(iNo);
	printf("Summation of all non factors of %d is : %d\n",iNo,iRet);
		
	return 0;

}
