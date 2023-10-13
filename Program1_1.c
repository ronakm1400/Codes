/*
	Write a program which accepts two numbers from user and performs division operation on that two numbers
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>

float divisionOfTwoNumbers(char *argv[])
{
	auto int iNo1 = 0,iNo2 = 0;
	auto float iDiv = 0.0f;

	iNo1 = atoi(argv[1]);
	iNo2 = atoi(argv[2]);	
		
	if((iNo1 == 0) || (iNo2 == 0))
	{	
		printf("\nError : Floating point error\nYou entered 0\n");
		_exit(EXIT_FAILURE);
	}	
	
	if((iNo1 < 0) || (iNo2 < 0))
	{
		iNo1 = -iNo1;
		iNo2 = -iNo2;
	}
		
	iDiv = iNo1/iNo2;
	
	if(iDiv < 0)
	{
		iDiv = -iDiv;
	}
	
	return iDiv;
}

int main(int argc,char *argv[])
{
	float divisionOfTwoNumbers(char **);
	
	auto float fRet = 0.0f;
	
	if((argc <= 1) || (argc > 3))
	{
		fprintf(stderr,"Invalid number of arguments\n");
		fprintf(stderr,"Press %s --h or %s --H for Help\n",argv[0],argv[0]);
		fprintf(stderr,"Press %s --u or %s --U for Usage\n",argv[0],argv[0]);
		_exit(EXIT_FAILURE);
	}	
	
	if((strcmp(argv[1],"--h") == 0) || (strcmp(argv[1],"--H") == 0))
	{
		fprintf(stdout,"Help : This application is used to perform division of two numbers\n");
		_exit(1);
	}
	else if((strcmp(argv[1],"--u") == 0) || (strcmp(argv[1],"--U") == 0))
	{
		fprintf(stdout,"Usage : %s First_Number Second_Number\n",argv[0]);
		_exit(1);
	}
	
	fRet = divisionOfTwoNumbers(argv);
	printf("Division is : %f\n",fRet);
				
	exit(EXIT_SUCCESS);	
	
}	
