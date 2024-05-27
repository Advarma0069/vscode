x=10
#y=10   #global variable
def f1():
    global x
    x=5    #local variable
    #print(y)
    print("local x=",x)
    print("global x=",x)

f1()
print("global x=",x)
print()