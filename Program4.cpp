/*
	Write a program which accept number from user and display its multiplication of factors.
*/

#include<iostream>
using namespace std;

class Numbers
{
	
	private:
		
		int iNum;
		
	public:
		
		Numbers(int iValue)
		{
			iNum = iValue;
		}
		
		int multiplicationOfFactors(void)
		{
			int iCnt = 0,iMul = 1;
			
			if(iNum < 0)
			{
				iNum = -iNum;
			}	
			
			if((iNum % 2) != 0)
			{
				return -1;
			}
			for(iCnt = 1; iCnt < iNum/2; iCnt++)
			{
				if((iNum % iCnt) == 0)
				{
					iMul = iMul * iCnt;
				}
			}
			return iMul;
		}


};


int main(void)
{
	int iNo = 0,iRet = 0;
	
	cout<<"Enter number : \n";
	cin>>iNo;
	
	Numbers nObj(iNo);
	
	iRet = nObj.multiplicationOfFactors();
	if(iRet == -1)
	{
		cout<<"No factors of "<<iNo<<"\n";
	}	
	else
	{
		cout<<"Multiplication of factors of number "<<iNo<<" is "<<iRet<<"\n";
	}
			
	return 0;

}	
