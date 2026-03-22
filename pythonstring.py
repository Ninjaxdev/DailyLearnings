# String --> ordered,immutable,text representation

my_string="Hello world,'i am a programmer'"
my_string1="""hello 
bro 
how are you""" #multi-line string
my_string="hi"
print(my_string)
#my_string[0]='a' #immutable ,it give you error,you can't change it
print(my_string)

char=my_string[-1]
print(char)

mystring="Hello World"
substring=mystring[1:5]
print(substring)

#concatenation : +
greeting="hello,"
name="tom"
sentence=greeting+" "+name
print(sentence)

for i in greeting:
    print(i)

print("e" in greeting) #in : check membership

mystring1="    Hello World   "
mystring1=mystring1.strip() #remove white space
print(mystring1)

string1="hello world"
print(string1.upper()) #upper() : used to convert char in uppercase

string2="MY NAME IS LOBOHOBO"
print(string2.lower()) #lower(): used to convert char in lowercase
print(string2.startswith("MY")) #check for specific character,substring startswith.
print(string2.endswith("OBO"))  #check for specific char,substring endswith.
print(string1.find('hello')) #find() use to find first ocurrence of letter/substring in a string
print(string1.count('o'))  #count() used to count no of letters in a string
print(string1.replace('world','universe')) #replace() - it will replace the word in the string,it will return new string does not change existing one
print(string1)

mylist=string2.split() #default delimitter is space in split() and provide list of split words
print(mylist)
new_string2=''.join(mylist) # ''.join() -> it will join all the split words from a list
print(new_string2)

my_list=['a']*6
print(my_list)

#bad code => since string is immutable ,my_string+=i in this line new string is created and assign it to my_string

my_string=''
for i in my_list:
    my_string+=i  #expensive method
print(my_string)

#good code =>
mystirng=''.join(my_list)
print(mystirng)

#formate string -> %,format(),f-Strings

var="Tom"
s1="the variable is %s" %var
print(s1)
var2=69
s2="the variable is {} and {}".format(var,var2)
print(s2)
var3='jerry'
print(f"the variable is {var3*3}") #evaluated at run time


































































