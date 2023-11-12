////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//	Write a program which accepts N numbers from user and accept one another number as NO and returns the
//	index of last occurence of that NO.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>

typedef signed int s_bool;

#define TRUE 1
#define FALSE 0

int searchLastOccurence(int iLength,int iArr[],int iNum)
{
	register int iCnt = 0;
	auto int iIndex = -1;
	auto s_bool bFlag = FALSE;
	
	if(iNum > 100)
	{
		_exit(EXIT_FAILURE);
	}
	
	for(iCnt = 0; iCnt < iLength; iCnt++)
	{

		if(iArr[iCnt] == iNum)
		{
			iIndex = iCnt;
		}

	}
	return iIndex+1;
}

int main(void)
{
	int searchLastOccurence(int,int *,int);

	auto int iSize = 0,iNo = 0,iCnt = 0,iRet = 0;
	auto int *iPtr = NULL;
	
	printf("Enter number of elements you want to store in array : \n");
	scanf("%d",&iSize);
	
	iPtr = (int *)malloc(iSize * sizeof(int));
	if(iPtr == NULL)
	{
		perror("malloc");
		_exit(EXIT_FAILURE);
	}
	
	printf("\nEnter elements : \n");
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
	
	printf("\nEnter number that you want to search last occurence : \n");
	scanf("%d",&iNo);
	
	iRet = searchLastOccurence(iSize,iPtr,iNo);
	if(iRet == -1)
	{
		printf("\n%d is not present in the array\n",iNo);
	}
	else
	{	
		printf("\n%d last occured at %d position\n",iNo,iRet);
	}
	
	if(iPtr)
	{
		free(iPtr);
	}
	
	exit(EXIT_SUCCESS);

}
