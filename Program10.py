
#	Write a program which accepts number from user and display digits in reverse order.

class Digits:
	
	def __init__(self,iNo):
		
		self.iNum = iNo
			
	def displayReverse(self):
		
		print("Digits in reverse order are : ")
	
		while(self.iNum > 0):
			
			print(self.iNum % 10,end = ' ')
			self.iNum //= 10
			
		print()		
	
def main():

	print("Enter number : ")
	iValue = int(input())
	
	dObj = Digits(iValue)
	
	dObj.displayReverse()

if __name__ == "__main__":
	main()
