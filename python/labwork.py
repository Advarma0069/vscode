# def check_even_odd(nums):
#     if nums%2==0:
#         print("Even number")
#         for even in range(0,nums,2):
#             print("sum of even numbers: ",even)
#     else:
#         print("Odd number")
#         for odd in range(1,nums,2):
#             print("sum of odd numbers: ",odd)
# x=int(input("Enter a numbers: "))
# ans=check_even_odd(x)
def factorial(n):
    if n<=0 or n==1:
        return 1
    else:
        return n*factorial(n-1)
    
nums=10
result=factorial(nums)
print("factorial is: ",result)
 

    