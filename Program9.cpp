/*
	Write a program which accept number from user and displays the mathematical table of that number.
*/

#include<iostream>
using namespace std;

class Numbers
{

	private:
		int iNum;
		
	public:
		
		Numbers(int iNo)
		{
			iNum = iNo;
		}
	
		void displayTable()
		{
			int iCnt = 0,iTable = 0;
			
			for(iCnt = 1; iCnt <= 10; iCnt++)
			{
				iTable = iNum * iCnt;
				cout<<iTable<<"\t";
			}
			cout<<"\n";
		
		}
	

};

int main(void)
{
	int iValue = 0;
	
	cout<<"Enter number : ";
	cin>>iValue;
	
	Numbers nObj(iValue);
	
	nObj.displayTable();

	return 0;

}
