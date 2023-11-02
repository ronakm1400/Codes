/*
	Write a program which accept number from user and return the count of even digits.
*/

using System;

class Digits
{
	private int iNo;
	
	public void acceptFromUser()
	{		
		Console.WriteLine("Enter number : ");
		iNo = Convert.ToInt32(Console.ReadLine());
	}
	
	public int countEvenDigits()
	{
		int iCount = 0;
		
		while(iNo > 0)
		{
			if(((iNo % 10) % 2) == 0)
			{
				iCount++;
			}
			iNo = iNo/10;
		}
		return iCount;
	}
	
}

class EntryPointMain
{

	static int Main()
	{
		int iRet = 0;
		
		Digits dObj = new Digits();
		
		dObj.acceptFromUser();
		
		iRet = dObj.countEvenDigits();
		Console.WriteLine("Count of even digits in number is : "+iRet);
		
		return 0;		
				
	}
}
