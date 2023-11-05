# 	Accept N numbers from user and returns the frequency of even numbers.

class Array:
	
	def __init__(self,iLength):
		
		self.iSize = iLength
		self.iArr = []
	
	def accept_display(self):	
		
		print("\nEnter elements : ")
		for iCnt in range(0,self.iSize,1):
			self.iSize = int(input())
			self.iArr.append(self.iSize)
		
		print("\nElements stored in array are : ",self.iArr)
	
	def freqOfEvenElements(self):
		
		iCount = 0
		for iCnt in range(0,len(self.iArr),1):
			
			if(((self.iArr[iCnt]) % 2) == 0):
				iCount = iCount + 1		
		return iCount			
	
def main():

	print("Enter number of elements that you want to store in array : ")
	iValue = int(input())
	
	aObj = Array(iValue)
	
	aObj.accept_display()
	print("\nCount of even elements stored in array are : ",aObj.freqOfEvenElements())

if __name__ == "__main__":
	main()	
