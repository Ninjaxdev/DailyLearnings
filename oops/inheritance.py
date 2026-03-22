
#Inheritance allows a child class to reuse code from a parent class.
#Instead of writing the same code again, the child class inherits everything from the parent.

class Animal:
    def __init__(self,name):
        self.name=name
    def eat(self):
        print(f"{self.name} is eating")
    def sleep(self):
        print(f"{self.name} is sleeping")

class Dog(Animal):
    def bark(self):
        print(f"{self.name} says woof!!")

d=Dog("Snow")
d.eat()
d.sleep()
d.bark()


#SUPER() :IS USED TO CALL PARENT CONSTRUCTOR TO INITIALIZE PARENTS DATA

class vehicle:
    def __init__(self,name1):
        self.name1=name1

class truck(vehicle):
    def __init__(self,name1,type):
        super().__init__(name1) #way of telling take value of name variable from parent
        self.type=type


t=truck("american loader","heavy")
print(t.name1)
print(t.type)

# Method overriding :child class can redefine its parent method to change its behaviour

class human:
    def speak(self):
        print("some sound")
class men(human):
    def speak(self):
        print("sound is deep")
class women(human):
    def speak(self):
        print("sound is soft")
class child(human):
    def speak(self):
        super().speak() #call parent version of speak , when you want to extend parents method not completely replace it
        print("slow and cute")

h=human()
m=men()
w=women()
c=child()
h.speak()
m.speak()
w.speak()
c.speak()


# Inheritance types : single,multiple,multilevel,herarchical,hybrid

# SINGLE INHERITANCE

class A:
    def eat(self):
        print("eat somethingh")
class B(A):
    def voice(self):
        print("speak somethingh")

b=B()
b.eat()
b.voice()

# MULTI-LEVEL INHERITANCE

class one:
    def car(self):
        print("i have lamborgini")
class two(one):
    def followers(self):
        print("i have 100 million followers")
class three(two):
    def bank(self):
        print("i have account in citylfy bank")

t=three()
t.car()
t.followers()
t.bank()

# MULTIPLE INHERITANCE : one child inherit from two or more parents

class man:
    def father(self):
        print("i am man,the father")
class woman:
    def mother(self):
        print("i am woman,the mother")
class child(man,woman):
    def baby(self):
        #self.father()
        #self.mother()
        man.father(self)
        woman.mother(self)
        print("i am the children")

ch=child()
ch.baby()

# Hierarchical Inheritance : one parent and multiple childrens

class parambraham:
    def action(self):
        print("parambraham")
class shiv(parambraham):
    def destroyer(self):
        print("destroyer")
    
class brahma(parambraham):
    def creator(self):
        print("creator")
class durga(parambraham):
    def power(self):
        print(power)
class vishnu(parambraham):
    def protector(self):
        print("protector")

sh=shiv()
sh.action()
b=brahma()
v=vishnu()
du=durga()
du.action()

# Hybrid inheritance : combination of two or more type of inheritance

class mother:
    def mummy(self):
        print("mother")
class sister(mother):
    def mom(self):
        print("mother")
class husband:
    def father(self):
        print("father")
class child(sister,husband):
    pass

chil=child()

# MRO : METHOD RESOLUTION ORDER
# In multiple/hybrid inheritance, if two parents have the same method, Python follows MRO to decide which one to call.

class A:
    def hello(self):
        print("Hello from A")

class B(A):
    def hello(self):
        print("Hello from B")

class C(A):
    def hello(self):
        print("Hello from C")

class D(B, C):
    pass

d = D()
d.hello()        # Hello from B — follows MRO
print(D.mro())   # [D, B, C, A, object] Python searches left to right, depth first — so it checks D → B → C → A.













































































