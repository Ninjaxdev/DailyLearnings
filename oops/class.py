class DOG:
    spieces="Guard" #class variable it can be access via class.name or obj.name
    def __init__(self,name,age):
        self.name=name #instance variable it can only be accessed via obj.name
        self.age=age
    def __str__(self):
        return f"spieces :{self.spieces} , name:{self.name} ,age:{self.age}"
    def sound(cls):
        print(cls,"sound:barking")
    

dog1=DOG("snow",0.1)
dog2=DOG("shadow",0.1)
#print(f"spieces :{dog1.spieces} , name:{dog1.name} ,age:{dog1.age}")
#print(f"spieces :{dog2.spieces} , name:{dog2.name} ,age:{dog2.age}")
print(dog1)
dog1.sound()
print(dog2)
dog2.sound()

