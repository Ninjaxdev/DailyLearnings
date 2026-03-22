# Tuple : ordered,immutable(can't change after creation),allows duplicate elements
# working with tuple is more efficient when you are working with large data than list
mytuple ="Max",25,"boston"
print(mytuple)

t=("maxxy",) #  if you dont put , then it is considered as string
print(type(t))

tuple1=tuple(["Madan",28,"Dehli"]) # tuple(iterable) method to create tuple from iterable
print(tuple1)

items=mytuple[0] # tuple ke bhi index 0 se start hota hai. and -1 index refers to last element
print(items)

# tuple1[0]="rohan" this is not possile as tuple are immutable

for i in tuple1:
    print(i)

if "rohan" in mytuple:
    print("yes")
else:
    print("NO")

a=('a','e','i','o','u','a','i')
print(len(a))
print(a.count('a')) #count no. of item you have given
print(a.index('a')) # return index of first occurence
print(min(a)) #return min from tuple
print(max(a)) #return max  from tuple
#print(sum(a)) #return sum of tuple

#slicing in tuple

mytuple1=(1,2,4,5,6,7,8)
cop_tuple=mytuple1[1:5]
print(cop_tuple)

# unpacking in tuple 

unpacktuple = "RC",25,"Mumbai"
name,age,city=unpacktuple # NOTE  : no of arguments in left hand side must be equal to no of argument in tuple
print(name,age,city)

unpack2=(1,2,20,3,4,5,7,8,9)
i1,*i2,i3=unpack2
print(i1,i2,i3)

#nested mae kese acess krte hn 
tuple2='a',[2,5,6],"rohan",57
print(tuple2[1][2])



































