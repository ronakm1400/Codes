/*
	Write a program which accept number from user and return multiplication of all digits.
*/

#include<stdio.h>

typedef signed int SINT;

int multOfDigits(int iNo)
{
	auto SINT iMult = 1,iDigit = 0;

	if(iNo < 0)
	{
		iNo = -iNo;
	}

	while(iNo != 0)
	{
		iDigit = (iNo % 10);
	
		if(iDigit == 0)
		{
			iDigit = 1;
		}	
		
		
		iMult = iMult * iDigit;
		
		iNo   = iNo / 10;			
	}
	return iMult;
}

int main(void)
{

	int multOfDigits(int);

	auto SINT iValue = 0,iRet = 0;
	
	printf("Enter Number : ");
	scanf("%d",&iValue);
	
	iRet = multOfDigits(iValue);
	printf("Multiplication of all digits is : %d\n",iRet);

	return 0;

}	
