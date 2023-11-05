/*
	Write a program which accepts N numbers from user and accept one another number as NO and return index of 
	first occurence of that NO.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<stdbool.h>

int searchFirstOccurence(int iSize,int iNum,int iArr[])
{
	register int iCnt = 0;
	auto bool bFlag = false;
	
	if(iNum > 100)
	{
		return -1;
	}
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		if(iNum == iArr[iCnt])
		{
			bFlag = true;
			break;
		}
	}
	if(bFlag == true)
	{
		return iCnt+1;
	}		
}

int main(void)
{

	int searchFirstOccurence(int,int,int *);

	auto int iValue = 0,iNo = 0,iRet = 0,*iPtr = NULL;
	register int iCnt = 0;
	
	printf("Enter number of elements you want to store in array : ");
	scanf("%d",&iValue);
	
	iPtr = (int *)malloc(iValue * sizeof(int));
	if(iPtr == NULL)
	{
		perror("malloc");
		_exit(EXIT_FAILURE);
	}
	
	printf("\nEnter %d elements : \n",iValue);
	for(iCnt = 0; iCnt < iValue; iCnt++)
	{
		scanf("%d",&iPtr[iCnt]);	
	}
	
	printf("\nElements stored in array are : \n");
	for(iCnt = 0; iCnt < iValue; iCnt++)
	{
		printf("%d\t",iPtr[iCnt]);
	}
	printf("\n");	
	
	printf("\nEnter number that you want to search first occurence : \n");
	scanf("%d",&iNo);
	
	iRet = searchFirstOccurence(iValue,iNo,iPtr);
	if(iRet == -1)
	{
		printf("\n%d no such number present\n",iNo);	
	}
	else
	{
		printf("\n%d first occured at %d position\n",iNo,iRet);
	}
	
	if(iPtr)
	{
		free(iPtr);
	}
		
	exit(EXIT_SUCCESS);
	
}
