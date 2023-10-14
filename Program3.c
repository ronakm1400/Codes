/*
	Write a program which accepts two numbers from user and display first number in second number of times.
*/
#include<stdio.h>

void displayNumbers(int iNum1,int iNum2)
{

	register int iCnt = 0;
	
	for(iCnt = 1; iCnt <= iNum2; iCnt++)
	{
		printf("%d\t",iNum1);
	}
	printf("\n");	
}

int main(void)
{
	void displayNumbers(int,int);
	
	auto signed int iNo1 = 0,iNo2 = 0;
	
	printf("Enter first number : ");
	scanf("%d",&iNo1);

	printf("Enter second number : ");
	scanf("%d",&iNo2);
	
	displayNumbers(iNo1,iNo2);	
		
	return 0;

}
