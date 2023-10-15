
#	Write a program which accept number from user and return summation of all its non factors.

def summationOfNonFactors(iNum):
	
	iSum = 0
	
	for iCnt in range(1,iNum,1):
	
		if((iNum % iCnt) != 0):
			iSum = iSum + iCnt
	
	return iSum	

def main():

	print("Enter number : ")
	iNo = int(input())	
	
	iRet = summationOfNonFactors(iNo)
	print("Summation of all non-factors is : {}".format(iRet))	
	

if __name__ == "__main__":
	main()
