/*
	Write a program to find factorial of given number.
*/

#include<stdio.h>

int factorial(int iNum)
{

	register int iCnt = 0;
	auto int iFact = 1;
	
	if(iNum < 0)
	{
		iFact = -iFact;
	}
	
	for(iCnt = 1; iCnt <= iNum; iCnt++)
	{
		iFact = iFact * iCnt;
	}
	
	return iFact;

}

int main(void)
{
	
	int factorial(int);
	
	auto int iNo = 0;
	
	printf("Enter number : ");
	scanf("%d",&iNo);
	
	printf("Factorial of %d is : %d\n",iNo,factorial(iNo));

	return 0;

}
