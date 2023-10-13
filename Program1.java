/*
	Write a program which accepts two numbers from user and performs division operation on that two numbers
*/

import java.util.Scanner;

class Division
{
	
	private int iNo1;
	private int iNo2;
	
	public Division()
	{
		iNo1 = 0;
		iNo2 = 0;
	}
	
	public void acceptFromUser()
	{
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter first number : ");
		iNo1 = sObj.nextInt();
		
		System.out.println("\nEnter second number : ");
		iNo2 = sObj.nextInt();
	
		sObj.close();	
	}
	
	public int divisionOfTwoNumbers()
	{
		return iNo1/iNo2;
	}

}

class Program1
{
	public static void main(java.lang.String Arg[])
	{	
		Division dObj = new Division();
		
		dObj.acceptFromUser();
		System.out.println("Division is : "+dObj.divisionOfTwoNumbers());
	}	

}
