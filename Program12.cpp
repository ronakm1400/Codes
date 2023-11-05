/*
	Write a program which accept number from user and return multiplication of all digits.
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
		
		int multOfDigits()
		{
			signed int iDigit = 0,iMult = 1;
			
			if(iNo < 0)
			{
				iNo = -iNo;
			}
			
			while(iNo != 0)
			{
				iDigit = iNo % 10;
				
				if(iDigit == 0)
				{
					iDigit = 1;
				}
				
				iMult = iMult * iDigit;
				
				iNo = iNo/10;				
			}
			return iMult;
		}
	
};

int main(void)
{
	
	signed int iValue = 0,iRet = 0;
	
	cout<<"Enter Number : ";
	cin>>iValue;
	
	Digits dObj(iValue);
	
	iRet = dObj.multOfDigits();
	cout<<"Multiplication of all digits is : "<<iRet<<"\n";
			
	return 0;
	
}
