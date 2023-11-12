/*
	Write a program which accepts N numbers from user and accept one another number as NO and return index of 
	first occurence of that NO.
*/

#include<iostream>
#include<unistd.h>
#include<stdbool.h>

class Array
{
	private:
		
		int iSize;
		int *iArr;
	
	public:
		
		Array(int);			// Parameterized Constructor
		~Array();			// Destructor
		void accept_display();		// Method to accept and display elements of array
		int searchFirstOccurence(int);	// Method which returns count of even elements in array

};

Array :: Array(int iLength)
{
	iSize = iLength;
	iArr = new int[iSize];		// Dynamic memory allocation
	if(iArr == NULL)
	{
		perror("new : ");
		_exit(EXIT_FAILURE);
	}	
}

void Array :: accept_display()
{
	signed int iCnt = 0;
	
	std :: cout<<"\nEnter elements : \n";
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{	
		std :: cin>>iArr[iCnt];
	}	
	
	std :: cout<<"\nElements stored in array are : \n";
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{	
		std :: cout<<iArr[iCnt]<<"\t";
	}	
	std :: cout<<"\n";
}

int Array :: searchFirstOccurence(int iNo)
{
	signed int iCnt = 0,bFlag = false;
	
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		if(iNo == iArr[iCnt])
		{
			bFlag = true;
			break;
		}
		
	}

	if(bFlag == true)
	{
		return iCnt+1;
	}
	else
	{
		return -1;
	}	

}

Array :: ~Array()
{
	if(iArr)
	{
		delete iArr;
	}
}

int main(void)
{
	int iValue = 0,iNum = 0,iRet = 0;
	
	std :: cout<<"Enter number of elements you want to store in array : \n";
	std :: cin>>iValue;
	
	Array aObj(iValue);
	
	aObj.accept_display();
	
	std :: cout<<"Enter number that you want to search occurence : \n";
	std :: cin>>iNum;
	
	iRet = aObj.searchFirstOccurence(iNum);
	std :: cout<<iNum<<" first occured at "<<iRet<<" position\n";
			
	exit(EXIT_SUCCESS);

}
