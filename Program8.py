#	Write a program which accepts number from user and print all odd numbers upto that number

def displayOddNumbers(iNum):
	
	for iCnt in range(0,int(iNum/2),1):
		
		if((iCnt % 2) == 1):
			
			print(iCnt,end = ' ')
			
	print()	
	

def main():

	print("Enter number : ")
	iNo = int(input())
	
	displayOddNumbers(iNo)

if __name__ == "__main__":
	main()
