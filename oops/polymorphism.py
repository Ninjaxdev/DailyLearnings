#Polymorphism : same thing, different forms.

#type : method overriding , method overloading ,operator overloading, duck typing

# METHOD OVERRIDING : When a child class defines a method with the same name as a method in the parent class,
#  the child's version replaces the parent's version for that object.

class Animal:
    def speak(self):
        print("some generic sound") # parent version
    
class Dog(Animal):
    pass # it search in parent class
    #def speak(self): #override version
       # print("woof woof")
       

d=Dog()
d.speak()

# Overriding with super() ->extending parent behaviour

class varn:
    def action(self):
        print("classification based on work")
class kshatriya(varn):
    def action(self):
        super().action()
        print("right to battle and protect")

k=kshatriya()
k.action()

# Overriding __init()__ : constructor

"""
class university():
    def __init__(self,name):
        self.name=name
        print(f"name of the university :{self.name}")

class college(university):
    def __init__(self,name,type):
        super().__init__(name) # if you don't call super it never initiallized name
        self.type=type
        print(f"college name is {name} and college is specialized in {type}")

c=college("sd","commerce")
"""
class university():
    def __init__(self,uniname):
        self.uniname=uniname
        print(f"name of the university :{self.uniname}")

class college(university):
    def __init__(self,uniname,clgname,type):
        super().__init__(uniname) # if you don't call super it never initiallized name
        self.clgname=clgname
        self.type=type
        print(f"college name is {clgname} and college is specialized in {type}")

c=college("pu","sd","commerce")

class Payment:
    def __init__(self, amount):
        self.amount = amount

    def pay(self):
        print(f"Paying {self.amount}")

class CreditCard(Payment):
    def pay(self):
        print(f"Paying {self.amount} via Credit Card")

class UPI(Payment):
    def pay(self):
        print(f"Paying {self.amount} via UPI")

class Cash(Payment):
    def pay(self):
        print(f"Paying {self.amount} via Cash")

payments = [
    CreditCard(1000),
    UPI(500),
    Cash(200)
]

for payment in payments:
    payment.pay()
# Paying 1000 via Credit Card
# Paying 500 via UPI
# Paying 200 via Cash


# DUCK TYPING :Python doesn't care about the type of the object, only whether it has the method being called.
# Duck Typing is fails at runtime
class Human:
    def speak(self):
        print("a type of voice")
class Man(Human):
    def speak(self):
        print("voice is deep and harsh")
class Woman(Human):
    def speak(self):
        print("voice is soft and high pitched")
def robot(obj):
    obj.speak()

robot(Man())
robot(Woman())

#Python doesn't check if Robot is an Animal. It just checks — does this object have a speak method?If yes, call it.

# Method overloading : Python doesn't support this directly but achieves it using default arguments.

class calculator:
    def sum(self,a,b,c=0,d=0):
        return a+b+c+d
    
calc=calculator()
print(calc.sum(1,2))
print(calc.sum(1,2,3))
print(calc.sum(1,2,3))
print(calc.sum(1,2,3,4))
#print(calc.sum(1)) #giving error

# OPERATOR OVERLOADING : Operator overloading means giving new meaning to existing operators for your custom objects using dunder methods.
"""
By default + only works on numbers and strings. But what if you want to add two Point objects or two Bag 
objects? You define __add__ to tell Python what + should do for your class.

operator you can overload :

walrus operator (:=) : It assigns a value to a variable and returns that value at the same time — in a single expression.


identity operator (is) : checks if two variables point to the exact same object in memory. This can never be overloaded — it's a fundamental Python concept.
logical operator (and,or,not) : Python evaluates these based on truthiness of the object, not a dunder method. You can influence truthiness via __bool__ but you cannot overload and/or/not themselves.
"""


"""
What are Magic/Dunder Methods?
Dunder means Double Underscore.They are special methods that Python calls automatically behind the scenes
 when you perform certain operations.

EG X=5+6
X=int.__add__(5,6)

"""
class point:
    def __init__(self,x,y):
        self.x=x
        self.y=y

    def __add__(self,other):
        return point(self.x+other.x,self.y+other.y)
    def __sub__(self,other):
        return point(self.x-other.x,self.y-other.y)
    def __str__(self): # print calls __str__ behind it so we dont get ugly memory address
        return f"point({self.x},{self.y})"


p1=point(4,5)
p2=point(6,8)

print(p1,p2)
print(p1+p2)
print(p1-p2)


# walrus operator(:=) : mostly used in while loop

n=10
if(n>5):
    print(n)

if(o:=10)>5: # walrus operator assignment and use at the same time
    print(o)



