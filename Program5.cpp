/*
	Write a program which accept number from user and return summation of all its non factors.
*/

#include<iostream>
using namespace std;

class Numbers
{

	private:
		
		int iNo;
		
	public:
		Numbers()
		{
			iNo = 0;
		}		
		
		void acceptFromUser()
		{
			cout<<"Enter number : ";
			cin>>iNo;
		}
		
		int summationOfNonFactors()
		{
			int iCnt = 0,iSum = 0;
			
			if(iNo < 0)
			{
				iNo = -iNo;
			}	
			
			for(iCnt = 1; iCnt < iNo/2; iCnt++)
			{
				if((iNo % iCnt) != 0)
				{
					iSum = iSum + iCnt;
				}
			}
			return iSum;
		}

};

int main(void)
{
	Numbers nObj;
	
	nObj.acceptFromUser();
	
	cout<<"Summation of non-factors is : "<<nObj.summationOfNonFactors()<<"\n";
	
	return 0;

}
