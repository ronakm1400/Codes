###################################################################################################################

#	Write a program which accepts N numbers from user and returns the difference between summation of even 
#	elements and summation of odd elements.

###################################################################################################################

class ArrayX:
	
	def __init__(self,iLength):
		
		self.iSize 	= iLength
		self.iArr  	= []	
	
	def acceptDisplay(self):
		
		print("\nEnter elements : ")
		for iCnt in range(0,self.iSize,1):
			
			self.iSize = int(input())
			self.iArr.append(self.iSize)
		
		print("\nElements stored in list are : {}".format(self.iArr))
	
	def diffSumEvenOdd(self):
		
		iSumEven = 0
		iSumOdd  = 0
		
		for iCnt in range(0,len(self.iArr),1):
			
			if((self.iArr[iCnt] % 2) == 0):
				iSumEven = iSumEven + self.iArr[iCnt]
				
			else:
				iSumOdd = iSumOdd + self.iArr[iCnt]
		
		return int(iSumEven-iSumOdd)
			
def main():

	print("Enter number of elements you want to store in array : ")
	iValue = int(input())
	
	aObj = ArrayX(iValue)
	
	aObj.acceptDisplay()
	
	iRet = aObj.diffSumEvenOdd()
	print("\nDifference between summation of even and odd elements is : {}".format(iRet))
	
if __name__ == "__main__":
	main()
