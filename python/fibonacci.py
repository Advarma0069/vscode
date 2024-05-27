def fibonacci(n):
    count=0
    first=0
    second=1
    temp=0
    while count<=n:
        print(first)
        temp=first+second
        first=second
        second=temp
        count+=1
fibonacci(6)