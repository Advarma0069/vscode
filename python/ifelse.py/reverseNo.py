def reverse(n, rev=0):
    if n == 0:
        return rev
    else:
        # Multiply current reverse by 10 and add the last digit of the number
        return reverse(n // 10, rev * 10 + n % 10)

# Test the function
number =12345 #int(input("Enter a new values: "))
result= reverse(number)
print("the reverse numbers is: ",result)
 