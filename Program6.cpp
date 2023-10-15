/*
	Write a program which accept number from user and return different between summation of all its factors
	and non-factors.
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
		
		int diffOfFactorsNonFactors()
		{
			int iCnt = 0,iSumFact = 0,iSumNonFact = 0;
			
			if(iNo < 0)
			{
				iNo = -iNo;
			}	
			
			for(iCnt = 1; iCnt < iNo; iCnt++)
			{
				if((iNo % iCnt) != 0)
				{
					iSumNonFact = iSumNonFact + iCnt;
				}
				if((iNo % iCnt) == 0)
				{
					iSumFact = iSumFact + iCnt;
				}
			}
			return (iSumFact - iSumNonFact);
		}

};

int main(void)
{
	Numbers nObj;
	
	nObj.acceptFromUser();
	
	cout<<"Difference between summation of factors and non-factors is : "<<nObj.diffOfFactorsNonFactors()<<"\n";
	
	return 0;

}
