/*
	Write a program which accepts number from user and print all odd numbers upto that number
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
		
		void displayOddNum()
		{
			int iCnt = 0;
			
			for(iCnt = 1; iCnt < iNo/2; iCnt++)
			{
				if((iCnt % 2) == 1)
				{
					cout<<iCnt<<"\t";
				}
			}
			cout<<"\n";
		
		}

};

int main(void)
{
	Numbers nObj;
	
	nObj.acceptFromUser();
	nObj.displayOddNum();

	return 0;
	
}
