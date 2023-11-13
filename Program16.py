####################################################################################################################

#	Write a program which accepts N numbers from user and accept one another number as NO and returns the
#	index of last occurence of that NO.

####################################################################################################################

class ArrayX:
	
	def __init__(self,iLength):
		
		self.iSize = iLength
		self.iArr  = []		
		
	def acceptDisplay(self):
		
		print("\nEnter elements you want to store : ")
		
		for iCnt in range(0,self.iSize,1):
			
			self.iSize = int(input())
			self.iArr.append(self.iSize)	
		
		print("\nElements stored in list are : {}".format(self.iArr))
	
	def searchLastOccurence(self,iNum):
		
		iIndex = -1
		
		for iCnt in range(0,len(self.iArr),1):
			
			if(iNum == self.iArr[iCnt]):
				
				iIndex = iCnt
				
		return iIndex+1
		
def main():

	print("Enter number of elements you want to store in list : ")
	iValue = int(input())
	
	aObj = ArrayX(iValue)
	
	aObj.acceptDisplay()
	
	print("\nEnter number that you want to search last occurence : ")
	iNo = int(input())
	
	iRet = aObj.searchLastOccurence(iNo)
	print("\n{} last occured at {} position".format(iNo,iRet))

if __name__ == "__main__":
	main()
