/*
	Write a program which accepts number from user and print all odd numbers upto that number
*/

import java.util.Scanner;

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
				System.out.print(iCnt+"\t");
			}
		}
		System.out.println();
	
	}
	

}

class Program8
{

	public static void main(java.lang.String Arg[])
	{
		int iNo = 0;
		Scanner sObj = new Scanner(System.in);
		
		System.out.println("Enter number : ");
		iNo = sObj.nextInt();
		
		Numbers nObj = new Numbers(iNo);
		
		nObj.displayOddNumbers();
			
		sObj.close();
	}

}
