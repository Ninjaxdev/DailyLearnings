#collections : Counter,namedtuple,orderedDict,defaultdict,deque

#Counter() ->count the frequency of every letter in the string and stored it as dictionary

from collections import Counter
a="aaaabbbbccccccccccbdddddddddddde" #we can use here any other iterable like list,tuple,set,dictiionary
my_counter=Counter(a)
print(my_counter.keys()) #print only keys
print(my_counter.values()) #print only values
print(my_counter.items()) #print key value pair
print(my_counter)
print(my_counter.most_common(2)) #print list of tuple of most common element
print(my_counter.most_common(2)[1][0]) #it only print most common element ,you only need to navigate through indexes
print(list(my_counter.elements())) #it will print list containing all elment

# namedtuple : object type and similar to struct type

from collections import namedtuple

point =namedtuple('point','x,y,z') # namedtuple(classname,field)
pt=point(1,-6,9)
print(pt) #print fields with value
print(pt.x,pt.y,pt.z) #print fields value only

#OrderedDict :normal dictionary,remember the order of items inserted (used in older varsion)

from collections import OrderedDict
ordered_dict = OrderedDict()
ordered_dict['b']=2
ordered_dict['c']=3
ordered_dict['d']=4
ordered_dict['e']=5
ordered_dict['a']=1
print(ordered_dict)

#default dict : give default values to if key is not set yet

from collections import defaultdict
d=defaultdict(int)
d['a']=1
d['b']=2
print(d['c']) #not exist key c and it will give default value of data type you assigned

#deque : double ended qeue,insert and delte via both ends

from collections import deque
d=deque()

d.append(1)
d.append(2)
d.appendleft(9) #insert at left
print(d)
d.pop()
print(d)
d.popleft() #pop from left
print(d)
d.clear() #remove all the elements of deque
print(d)
d.extend([4,7,8,9,0,1,4]) #via extend(iterable) you can add as many elements
print(d)
d.extendleft([789,2025])
print(d)

d.rotate(1) #rotate element by 1 to the right
print(d)

d.rotate(-2) #rotate 2 elements from left to right 
print(d)

#itertools : collection of tools to handle iterators

#product : return product of the list

from itertools import product
a=[1,2]
b=[3,4]
prod=product(a,b)
print(list(prod))

#permutation : return all possible permutations of the list

from itertools import permutations 
alist=[1,2,3,4]
perm=permutations(alist,3) # 3 limit the length of permutation
print(list(perm))

#combination :

from itertools import combinations,combinations_with_replacement
c=[1,2,3,4]
comb=combinations(c,3) #3 is length which is mandatory to give
print(list(comb)) # without self repetation
comb_wr=combinations_with_replacement(c,2)
print(list(comb_wr)) #with replacement

#accumulate : by default it sum the elements,it take two arguments iterator,function.Basically it apply specific function to each element and store its result

from itertools import accumulate
import operator
e=[1,2,3,4]
acc=accumulate(e)
acm=accumulate(e,func=operator.mul)
print(e)
print(list(acc))
print(list(acm))

#GROUPBY : it will return an iterable that will return keys and group  

from itertools import groupby

def less_than_3(x):
    return x<=3

g=[1,2,3,4,5]
group_obj=groupby(g,key=less_than_3)
for key,value in  group_obj:
    print(key,list(value))

persons=[{'name':'sudhanshu','age':24},{'name':'sidhu','age':24},{'name':'om','age':26},{'name':'raghav','age':23}]
group_obj2=groupby(persons,key=lambda x:x['age'])
for key,value in group_obj2:
    print(key,list(value))

#infinite iterators : count,cycle,repeat

from itertools import count,cycle,repeat

for i in count(10): #it will start from 10 and count to infinity
    print(i)
    if i==16:
        break

for i in cycle('sudhanshu'): #it will cycle through the string and print each character one by one and it will repeat until you break it
    print(i)
    if i=='u':
        break

for i in repeat('sudhanshu',3): #it will repeat the string 3 times
    print(i)

# lambda function : it is a small anonymous function that can take any number of arguments but can only have one expression
# lambda arguments : expression

add5=lambda x:x+5
print(add5(125))

power=lambda a,b:a**b
print(power(2,5))





