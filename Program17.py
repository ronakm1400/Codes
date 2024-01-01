####################################################################################################################
##
##	Problem Statement : Accept N numbers from user and return the largest number.
##	
##	Input		  :	N-6
##				Elements: 85	66	3	66	93	88
##
##	Output		  : 93
##	
####################################################################################################################

class ArrayX:
	
	def __init__(self,iLength):
		
		self.iSize = iLength
		self.iArr = []	#empty list initialization
	
	def accept_displayElements(self):
		
		iCnt = 0
		
		print("\nEnter {} elements : ".format(self.iSize))
		
		for iCnt in range(0,self.iSize,1):
			
			self.iSize = int(input())
			self.iArr.append(self.iSize)	
		
		print("\nElements stored in list are : {}".format(self.iArr))
	
	def checkLargestElement(self):
		
		iCnt = 0
		iLarge = 0
		
		for iCnt in range(0,len(self.iArr),1):
			
			iLarge = self.iArr[0]
			
			if(self.iArr[iCnt] > iLarge):
				
				iLarge = self.iArr[iCnt]
				
		return iLarge
			
		
def main():

	print("Enter number of elements you want to store in array : ")
	iValue = int(input())
	
	aObj = ArrayX(iValue)
	
	aObj.accept_displayElements()
	
	iRet = aObj.checkLargestElement()
	print("\nLargest element in list is : {}".format(iRet))


if __name__ == "__main__":
	main()
