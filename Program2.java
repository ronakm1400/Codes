/*
	Write a program which accepts one number from user and check whether the number is divisioble by 5 or not.
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
		
		sObj.close();
	}
	
	public boolean checkDivisible()
	{
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		
		if((iNo % 5) == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
		
	}
	
}

class Program2
{

	public static void main(java.lang.String Arg[])
	{
		boolean bRet = false;
		
		Numbers nObj = new Numbers();
		
		nObj.acceptFromUser();
		
		bRet = nObj.checkDivisible();
		if(bRet == true)
		{
			System.out.println("Number is divisible by 5");
		}
		else
		{
			System.out.println("Number is not divisible by 5");	
		}
	
	}
}
