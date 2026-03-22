#you can do i++ or j-- in python it is not supported by python
"""
strings are immutable in python that means you cant change it once it was created 

str="hello"
str[1]='l'
print(str)  it will give an error

"""

#print("hello")
#this line is comment
""" multiline comments"""

#num=int(input("Enter the nos:"))  #thats how you take input 
#if-else
"""
if(num%2==0):
    print(f"{num} is even nos")
else:
    print(f"{num} is odd nos")
"""    
#using split() to take multiple inputs at run time
#we use str.split("delemiter") to split the string and split() return list of character 
# note: it don't work with type casting   
"""a,b=input("Enter two nos:").split()
print(f"value are {a} and {b}")
"""
#variable
"""
a=40
b=1.5
c="hello,what's up??"
print(a,b,c)
print(type(a))
print(type(b))
print(type(c))
num1,num2=14,69
print(num1,num2)
j=i=k=500
print(i,j,k)
"""
#object refrence :python variables hold refrences to obj not the actual obj's themselves
"""
a=5  #here a is refrencing to object 5
b=a  #here b is refrencing to object 5
print(a,b) 
print(id(a))
print(id(b))
#above : address of a and b is same cause they performing shared refrence
a="geeks" #here a is refrencing to other object
print(a)
print(id(a))
b=2.56 #here b is refrencing to other object
print(b)
print(id(b))
del a #using del we can delete an oject form memory
print(a) #it gives NameError

#how to check if the variable is of particular type
var=54
isinstace(var,int)
"""
#swap two nos
"""
a,b=input("Enter two nos").split()
print(f"value before swap{a} and {b}")
a,b=b,a
print(f"value after swap{a} and {b}")

#counting characters in a string

str=input("Enter the word:")
length=len(str)
print("length of the string word is:",length)
"""

#operators

#1.Arithmetic operators
"""
a=int(input("Enter the value for a:"))
b=int(input("Enter the value for b:"))
print("ADD",a+b)
print("Subtract",a-b)
print("Multiply",a*b)
print("Div",a/b)
print("floor div",a//b)
print("Mod",a%b)
print("exponention",a**b)
"""
#2.logical operator
"""
a=True
b=False
print("and",a and b)
print("or",a or b)
print("not",not a)
"""
#3 bitwise operator
"""
a=10
b=8

print("bitwise and",a & b)
print("bitwise or",a | b)
print("bitwise not",~a)
print("bitwise xor",a ^ b)
print("bitwise left shift",a >> 2)
print("bitwise right shift",a << 2)
"""
# identity operator -> is and is not
# both are used to check if two values are located on the same part of the memory
"""
a=47
b=96
c=a
print(a is b)
print(a is c)
"""
# membership operator -> in and not in
# they are used to test whether a value or variable is in a sequence or not
"""
list=[1,2.54,"shop",96]
print('a' in list)
print(1 in list)

# alternate to membership operator is ->operator.contains(sequence,value to be checked)

import operator

l=[14,36.547,"joy",'a',96]
print(operator.contains(l,75))
"""
#ternary operator -> on true if(condition) else on flase
"""
a=10
b=47
a=b if a>b else b
print(a)
"""
# age = int(input("Enter your age: ")) ->if you enter string it will gave you invalid literal error
# print("You are", age, "years old")

# print(input("enter the message:")) -> you can do this 

#keywords
"""
import keyword
print("keywords are:",keyword.kwlist)
"""
#match-case (conditional statement)
"""
num=2
match num:
    case 1:
        print("number 1")
    case 2:
        print("number 2")
    case 3:
        print("number 3")
    case 4:
        print("number 4")
    case _:
        print("default case")
"""
# jump statements->break,continue,pass,return

#functions 
"""
def sub(a,b):
    return(a-b)

print("subtraction is:",sub(5,9))
"""
#function to print prime nos
"""
def prime(n):
    for i in range(2,n):
        if n%i==0:
            return False
    return True


x=int(input("enter the nos"))
res=prime(x)
if(res):
    print(f"the no {x} is prime")
else:
    print(f"the no {x} is not prime")

"""

#class

class person:
    def __init__(self,name,age):
        self.name=name
        self.age=age

p1=person("ravi",25)
print(f"name of the peson is {p1.name} and age is {p1.age}")

















