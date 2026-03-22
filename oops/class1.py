class Dog:
    def __init__(self,name,breed): #constructor
        self.name=name
        self.breed=breed
    
    def bark(self):
        print(f"{self.name} says woof!!!")


my_dog=Dog("shadow","german shepherd")
my_dog.bark()

class Cat:
    def __init__(self,name,breed):
        self.name=name
        self.breed=breed

    def sound(self):
        print(f"{self.name} says meowww!!")

my_cat=Cat("oggy","tom cat")
my_cat.sound()

# if you dont create constructor then python automatically create a default constructor

class Student:
    def name(self):
        print("rohit chand")

st=Student()
st.name()


class Turtle:
    turtle_name="Mr.brown"
    def food(self,eat):
        self.eat=eat


t=Turtle()
t.food("carrot")
print(t.turtle_name)
print(Turtle.turtle_name)
print(t.eat)

class School:
    country="India" #country is same for every object
    def __init__(self,name,students):
        self.name=name
        self.students=students

school1=School("GMHS-41",100000)
school1.country="USA" #by changing country here ,country of only school1 is changed
school2=School("ryan-international",80000)

print(school1.name)
print(school1.country)
print(school2.name)
print(school2.country)


class Rat:
    pass  #pass is a keyword ,it used when you dont want to define anythingh but at the same time dont want to get an erro

rat=Rat()
rat.name="jerry"
rat.eat="cheez"
rat.sound="cheew"
print(rat.sound)


#scope of variable 


class Example:
    profession="SDE" #class variable
    def __init__(self,name):
        self.name=name #only accessible via object self.name:instance variable
    def interest(self):
        hobby="book reading" #local variable
        print("hobby")

print(Example.profession) #acess via class
e=Example("om")
print(e.name)
#print(name) #name : not accessible outside
print(e.profession) #acess via object
e.interest() #is krke hobby print hoga
#print(hobby) #work nhi krega

#method scope in class

class Frog:
    species="Amphibian"
    def __init__(self,name):
        self.name=name
    
    def info(self):
        print(self.name) #instance variable
        print(self.species) #class variable

f=Frog("tweark")
f.info()

#A regular method — needs an actual employee object to work (needs self)
#A class method — works on the class itself, not a specific employee (needs cls)
#A static method — just a utility function that logically belongs to the class but doesn't need the class or any object

#Class Method (@classmethod)

#Receives cls (the class itself) instead of self
#Can access and modify class variables
#Cannot access instance variables (no object exists) - Class methods cannot access instance variables because they only receive cls (the class), not self (a specific object). They have no way of knowing which object's data to use.
#Can be called without creating an object

class Employee:
    company="RT SOLUTIONS"
    def __init__(self,name,salary):
        self.name=name
        self.salary=salary
    
    @classmethod
    def from_string(cls,emp_string):
        name,salary=emp_string.split("-")
        return cls(name,int(salary)) #calls init internally
    
    @classmethod
    def change_name(cls,new_name):
        cls.company=new_name


e=Employee.from_string("SHIVOM-50000") #no object needed
print(e.name)
print(e.salary)
Employee.change_name("RTX LMT")
print(e.company)

#from_string is alternate way to create object 

#Static Method (@staticmethod)

#No self, no cls
#Cannot access instance or class variables
#Just a plain utility function that lives inside the class for logical grouping
#Can be called without creating an object

class EMP:
    def __init__(self,name,salary):
        self.name=name
        self.salary=salary
    
    @staticmethod
    def is_validsalary(salary):
        return salary>0

    @staticmethod
    def greet():
        print("welcome to the company")

EMP.greet() #called without any object
print(EMP.is_validsalary(68746321))
print(EMP.is_validsalary(-100))

# public VS private scope

#Python uses naming conventions (naming convention : how you can name your variable) to control access:
#You CAN access private variables if you really want to, but the naming convention tells you that you probably shouldn't.

class Tution:
    def __init__(self):
        self.name="RAJ" #public : anyone can access it
        self._salary=50000 # ._ this show variable is protected
        self.__age=23 # private variable

t=Tution()
print(t.name)
print(t._salary)
t._salary=98000
print(t._salary) 

#Python doesn't actually restrict it. The single underscore is just a message to other developers 
# saying (._)"this is for internal use, don't access it directly from outside."
#It's like a warning sign — Python won't enforce it, but you're expected to respect it.

#print(t.__age) #gives attribute error
print(t._Tution__age) #accessible via name mangling

#Python secretly renames __age to _Employee__age behind the scenes.
# This is called name mangling. It makes accidental access harder but doesn't make it fully impossible.
