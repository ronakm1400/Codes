/*
	Write a program which accepts two numbers from user and performs division operation on that two numbers
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

float divisionOfTwoNumbers(int iValue1,int iValue2)
{
	auto float iDiv = 0.0f;
	
	if((iValue1 == 0) || (iValue2 == 0))
	{	
		printf("\nError : Floating point error\nYou entered 0\n");
		_exit(EXIT_FAILURE);
	}	
	
	if((iValue1 < 0) || (iValue2 < 0))
	{
		iValue1 = -iValue1;
		iValue2 = -iValue2;
	}
		
	iDiv = iValue1/iValue2;
	
	if(iDiv < 0)
	{
		iDiv = -iDiv;
	}
	
	return iDiv;
}

int main(int argc,char *argv[])
{
	float divisionOfTwoNumbers(int,int);

	auto int iNo1 = 0,iNo2 = 0;
	auto float fRet = 0.0f;

	printf("Enter first number : ");
	scanf("%d",&iNo1);
	
	printf("Enter second number : ");
	scanf("%d",&iNo2);
	
	fRet = divisionOfTwoNumbers(iNo1,iNo2);
	printf("Division is : %f\n",fRet);
	
	exit(EXIT_SUCCESS);
	
}	
