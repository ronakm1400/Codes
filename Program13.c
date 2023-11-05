/*
	Accept N numbers from user and returns the frequency of even numbers.
*/

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int freqOfEvenNumbers(int iSize,int iArr[])
{	
	register int iCnt = 0;
	auto int iCount = 0;
	
	for(iCnt = 0; iCnt < iSize/2; iCnt++)
	{
		if((iArr[iCnt] % 2) == 0)
		{
			iCount++;
		}
	}
	return iCount;
}

int main(void)
{
	int freqOfEvenNumbers(int,int *);
	
	auto int iValue = 0,iRet = 0,*iPtr = NULL;	

	register int iCnt = 0;

	// Accepting size of array from user	
	printf("Enter number of elements you want to store in array : \n");
	scanf("%d",&iValue);
	
	// Dynamic memory allocation for array
	iPtr = (int *)malloc(iValue * sizeof(int));
	if(iPtr == NULL)
	{
		perror("malloc : ");
		_exit(EXIT_FAILURE);
	}
	
	// Accepting the elements
	printf("\nEnter elements : \n");
	for(iCnt = 0;iCnt < iValue; iCnt++)
	{
		scanf("%d",&iPtr[iCnt]);
	}
	
	// Printing the elements
	printf("\nElements stored in array are : \n");
	for(iCnt = 0;iCnt < iValue; iCnt++)
	{
		printf("%d\t",iPtr[iCnt]);
	}	
	printf("\n");
	
	// Function call	
	iRet = freqOfEvenNumbers(iValue,iPtr);
	printf("\nCount of even numbers present in array are : %d\n",iRet);
	
	// Freed the dynamic memory allocated	
	if(iPtr)
	{
		free(iPtr);
	}	
	
	exit(EXIT_SUCCESS);
		
}
