###################################################################################################################

#	Write a program which accepts N numbers from user and accept one another number as NO and return index of 
#	first occurence of that NO.

###################################################################################################################

class ArrayX:
	
	def __init__(self,iLength):
		self.iSize = iLength
		self.iArr  = []
		
	def accept_display(self):
		
		print("Enter {} elements : ".format(self.iSize))
		
		for iCnt in range(0,self.iSize,1):
			
			self.iSize = int(input())
			self.iArr.append(self.iSize)
		
		print("Elements stored in list are : ",self.iArr)		
			
		print("Enter number that you want to search first occurence : ")
		iNo = int(input())
			
	def searchFirstOccurence(self,iNum):
		
		iCnt = 0
					
		for iCnt in self.iArr:
			
			if(iNum == self.iArr):
				break		
		
		return iCnt

def main():
	
	iRet = 0
	
	print("Enter number of elements you want to store in list : ")
	iValue = int(input())
	
	aObj = ArrayX(iValue)
	
	aObj.accept_display()

	iRet = aObj.searchFirstOccurence(iNo)
	print("{} first occured at {}".format(iNo,iRet))
	
if __name__ == "__main__":
	main()	
