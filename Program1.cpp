/*
	Write a program which accepts two numbers from user and performs division operation on that two numbers
*/

#include<iostream>
using namespace std;

class Division
{
	private:
		int iNo1;
		int iNo2;
	public:
		
		Division()
		{
			iNo1 = 0;
			iNo2 = 0;
		}
		
		void acceptFromUser()
		{
			cout<<"Enter first number : \n";
			cin>>iNo1;
			
			cout<<"\nEnter second number : \n";
			cin>>iNo2;
		}
		
		int divisionOfTwoNumbers()
		{
			return iNo1/iNo2;
		}
		

};

int main(int argc,char *argv[])
{
	int iRet = 0;
	
	Division dObj;
		
	dObj.acceptFromUser();
	iRet = dObj.divisionOfTwoNumbers();
	cout<<"Division is : "<<iRet<<"\n";
	
	return 0;

}
