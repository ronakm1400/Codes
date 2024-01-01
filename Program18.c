///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept N numbers from user and return the smallest number.
//	
//	Input		  :	N-6
//				Elements: 85	66	3	66	93	88
//
//	Output		  : 3
//	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

typedef signed int s_int;

s_int findSmallestElement(int iLength,int iArr[])
{
	auto s_int iCnt 	= 0;
	auto s_int iSmall	= iArr[0];
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{		
		if(iSmall > iArr[iCnt])
		{
			iSmall = iArr[iCnt];
		}
	}
	
	return iSmall;
}

int main(void)
{

	s_int findSmallestElement(int,int *);	
	
	auto s_int iSize 	= 0,iRet = 0;
	auto s_int *iPtr 	= NULL;
	register s_int iCnt 	= 0;
	
	printf("Enter number of elements you want to store in array : ");
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
	
	iRet = findSmallestElement(iSize,iPtr);
	printf("\nSmallest element in array is : %d\n",iRet);
	
	if(iPtr)
	{
		free(iPtr);
	}	
	
	exit(EXIT_SUCCESS);

}
