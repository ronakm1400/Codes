/*
	Write a program which accept number from user and return multiplication of all digits.
*/

import java.util.Scanner;

class Digits
{

	private int iNo;
	
	public Digits(int iNum)
	{
		iNo = iNum;
	}
	
	public int multOfDigits()
	{
		int iDigit = 0,iMult = 1;
		
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		
		while(iNo > 0)
		{
			iDigit = iNo % 10;
			
			if(iDigit == 0)
			{
				iDigit = 1;
			}	
			
			iMult = iMult * iDigit;
			
			iNo = iNo / 10;
			
		}
		return iMult;
	}


}

class Program12
{
	
	public static void main(java.lang.String Arg[])
	{
		int iValue = 0;
		
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number : ");
		iValue = sObj.nextInt();
		
		Digits dObj = new Digits(iValue);
		
		System.out.println("Multiplication of all digits is : "+dObj.multOfDigits());
		
		sObj.close();	
	}
}
