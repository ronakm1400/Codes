
#	Write a program which accepts one number from user and check whether the number is divisioble by 5 or not.

def checkDivisible(iNum):
	
	if((iNum % 5) == 0):
		
		return 1
	else:
	
		return 0
	
def main():

	print("Enter number :")
	iNo = int(input())
	
	iRet = checkDivisible(iNo)
	
	if(iRet == 1):
		print("{} is divisible by 5".format(iNo))
		
	else:
		print("{} is not divisible by 5".format(iNo))
		

if __name__ == "__main__":
	main()
