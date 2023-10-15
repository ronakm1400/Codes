
#	Write a program which accept number from user and display its multiplication of factors.

class Numbers:
	
	def __init__(self):
		
		self.iNo = 0
		
	def acceptFromUser(self):
		
		print("Enter number : ")
		self.iNo = int(input())
		
	def multiplicationOfFactors(self):
		
		iMult = 1
		
		if((self.iNo % 2) != 0):
			return -1
		
		for iCnt in range(1,int(self.iNo/2),1):
			
			iMult = iMult * iCnt
			
		return iMult
					

def main():
	
	nObj = Numbers()
	
	nObj.acceptFromUser()
	
	iRet = nObj.multiplicationOfFactors()
	if(iRet == -1):
		
		print("There are no factors\n")
		
	else:
		print("Multiplication of factors is : ",iRet)	


if __name__ == "__main__":
	main()
