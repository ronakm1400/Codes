/*
	Write a program which accepts one number from user and check whether the number is divisioble by 5 or not.
*/

#include<stdio.h>
#include<stdbool.h>

bool checkDivisible(int iNum)
{

	if((iNum % 5) == 0)
	{
		return true;
	}
	else
	{
		return false;
	}

}

int main(void)
{
	bool checkDivisible(int);
	
	auto int iNo = 0;
	auto bool bRet = false;	
		
	printf("Enter number : ");
	scanf("%d",&iNo);
	
	bRet = checkDivisible(iNo);
	if(bRet == true)
	{
		printf("%d is divisible by 5\n",iNo);
	}	
	else
	{
		printf("%d is not divisible by 5\n",iNo);
	}
	return 0;

}
