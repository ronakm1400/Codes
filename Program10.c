/*
	Write a program which accepts number from user and display digits in reverse order.
*/

#include<stdio.h>

void displayReverse(int iNum)
{
	printf("Digits in reverse order are : ");
	while(iNum != 0)
	{
		printf("%d\n",iNum%10);
		iNum = iNum / 10;
	}
}

int main(void)
{
	void displayReverse(int);
	
	auto signed int iNo = 0;
	
	printf("Enter number : ");
	scanf("%d",&iNo);
	
	displayReverse(iNo);
	
	return 0;

}
