/*
	Write a program which accepts number from user and display digits in reverse order.
*/

#include<iostream>
using namespace std;

class Digits
{

	private:
		
		int iNum;
		
	public:
		
		Digits(int iNo)
		{
			iNum = iNo;
		}
		
		void displayReverse()
		{
			cout<<"\nDigits in reverse order are : \n";
			while(iNum != 0)
			{
				cout<<iNum%10<<"\t";
				iNum = iNum/10;
			}
			cout<<"\n";
				
		}


};

int main(void)
{

	signed int iValue = 0;
	
	cout<<"Enter number : ";
	cin>>iValue;
	
	Digits dObj(iValue);	
	
	dObj.displayReverse();
		
	return 0;
	
}
