
def Division(iValue1,iValue2):
		
	return int(iValue1/iValue2)				
	
def main():
	
	print("Enter first number : ")
	iNo1 = int(input())
	
	print("Enter second number : ")
	iNo2 = int(input())
	
	iRet = Division(iNo1,iNo2)
	print("Division is : ",iRet)

if __name__ == "__main__":
	main()
