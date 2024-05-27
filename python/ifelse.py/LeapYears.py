# for print leap year or not 2023,1899,1999,2025,all of these are checking leap year or not.
year=int(input("Enter a years"))
if year%400==0 and year%100!=0 or year%4==0:
    print("it is leap years")
else:
    print("it is not leap years")
