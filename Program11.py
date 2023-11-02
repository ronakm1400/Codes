# 	Write a program which accept number from user and return the count of even digits.

class Digits:
	
	def __init__(self,iNum):
		
		self.iNo = iNum
		
	def countEvenDigits(self):
		
		iCount = 0
		
		while(self.iNo > 0):
			
			if(((self.iNo % 10) % 2) == 0):
				iCount = iCount + 1
			
			self.iNo //= 10 
		
		return iCount	
		

def main():
	
	print("Enter Number : ")
	iValue = int(input())
	
	dObj = Digits(iValue)
	
	iRet = dObj.countEvenDigits()
	print("Count of even digits in number {} is : {} ".format(iValue,iRet))


if __name__ == "__main__":
	main()
