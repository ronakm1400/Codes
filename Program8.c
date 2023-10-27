/*
	Write a program which accepts number from user and print all odd numbers upto that number
*/
#include<stdio.h>

void displayOddNum(int iNum)
{
	register int iCnt = 0;
		
	for(iCnt = 1; iCnt < iNum/2; iCnt++)
	{
		if((iCnt % 2) == 1)
		{
			printf("%d\t",iCnt);
		}
	
	}
	

}

int main(void)
{	
	void displayOddNum(int);

	auto signed int iNo = 0;
	
	printf("Enter number : ");
	scanf("%d",&iNo);
	
	displayOddNum(iNo);

	return 0;

}
