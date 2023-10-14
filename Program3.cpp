/*
	Write a program which accepts two numbers from user and display first number in second number of times.
*/

#include<iostream>
using namespace std;

class Numbers
{

	private:
		 int iNo1;
		 int iNo2;
		 
	public:
		
		Numbers()
		{
			iNo1 = 0;
			iNo2 = 0;
		}	
		
		void acceptFromUser(void)
		{
			cout<<"Enter first number : \n";
			cin>>iNo1;
			
			cout<<"Enter second number : \n";
			cin>>iNo2;	
		}	
		
		void displayNumbers(void)
		{
			int iCnt = 0;
			
			for(iCnt = 1; iCnt <= iNo2; iCnt++)
			{
				cout<<iNo1<<"\t";
			}
			cout<<"\n";
		}

};

int main(void)
{

	Numbers nObj;
	
	nObj.acceptFromUser();
	nObj.displayNumbers();
	
	return 0;

}
