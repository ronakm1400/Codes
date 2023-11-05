/*
	Write a program which accept number from user and return multiplication of all digits.
*/
using System;

class Digits
{

	private int iNo;
	
	public Digits(int iNum)
	{
		iNo = iNum;
	}
	
	public int multOfDigits()
	{
		int iDigit = 0,iMult = 1;
		
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			
			if(iDigit == 0)
			{
				iDigit = 1;
			}
			
			iMult = iMult * iDigit;
			
			iNo = iNo / 10;
		}
		return iMult;
	}


}

class EntryPointMain
{
	static int Main()
	{
		int iValue = 0;
		
		Console.WriteLine("Enter Number : ");
		iValue = Convert.ToInt32(Console.ReadLine());
		
		Digits dObj = new Digits(iValue);
		Console.WriteLine("Multiplication of all digits is : "+dObj.multOfDigits());	

		return 0;
	}
}
