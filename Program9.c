/*
	Write a program which accept number from user and displays the mathematical table of that number.
*/

#include<stdio.h>

void displayTable(int iNum)
{
	register int iCnt = 0;
	auto int iTable = 0;
	
	for(iCnt = 1; iCnt <= 10; iCnt++)
	{
		iTable = iNum * iCnt;
		printf("%d\t",iTable);
	}	
	printf("\n");
}

int main(void)
{
	void displayTable(int);
	
	int iNo = 0;
	printf("Enter number : ");
	scanf("%d",&iNo);
	
	displayTable(iNo);

	return 0;

}
