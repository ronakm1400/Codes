#	Write a program which accept number from user and displays the mathematical table of that number.

class Numbers:
	
	def __init__(self,iNum):
		
		self.iNo = iNum
	
	def displayTable(self):
		
		for iCnt in range(1,10,1):
			
			self.iTable = self.iNo * iCnt
			print(self.iTable,end = ' ')
			
		print()	
	
def main():

	print("Enter number : ")
	iNo = int(input())
	
	nObj = Numbers(iNo)
	
	nObj.displayTable()	

if __name__ == "__main__":
	main()
