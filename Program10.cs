/*
	Write a program which accepts number from user and display digits in reverse order.
*/

using System;

class Digits
{

	private int iNo;
	
	public Digits(int iNum)
	{
		iNo = iNum;
	}
	
	public void displayReverse()
	{
		Console.WriteLine("Digits reversed are : ");
		while(iNo > 0)
		{
			Console.Write(iNo%10+"\t");
			iNo = iNo / 10;
		}
		Console.WriteLine();
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
		
		dObj.displayReverse();	
	
		return 0; 
	}
}
