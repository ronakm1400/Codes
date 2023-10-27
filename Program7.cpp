/*
	Write a program to find factorial of given number.
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
		
		int factorial()
		{
			int iCnt = 0,iFact = 1;
			
			if(iNum < 0)
			{
				iNum = -iNum;
			}
			
			for(iCnt = 1; iCnt <= iNum; iCnt++)
			{
				iFact = iFact * iCnt;
			}
			return iFact;
		}
		
};

int main(void)
{

	int iNo = 0;
	
	cout<<"Enter number : ";
	cin>>iNo;
	
	Numbers nObj(iNo);	
	
	cout<<"Factorial of "<<iNo<<" is : "<<nObj.factorial()<<"\n";
	
	return 0;

}
