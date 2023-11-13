////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

//	Write a program which accepts N numbers from user and accept one another number as NO and returns the
//	index of last occurence of that NO.

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
			iSize = 0;
			iArr  = NULL;
		}
		
		ArrayX(int iLength)
		{
			iSize = iLength;
			iArr  = new int[iSize];
		}
		
		~ArrayX()
		{
			if(iArr)
			{
				delete iArr;
			}
		}	

		void acceptDisplay()
		{
		
			int iCnt = 0;
			
			std :: cout<<"\nEnter elements : \n";
			for(iCnt = 0; iCnt < iSize; iCnt ++)
			{
				std :: cin>>iArr[iCnt];
			}
		
			std :: cout<<"\nElements stored in array are : \n";
			for(iCnt = 0; iCnt < iSize; iCnt ++)
			{
				std :: cout<<iArr[iCnt]<<"\t";
			}
			std :: cout<<"\n";
			
		}
		
		int searchLastOccurence(int iNo)
		{
			int iCnt = 0,iIndex = -1;
			
			if(iNo > 100)
			{
				_Exit(EXIT_FAILURE);
			}
			
			for(iCnt = 0; iCnt < iSize; iCnt++)
			{	
				if(iNo == iArr[iCnt])
				{
					iIndex = iCnt;
				}
			}
			return iIndex+1;
		}

};

int main(void)
{
	int iValue = 0,iNo = 0,iRet = 0;
	
	std :: cout<<"Enter number of elements that you want to store in array : \n";
	std :: cin>>iValue;
	
	ArrayX aObj(iValue);
	
	aObj.acceptDisplay();
	
	std :: cout<<"\nEnter number that you want to search last occurence : \n";
	std :: cin>>iNo;
	
	iRet = aObj.searchLastOccurence(iNo);
	std :: cout<<"\n"<<iNo<<" last occured at "<<iRet<<std :: endl;	
			
	exit(EXIT_SUCCESS);
	
}
