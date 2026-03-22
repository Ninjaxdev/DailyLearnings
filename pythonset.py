# set in python

# set : unordered,mutable,no duplicates

myset={1,2,3,4,5,6,2,4,6}
print(myset)

myset1= set([1,2,3]) #set through iterables
print(myset1)

myset2 = set("hello") #set via string
print(myset2)

myset3=set() #thats how you declare empty set not myset3={}

myset3.add(1) # add element to the set
myset3.add(2)
myset3.add(3)
myset3.add(4)
myset3.add(5)
myset3.remove(5) #remove() element from the set ,remove method give error if element not found
myset3.discard(4) #discard() used to delete element,discard does not give error if element not found 
item=myset3.pop()
print("item removed",item)
#myset3.clear() # clear() it empty the set
print(myset3)

for i in myset3:
    print(i)

print(2 in myset3) #to check if 2 is present in the set or not 

# NOTE: UNION,INTERSECTION,DIFFERENCE DOES NOT MODIFY EXISTING SET ,THEY ALWAYS RETURN THE NEW SET

odds ={1,3,5,7,9}
evens ={0,2,4,6,8}
primes ={2,3,5,7}

u=odds.union(evens) #union combine two sets without duplication
print("union of two sets",u)

i=odds.intersection(evens) #intersection print common element present in both sets
print("intersection of two sets",i)

setA={1,2,3,4,5,6,7,8,9}
setB={1,2,3,10,11,12}

diff=setA.difference(setB) #elements in setA that does not present in setB
print(diff)

symdiff=setB.symmetric_difference(setA) #elements in setA and setB that are not common
print(symdiff)

# YOU can modify set inplace also

set1={1,2,3,4,5,6,7,8,9}
set2={2,3,5,7,11}

#set1.update(set2) #union
#set1.intersection_update(set2) #intersection (common elements)
#set1.difference_update(set2) # elements of set1 that doesnot present in set2
set1.symmetric_difference_update(set2) #prints element from both sets that are not common between both sets.
print(set1)

set3={1,2,3,4,5,6}
set4={1,2,3}

print(set4.issubset(set3)) #subset : every element of set4 present in set3
print(set3.issuperset(set4)) #super set: the set that contain all the elements
print(set3.isdisjoint(set4)) #disjoint : when both sets have nothing common.

# copying a set

setg={1,2,3,4,5}
#seth=setg #pointing to same memory
#seth=setg.copy() # actual copy,both sets pointing to different memory location
seth=set(setg) #actual copy
seth.add(8)
print(seth)
print(setg)

d=frozenset([1,2,3,4,5]) #you cant made changes once it is created.
#d.add(6) #gave error 
print(d)














































