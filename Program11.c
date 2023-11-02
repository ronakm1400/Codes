/*
	Write a program which accept number from user and return the count of even and odd digits.
*/

#include<stdio.h>

int countEvenDigits(int iNum)
{
	int iDigit = 0,iCount = 0;
	
	while(iNum != 0)
	{
		iDigit = iNum % 10;
		
		if((iDigit % 2) == 0)
		{
			iCount++;
		}
		
		iNum = iNum / 10;
	}
	return iCount;
}

int countOddDigits(int iNum)
{
	int iDigit = 0,iCount = 0;
	
	while(iNum != 0)
	{
		iDigit = iNum % 10;
		
		if((iDigit % 2) == 1)
		{
			iCount++;
		}
		
		iNum = iNum / 10;
	}
	return iCount;
}

int main(void)
{
	int countEvenDigits(int);
	int countOddDigits(int);

	int iValue = 0,iRet = 0;
	
	printf("Enter number : ");
	scanf("%d",&iValue);
	
	iRet = countEvenDigits(iValue);
	printf("\nEven digits in number %d are %d\n",iValue,iRet);
	
	iRet = countOddDigits(iValue);
	printf("\nOdd digits in number %d are %d\n",iValue,iRet);

	return 0;

}
