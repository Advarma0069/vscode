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
def first_10_odd(n):
    for i in range(0,11,2):
        print(i+1)
x=int(input("Enter a numbers: "))
ans=first_10_odd(x)