/*
	Write a program which accept number from user and display its multiplication of factors.
*/

#include<stdio.h>

typedef unsigned int uint_t;

uint_t multiplicationOfFactors(uint_t iNum)
{
	auto uint_t iMul = 1;
	register int iCnt = 0;
	
	if(iNum < 0)
	{
		iNum = -iNum;
	}
	
	if((iNum % 2) != 0)
	{
		return -1;
	}
	
	for(iCnt = 1; iCnt < iNum/2; iCnt++)
	{
		if((iNum % iCnt) == 0)
		{
			iMul = iMul * iCnt;
		}
	}
	
	return iMul;
	
}

int main(void)
{

	uint_t multiplicationOfFactors(uint_t);
	
	uint_t iNo = 0,iRet = 0;
		
	printf("Enter number : ");
	scanf("%d",&iNo);
	
	iRet = multiplicationOfFactors(iNo);
	if(iRet == -1)
	{
		printf("No factors of %d\n",iNo);
	}
	else
	{
		printf("Multiplication of factors of number %d is : %d\n",iNo,iRet);
	}
	return 0;

}
