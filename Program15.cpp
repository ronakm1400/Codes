////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//	Write a program which accepts N numbers from user and returns the difference between summation of even 
//	elements and summation of odd elements.

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<iostream>

class ArrayX
{

	private:
		
		int iSize;
		int *iArr;
		
	public:
		
		ArrayX()
		{
			iSize  	= 0;
			iArr 	= NULL;
		}
		
		ArrayX(int iLength)
		{
			iSize 	= iLength;
			iArr	= new int[iSize];
			if(iArr == NULL)
			{
				perror("new");
				_Exit(EXIT_FAILURE);	
			}
		}
		
		~ArrayX()
		{
			if(iArr)
			{
				delete[] iArr;
			}
		}
		
		void acceptDisplay()
		{
			int iCnt = 0;
			
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
		
		int diffSumEvenOdd()
		{
			int iCnt = 0,iSumEven = 0,iSumOdd = 0;
			
			for(iCnt = 0; iCnt < iSize; iCnt++)
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
			return iSumEven-iSumOdd;
		}
		
};

int main(void)
{

	int iValue = 0,iRet = 0;
	
	std :: cout<<"Enter number of elements you want to store in array : \n";
	std :: cin>>iValue;
	
	ArrayX aObj(iValue);
	
	aObj.acceptDisplay();
	
	iRet = aObj.diffSumEvenOdd();	
	std :: cout<<"\nDifference between summation of even and odd elements is : "<<iRet<<std :: endl;
		
	exit(EXIT_SUCCESS);

}
