/*
	Write a program which accept number from user and return the count of even digits.
*/

#include<iostream>
using namespace std;

class Digits
{

	private:
		
		int iNo;
		
	public:
		Digits(int iNum)
		{
			iNo = iNum;
		}	
	
		int countEvenDigits()
		{
			int iCount = 0;
			
			while(iNo != 0)
			{		
				if(((iNo % 10) % 2) == 0)
				{
					iCount++;
				}
				iNo = iNo / 10;
			}
			return iCount;	
		}	
		
		int countOddDigits()
		{
			int iCount = 0,iDigit = 0;
			
			while(iNo != 0)
			{
				iDigit = iNo % 10;
						
				if((iDigit % 2) == 1)
				{
					iCount++;
				}
				iNo = iNo / 10;
			}
			return iCount;	
		}	

};

int main(void)
{

	signed int iValue = 0,iRet = 0;
	
	cout<<"Enter number : ";
	cin>>iValue;
		
	Digits dObj(iValue);
	
	iRet = dObj.countEvenDigits();
	cout<<"\nEven digits in number "<<iValue<<" are : "<<iRet<<endl;	

	cout<<"Even digits in number "<<iValue<<" are : "<<dObj.countOddDigits()<<endl;	
	
	return 0;
	
}
