/*
	Write a program which accepts number from user and print all odd numbers upto that number
*/
using System;

class Numbers
{
	private int iNo;
	
	public Numbers(int iNum)
	{
		iNo = iNum;
	}
	
	public void displayOddNumbers()
	{
		int iCnt = 0;
		
		for(iCnt = 1; iCnt < iNo/2; iCnt++)
		{
			if((iCnt % 2) == 1)
			{
				Console.Write(iCnt+"\t");
			}
		}
		Console.WriteLine();
	
	}
	

}

class EntryPointMain
{

	static int Main()
	{
		int iNo = 0;
		
		Console.WriteLine("Enter number : ");
		iNo = Convert.ToInt32(Console.ReadLine());
		
		Numbers nObj = new Numbers(iNo);
		
		nObj.displayOddNumbers();
		
		return 0;	
	}

}
