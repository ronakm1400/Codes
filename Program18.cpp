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

#include<iostream>

typedef signed int 	s_int;
typedef unsigned int 	u_int;

class ArrayX
{

	private:
		
		s_int iSize;
		s_int *iArr;
		
	public:
		
		ArrayX();
		
		void acceptElements();
		void displayElements();
		s_int findSmallestElement();
		
		~ArrayX();	
		
};

ArrayX :: ArrayX()
{
	iSize = 0;
	iArr  = new s_int[iSize];
}

void ArrayX :: acceptElements()
{
	s_int iCnt = 0;
	
	std :: cout<<"Enter number of elements you want to store in array : \n";
	std :: cin>>iSize;
	
	std :: cout<<"\nEnter "<<iSize<<" elements : \n";
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		std :: cin>>iArr[iCnt]; 	
	}	
		
}

void ArrayX :: displayElements()
{

	s_int iCnt = 0;
	
	std :: cout<<"\nElements stored in array are : \n";
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		std :: cout<<iArr[iCnt]<<"\t";	
	}
	
	std :: cout<<"\n";

}

s_int ArrayX :: findSmallestElement()
{
	s_int iSmall = iArr[0],iCnt = 0;
	
	for(iCnt = 0; iCnt < iSize; iCnt++)
	{
		
		if(iSmall > iArr[iCnt])
		{
			iSmall = iArr[iCnt];
		}
		
	}
	
	return iSmall;
}

ArrayX :: ~ArrayX()
{
	if(iArr)
	{
		delete[] iArr;
	}
}

int main(void)
{

	s_int iRet = 0;

	ArrayX aObj;
	
	aObj.acceptElements();
	aObj.displayElements();
	
	iRet = aObj.findSmallestElement();
	std :: cout<<"\nSmallest element in array is : "<<iRet<<"\n";
	
	exit(EXIT_FAILURE);

}
