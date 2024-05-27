x=int(input("Enter a  number :"))
if x%2!=0:
    print("Odd ")
    
elif x>=6 and x<=8:
    print("small number")
    for i in range(5):
        print(x)
        
elif x>=10 and x<=50:
    print("I don't known")
else:
    print("wrong input")