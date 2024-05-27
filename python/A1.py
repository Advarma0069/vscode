# # num=int(input("Enter a numbers :"))
# # if num>0:
# #     print("positive number")
# # elif num<0:
# #     print("Negative numbers")
# # else:
# #     print("zero")
# # print("Enter  a  number :")
# # n=int(input())
# # for e in range(1,n+1):
# #     print(e,end=" ")
# def factorial(n):
#     if n==0 or n==1:
#         return 1
#     else:
#         return n*factorial(n-1)
# result = factorial(5)
# print(result)
def factorial(n):
    if n==0 or n==1 :
        return 1
    else:
        return n*factorial(n-1)
number=int(input("ENter a number: "))
result=factorial(number)
print("puting values of fact: ",result)