/*
	Write a program which accepts one number from user and check whether the number is divisioble by 5 or not.
*/
using System;

class Numbers
{
	
	private int iNo;
		
	public Numbers()
	{
		iNo = 0;
	}
		
	public void acceptFromUser()
	{
		Console.WriteLine("Enter Number : ");
		iNo = Convert.ToInt32(Console.ReadLine());	
	}
	
	public bool checkDivisible()
	{
		if((iNo % 5)== 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
		

}

class EntryPointMain
{
	static int Main(string[] Args)
	{
		bool bRet = false;
		
		Numbers nObj = new Numbers();
		
		nObj.acceptFromUser();
		
		bRet = nObj.checkDivisible();
		if(bRet == true)
		{
			Console.WriteLine("Number is divisible by 5");
		}
		else
		{
			Console.WriteLine("Number is not divisible by 5");
		}
		
		return 0;
	}	

}
