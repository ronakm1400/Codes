
#	Write a program which accept number from user and return different between summation of all its factors
#	and non-factors.

def diffOfFactorsNonFactors(iNum):
	
	iSumFact = 0
	iSumNonFact = 0
	
	for iCnt in range(1,iNum,1):
	
		if((iNum % iCnt) != 0):
			iSumNonFact = iSumNonFact + iCnt
			
		if((iNum % iCnt) == 0):
			iSumFact = iSumFact + iCnt
				
			
	return int(iSumFact - iSumNonFact)	

def main():

	print("Enter number : ")
	iNo = int(input())	
	
	iRet = diffOfFactorsNonFactors(iNo)
	print("Difference between of all factors and non-factors of {} is : {}".format(iNo,iRet))	
		

if __name__ == "__main__":
	main()
