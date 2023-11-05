/*
	Accept N numbers from user and returns the frequency of even numbers.
*/

#include<iostream>
#include<stdlib.h>
#include<unistd.h>	

class Array
{
	private:
		
		int iSize;
		int *iArr;
	
	public:
		
		Array(int);			// Parameterized Constructor
		~Array();			// Destructor
		void accept_display();		// Method to accept and display elements of array
		int freqOfEvenNumbers();	// Method which returns count of even elements in array

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

int Array :: freqOfEvenNumbers()
{
	signed int iCnt = 0,iCount = 0;
	
	for(iCnt = 0;iCnt < iSize; iCnt++)
	{
		if(((iArr[iCnt]) % 2) == 0)
		{
			iCount++;
		}
	}
	
	return iCount;
	
	return 0;
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
	int iValue = 0;
	
	std :: cout<<"Enter number of elements you want to store in array : \n";
	std :: cin>>iValue;
	
	Array aObj(iValue);
	
	aObj.accept_display();
		
	std :: cout<<"\nCount of even elements stored in array are : "<<aObj.freqOfEvenNumbers()<<"\n";
	
	exit(EXIT_SUCCESS);

}
