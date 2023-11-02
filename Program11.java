/*
	Write a program which accept number from user and return the count of even digits.
*/

import java.util.Scanner;

class Digits
{
	private int iNo;
	
	public Digits()
	{
		iNo = 0;
	}
	
	public void acceptFromUser()
	{
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number : ");
		iNo = sObj.nextInt();
		
		sObj.close();		
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
					
			iNo = iNo / 10;	
		}
		return iCount;
	}


}

class Program11
{

	public static void main(java.lang.String Arg[])
	{	
		Digits dObj = new Digits();
		
		dObj.acceptFromUser();
		System.out.println("\nCount of even digits in number is : "+dObj.countEvenDigits());
		
	}
}
