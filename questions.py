# print("HELLO WORLD")
"""
num1=int(input("Enter the value of num1"))
num2=int(input("Enter the value of num2"))
print(f"sum of {num1} and {num2} is :",num1+num2) """

"""
list=[1,5,6,87,-2,47]
list.sort()
n=len(list)
print("minimum value in list is :",list[0])
print("maximum value in list is :",list[n-1]) """

"""
def check_palindrome(str):
    l=0
    h=len(str)-1
    
    while(l<=h):
        if(str[l]!=str[h]):
            return False
        else:
            l=l+1
            h=h-1
    return True

str=input("enter the string :")
p=check_palindrome(str)
if(p):
    print("entered string is palindrome")
else:
    print("entered string is not palindrome")
"""
"""
def compound_intrest(p,t,r,n):
    j=1+(r/n)
    i=n*t
    a=p*pow(j,i)
    return a

p=int(input("enter the principal amount :"))
t=int(input("enter the time period:"))
r=float(input("enter the rate of intrest :"))
n=int(input("enter no of times :"))
amount=compound_intrest(p,t,r,n)
print("the compound intrest is :",amount) """
"""
list = [1,-4,5,-6,3,99,-100]
n=len(list)
sum=0
for i in range(n):
    if(list[i]>=0):
        sum+=list[i]

print("the sum of positive integers are :",sum) """

"""
a,b=input("enter two values :").split()
print(f"before swap :value of {a} and {b} ")
a,b=b,a
print(f"after swap :value of {a} and {b} ") """

"""
str=input("enter the sentence :")
word =str.split(" ")
n=len(word)
count=0
for i in range(n):
    if(word[i]!=" "):
        count+=1

print("total no of words in string is:",count) """

"""
def convert_days(days):
    years=days//365
    remaining_days_after=days%365
    weeks=remaining_days_after//7
    remaining_days=remaining_days_after%7
    print(f"years : {years} , weeks :{weeks}, remainig days :{remaining_days}")

days=int(input("enter the no of days:"))
convert_days(days) """

"""
class person:
    def __init__(self,name,age,test_score):
        self.name=name
        self.age=age
        self.test_score=test_score

p1=person("rohan",18,45)
p2=person("roshan",19,50)
print(f"name of the person is {p1.name} and age is {p1.age} having average test score {p1.test_score}")
print(f"name of the person is {p2.name} and age is {p2.age} having average test score {p2.test_score}") """

"""
str1=input("enter the string :")
str2=input("enter the string :")
print("concatenation of two string is :",str1) """

"""
fruits=["apple","banana","blueberry","grapes","pineapple"]
for fruit in fruits:
    print(fruit) """

"""
numbers=[1,2,3,4,5,6]
sum=0
avg=0
n=len(numbers)
for i in numbers:
    sum+=i
avg=sum/n
print(f"sum of number is {sum} and average is {avg}") """

"""
s=input("enter the string :")
r=s[::-1]
print(f"string is {s} and reverse string is {r}") """

"""
names=["ravi","shyam","ram","om","raghav","ramesh"]
n=len(names)
str=' '
for name in names:
    str=name+" "+str

print("concatenation of names :",str) """

#check if a string is panagram(contain all leters of alphabet)
'''
str=input("enter the string :")
freq=[False]*26
for i in str:
    if 'a'<=i<='z':
        freq[ord(i)-ord('a')]=True
    elif 'A'<=i<='Z':
        freq[ord(i)-ord('A')]=True
isPanagram=True
for flag in freq:
    if not flag:
        isPanagram=False
        break

print("True" if isPanagram else "False")'''
    
#check if entere year is leap year or not
'''
def leap(year):
    last=year%100
    if(last!=0):
        if(last%4==0):
            return True
        else:
            return False
    else:
        if(year%400==0):
            return True
        else:
            return False

year=int(input("enter the year"))
result=leap(year)
if(result==True):
    print(f"{year} is a leap year")
else:
    print(f"{year} is not a leap year")'''
    
#print all name starting with letter a from list of names
'''
names=[]
n=int(input("how many name you wanna enter:"))
for i in range(n):
    name=input("enter the name :")
    names.append(name)
for k in names:
    j=k[0:1]     
    if(j=='a' or j=='A'):
        print(k)'''

#multiplication table of a given no
'''
n=int(input("enter the no:"))
for i in range(1,11,1):
    print(f"{n}X{i}=",n*i)'''

#calculate factorial of a no
"""
def factorial(n):
    if(n==1):
        return 1
    return n*factorial(n-1)

n=int(input("enter the no:"))
fact=factorial(n)
print(f"factorial of {n} is {fact}")"""

#print all prime no btw 1 to 50
'''
import math
prime=[]
def checkPrime(n):
    if(n<=1):
        return False
    for i in range(2,int(math.sqrt(n))+1):
        if(n%i==0):
            return False
    return True

for i in range(1,51,1):
    if(checkPrime(i)):
        prime.append(i)

print(prime)'''

#print words from the list that has length greater than 5
'''
words=['aman','rohansingh','india','peacock','social','sub']
n=len(words)
for i in words:
    if(len(i)>5):
        print(i,end=",")'''

# function to calculate area of circle
'''
import math
def area(radius):
    area=math.pi*radius**2 
    return area

radius=float(input("Enter the radius:"))
a=area(radius)
print("area of circle is:",a)'''

#function that reverse the string
'''
def reverse(str):
    rev=str[::-1]
    return rev

str=input("enter the string:")
r=reverse(str)
print(f"the string is {str} and reverse of string is {r}") '''

#concatenation of two list
'''
def concat(list1,list2):
    list=list1+list2
    return list

list1=[2,4,6,8,10]
list2=[3,6,9,12,15]
l=concat(list1,list2)
print(f"list 1={list1} + list 2={list2} is {l}")'''

def common(list1,list2):
    list=[]
    n=len(list1)
    for i in range(n):
        if(list1[i] in list2):
            list.append(list1[i])
    return list

list1=[2,4,6,8,10,12,18]
list2=[3,6,9,12,15,18]
l=common(list1,list2)
print(f"list 1={list1} , list 2={list2} common {l}")












































































