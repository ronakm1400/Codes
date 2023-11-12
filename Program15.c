////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//	Write a program which accepts N numbers from user and returns the difference between summation of even 
//	elements and summation of odd elements.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

int diffSumEvenOdd(int iLength,int iArr[])
{
	register signed int iCnt = 0;
	auto signed int iSumEven = 0,iSumOdd = 0;
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		if((iArr[iCnt] % 2) == 0)
		{
			iSumEven = iSumEven + iArr[iCnt];
		}
		else
		{
			iSumOdd = iSumOdd + iArr[iCnt];
		}
	}
	return iSumEven - iSumOdd;
	
}

int main(void)
{
	int diffSumEvenOdd(int,int *);

	auto signed int iSize = 0,iRet = 0;
	auto signed int *iPtr = NULL;
	register signed int iCnt = 0;
	
	printf("Enter number of elements you want to store in array : \n");
	scanf("%d",&iSize);
	
	iPtr = (int *)malloc(iSize * sizeof(int));
	if(iPtr == NULL)
	{
		perror("malloc");
		_exit(EXIT_FAILURE);
	}
	
	printf("\nEnter %d elements : \n",iSize);
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		scanf("%d",&iPtr[iCnt]);
	}
	
	printf("\nElements stored in array are : \n");
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		printf("%d\t",iPtr[iCnt]);
	}
	printf("\n");
	
	iRet = diffSumEvenOdd(iSize,iPtr);
	if(iRet < 0)
	{
		iRet = -iRet;
	}
	printf("\nDifference between summation of even and odd elements in array is : %d\n",iRet);
	
	if(iPtr)
	{
		free(iPtr);
	}
	
	exit(EXIT_SUCCESS);

}
