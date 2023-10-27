/*
	Write a program which accept number from user and displays the mathematical table of that number.
*/

import java.util.Scanner;

class Numbers
{
	private int iNo;
	
	public Numbers()
	{
		iNo = 0;
	}
	
	public void acceptFromUser()
	{
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number : ");
		iNo = sObj.nextInt();
		
	}
	
	public void displayTable()
	{
		int iCnt = 0,iTable = 0;
		
		for(iCnt = 1; iCnt <= 10; iCnt++)
		{
			iTable = iNo * iCnt;
			System.out.print(iTable+"\t");
		}
		System.out.println();
	}

}

class Program9
{

	public static void main(java.lang.String Arg[])
	{
		Numbers nObj = new Numbers();
		
		nObj.acceptFromUser();
		nObj.displayTable();	
	
	}

}
