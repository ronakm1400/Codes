/*
	Write a program which accepts two numbers from user and display first number in second number of times.
*/
using System;

class Numbers
{

	private int iNo1;
	private int iNo2;
	
	public Numbers()
	{
		iNo1 = 0;
		iNo2 = 0;
	}
	
	public void acceptFromUser()
	{
		Console.WriteLine("Enter first number : ");
		iNo1 = Convert.ToInt32(Console.ReadLine());
		
		Console.WriteLine("Enter second number : ");
		iNo2 = Convert.ToInt32(Console.ReadLine());
		
	}
	
	public void displayNumbers()
	{
		int iCnt = 0;
		
		for(iCnt = 1; iCnt <= iNo2; iCnt++)
		{
			Console.Write(iNo1+"\t");
		}
		Console.WriteLine();
	}


}

class EntryPointMain
{
	
	static int Main(string[] Arg)
	{
		Numbers nObj = new Numbers();
		
		nObj.acceptFromUser();
		nObj.displayNumbers();
		
		return 0;
	}

}
