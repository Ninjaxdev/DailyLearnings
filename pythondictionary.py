# dictionary {key:value}

student={'name':'johan','age':25,'courses':['math','cs','music']}
print(student['courses'][2])
#print(student['air'])
print(student.get('air','default value for keys not in dictionary')) # get not throw an error if key is not in the dictionary,it simply return none.

student['phone'] ='7502145632' #add key to dictionary
print(student)

#update() : to update value in a dictionary 
student.update({'name':'rahul','age':56,'courses':['science','chemistry','sports']})
del student['age']  #del used to delete key
course=student.pop('courses') #pop used to delete but return deleted value
print("course poped",course)
print(student)
print(len(student))
print(student.keys()) #print all keys
print(student.values()) #print all values
print(student.items()) #print all key:values

for key in student:
    print(key)

for key,value in student.items():
    print(key,value)





































