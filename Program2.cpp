/*
	Write a program which accepts one number from user and check whether the number is divisioble by 5 or not.
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
		
		void acceptFromUser(void)
		{
			cout<<"Enter number : "<<"\n";
			cin>>iNo;
		}
		
		bool checkDivisible(void)
		{
			if((iNo % 5) == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}


};

int main(void)
{

	bool bRet = false;
	
	Numbers nObj;
	
	nObj.acceptFromUser();
	
	bRet = nObj.checkDivisible();
	if(bRet == true)
	{
		cout<<"Number is divisible by 5"<<"\n";
	}	
	else
	{
		cout<<"Number is not divisible by 5"<<"\n";	
	}	
	return 0;

}
