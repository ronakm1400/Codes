/*
	Write a program which accept number from user and display its multiplication of factors.
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
		
		System.out.println("Enter Number : ");
		iNo = sObj.nextInt();
		
		sObj.close();
		
	}
	
	public int multiplicationOfFactors()
	{
		int iCnt = 0,iMul = 1;
		
		if(iNo < 0)
		{
			iNo = -iNo;
		}
		
		if((iNo % 2) != 0)
		{
			return -1;
		}
		
		for(iCnt = 1; iCnt < iNo/2; iCnt++)
		{
			if((iNo % iCnt) == 0)
			{
				iMul = iMul * iCnt;
			}
		}
		return iMul;
	
	}
	
}

class Program4
{

	public static void main(java.lang.String[] Arg)
	{
		int iRet = 0;
		Numbers nObj = new Numbers();
		
		nObj.acceptFromUser();
		
		iRet = nObj.multiplicationOfFactors();
		if(iRet == -1)
		{
			System.out.println("There are no factors of numbers\n");
		}
		else
		{
			System.out.println("Multiplication of all factors is : "+iRet);		
		}	
	}

}
