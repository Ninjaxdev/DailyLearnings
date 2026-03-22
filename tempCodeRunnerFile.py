import math
def area(radius):
    area=math.pi*radius**2 
    return area

radius=float(input("Enter the radius:"))
a=area(radius)
print("area of circle is:",a)