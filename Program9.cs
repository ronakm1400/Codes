/*
	Write a program which accept number from user and displays the mathematical table of that number.
*/
using System;

class Numbers
{
	private int iNo;
	
	public Numbers(int iNum)
	{
		iNo = iNum;
	}
	
	public void displayTable()
	{
		int iCnt = 0,iTable = 0;
		
		for(iCnt = 1; iCnt <= 10; iCnt++)
		{
			iTable = iNo * iCnt;
			Console.Write(iTable+"\t");
		}
		Console.WriteLine();
	}

}

class EntryPointMain
{

	static int Main()
	{
		int iValue = 0;

		Console.WriteLine("Enter number : ");
		iValue = Convert.ToInt32(Console.ReadLine());
		
		Numbers nObj = new Numbers(iValue);
		
		nObj.displayTable();
		
		return 0;				
	}
	
}
