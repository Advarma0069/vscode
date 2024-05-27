#remove the last digit number ..........
x=int(input("Enter a number :"))
if x>0:
    x=x//10
    print("After removing last digit of number",x)
else:
    x=(x//-10)
    print("After removing last digit of number",x)