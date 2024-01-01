///////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//	Problem Statement : Accept N numbers from user and return the largest number.
//	
//	Input		  :	N-6
//				Elements: 85	66	3	66	93	88
//
//	Output		  : 93
//	
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

typedef unsigned int u_int;
typedef signed int s_int;

u_int findLargestElement(int iLength,int iArr[])
{

	auto s_int iLarge = 0,iCnt = 0;	
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{
		iLarge = iArr[0];
		
		if(iArr[iCnt] > iLarge)
		{
			iLarge = iArr[iCnt];
			break;			
		}
		
	}
	
	return iLarge;

}

int main(void)
{
	u_int findLargestElement(int,int *);
	
	auto s_int iSize	 = 0;
	auto s_int iRet 	 = 0;
	register s_int iCnt	 = 0;	
	auto s_int *iPtr 	 = NULL;
	
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
	
	iRet = findLargestElement(iSize,iPtr);
	printf("\nLargest element in array is : %d\n",iRet);
	
	free(iPtr);
	
	exit(EXIT_SUCCESS);

}	
