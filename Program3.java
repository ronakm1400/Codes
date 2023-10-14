/*
	Write a program which accepts two numbers from user and display first number in second number of times.
*/

import java.util.Scanner;

class Numbers
{
	private int iNo1 = 0;
	private int iNo2 = 0;
	
	public void acceptFromUser()
	{
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter first number : ");
		iNo1 = sObj.nextInt();
		
		System.out.println("Enter second number : ");
		iNo2 = sObj.nextInt();
		
		sObj.close();	
	}		
	
	public void displayNumbers()
	{
		int iCnt = 0;
		
		for(iCnt = 1; iCnt <= iNo2; iCnt++)
		{
			System.out.print(iNo1+"\t");
		}
		System.out.println();
	}

}

class Program3
{

	public static void main(java.lang.String Arg[])
	{
		Numbers nObj = new Numbers();
		
		nObj.acceptFromUser();
		nObj.displayNumbers();
	}

}
