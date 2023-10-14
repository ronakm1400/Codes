
#	Write a program which accepts two numbers from user and display first number in second number of times.


def displayNumbers(iNum1,iNum2):
	
	for iCnt in range(0,iNum2,1):
		print(iNum1,end = '\t')
	
	print()		

def main():
			
	print("Enter first number : ");
	iNo1 = int(input())

	print("Enter second number : ");
	iNo2 = int(input())
	
	displayNumbers(iNo1,iNo2);	
		
if __name__ == "__main__":
	main()
