
# Write a program which accept number from user and return multiplication of all digits.

class Digits:
	
	def __init__(self,iNum):
		
		self.iNo = iNum
	
	def multOfDigits(self):
		
		iMult = 1
		
		if(self.iNo < 0):
			
			self.iNo = -self.iNo
		
		while(self.iNo > 0):
				
			iDigit = self.iNo % 10
			
			if(iDigit == 0):
				
				iDigit = 1
				
			iMult = iMult * iDigit
			
			self.iNo //= 10
		
		return iMult
				

def main():
	
	print("Enter Number : ")
	iValue = int(input())
	
	dObj = Digits(iValue)
	
	print("\nMultiplication of all digits is : ",dObj.multOfDigits())

if __name__ == "__main__":
	main()
