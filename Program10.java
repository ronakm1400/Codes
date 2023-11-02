/*
	Write a program which accepts number from user and display digits in reverse order.
*/

import java.util.Scanner;

class Digits
{
	private int iNo;
	
	public Digits(int iNum)
	{
		iNo = iNum;
	}
	
	public void displayReverse()
	{
		System.out.println("\nDigits in reverse order are : \n");
		while(iNo != 0)
		{
			System.out.print(iNo%10);
			iNo = iNo/10;
		}
		System.out.println();
	}



}

class Program10
{

	public static void main(java.lang.String Arg[])
	{
		int iValue = 0;
		
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter Number : ");
		iValue = sObj.nextInt();
		
		Digits dObj = new Digits(iValue);
		
		dObj.displayReverse();
				
		sObj.close();
		
	}

}
