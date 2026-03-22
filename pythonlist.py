#list : ordered,mutable,allows duplicate elements

mylist=["apple","cherry","apple","grapes","papaya","kiwi"]
print(mylist)
mylist2=list()
print(mylist2)
mylist3=[5,True,"banana"]
print(mylist3)

fruit=mylist[0]  # 0 index refer to 1st index
fruit1=mylist[-1] # -1 index refer to last index
print(fruit1)

#item=mylist[8] ->out of index error 
#print(item) 
print("print all list items:")
for i in mylist:
    print(i)

#check if item is present in the list or not

if "cherry" in mylist:
    print("yes cherry is in the list"," ")
else:
    print("No")

print("no of items in the list :",len(mylist))

#append() method : add item at last of the list

mylist.append("orange")
print(mylist)

#insert(pos,item) : add item at specific index

mylist.insert(4,"muskmelon")
print(mylist)

#pop(): remove item from the last and also return it

var=mylist.pop()
print(var)

#remove(name) : remove item via name and do not return it.

var1=mylist.remove("kiwi")
print(mylist)

#clear() to remove all items

mylist.clear()
print(mylist)

#reverse()  ->does not return anythingh
print(mylist3)
mylist3.reverse()
print(mylist3)

#sort()
mylist=[1,-1,2,0,57,65-9,214]
mylist.sort()
print(mylist)
 
# NOTE : reversed() and sorted() return new object whereas sort() and reverse() are inplace method which 
#does not return anythingh instead they directly change the value

mylist4 = [0]*6  #create the list which have 6 0s
print(mylist4)

mylist5=mylist3+mylist  # + concatenation of two lists
print(mylist5)

# slicing :-> accessing sub part of the list

list6 = [1,2,3,4,5,6,7,8,9]

a=list6[1:5] # start:end:step ,end ->index is excluded ,step is optional and by default value of step is 1
print(a)

list_org=["apple","banana","orange","kiwi"]

#list_cpy=list_org #both list refering to the same memory

list_cpy=list_org.copy() # or list_cpy = list(list_org) or list_cpy=list_org[:]
print(list_cpy)
list_cpy.append("dragonfruit")
print(list_org) #orignal mae bhi dragonfruit aad ho rha hai
print(list_cpy)

#list comprehension

a=[1,2,3,4,5,6,7,8,9]
b=[i*i for i in a] # syntax [expression for in loop list]
print(a)
print(b)










