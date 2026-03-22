console.log("hello world");
console.log(2+3);
//document.writeln("helLO");
const id=14553 //constant
let emailId="rohitchand@gmail.com";
var accoundPassword="hi123"; //do not use var because var has block and functional scope issue
accountCity="chandigarh";
let accountState //if you note assign value to variable it is undefined
console.table([id,emailId,accoundPassword,accountCity,accountState]);

/*
   variable->it is a container that store data
   var mobile="samsung";
   mobile="iphone";
   var ->change ho jata hai but not used as it has block and functional scope issue

   const mobile="nokia";
   mobile="redmi";\
   const ->gave error cause we cant change value of a variable once we declare it constant

   Q)difference btw var ,let and const ??
   A)js version 1)Es-5 (var) Es-6 (let and const)
   let braces scoped hota hai and var functioned scoped hai
   var adds itself to window object and let,const doesn't add itself
   eg: function test(){
        for(var i=1;i<5;i++){
        console.log(i);  
        }
        console.log(i)
       }
        var (result)->inner console(1,2,3,4,)5<- outter console
        let (result)->inner console(1,2,3,4) error<-outter console

    window object(box of feature ):js mae kuch features/cheze nhi hote and js unh features ko browser ke 
    particular object : window se borrow krke use kr skta hain.
    eg:alert,prompt,console,document etc
*/
/* 
 Browser Context API -> Window , Stack , Heap
 window vs document,BOM (BROWSER OBJECT MODEL) VS DOM (DOCUMENT OBJECT MODEL)







*/

/*
  Hoisting->variable banne se phle use kr skte hain
  variable and functions are hoisted which means there declaration is moved on the top of the code;

  var a=12;
  var a; //declaration
  a=12;//initialization

  eg: console.log(b); //undefined
       var b=12;
 undefined ->existance hai pr value nhi pta or not defined ->exsistance hi nhi hai

*/
"use strict"; //treat code according to newer version of js ->it's by default no need to write
//alert(5+4) ->give error as we are using nodejs not browser

/*
data types

number =58 range 2^53
BigInt= 1234n ->very large integer
String
Boolean
NULL->representation of empty value /standalone value
undefined ->not assigned value(abhi value assign nhi hui hai)
Symbol->uniqueness
object

*/
console.log(typeof null) //object
console.log(typeof undefined) //undefined
//NaN->NOT A NUMBER
//note:for type conversion write data type in capital letter in which type you wanna convert
let score="33"
let text="33abc"
Number(score)
let t=Number(text)  //type conversion 
console.log(score)
console.log(typeof(t)) //number
console.log(t) //Nan
//operators
console.log(2**5) //exponent
console.log("1"+2)
console.log(1+"2")
console.log("1"+2+2) //agar string first hai toh sab string mae convert honge
console.log(1+2+"2") //agar number first hai toh sb number mae convert honge
console.log(null>0)
console.log(null==0)
console.log(null>=0)
//note=>comparison operator convert null into a number ,treating it as 0 .
//=== -> it is a strict check, it not only check the value it also check the data type.
console.log("strict check eg:","3"===3)
console.log(5===5)

//notes:
/*
JavaScript is a dynamically typed language. This means that the type of a variable is determined at 
runtime, rather than at compile time. In dynamically typed languages, you do not need to explicitly 
declare the type of a variable when you create it. Instead, the type is inferred from the value assigned 
to the variable. 

there are two types of data types 1)Primitive 2)Non premetive(refrence)

1)premetive type->String,Number,Boolean,null,undefined,symbol,Bigint (stack memory used->copy value milti hai)
2)non premetive type->Array [],object {},function () (heap memory ->refrence ya orignal value milti hai)

 var a=[1,2,3,4]; //a->array hai mtlb refrence data type hai
 var b=a; (b=[1,2,3,4] aa gya ) //b mae a ka refrence pass kiya 
 b.pop(); (b=[1,2,3] and a=[1,2,3] ho jyega)//jo change b mae honge wo a mae bhi honge

*/

let bigNumber=1478552369n  //to make datatype BigInt use 'n' after the value or at the end of the value.
console.log(typeof bigNumber)

/*
//Object ->used to store related field of an entity
var a={}; ->blank object
let myObj={  //object declaration //iska data type function hai
    name:"rohit",
    age:22,
    gender:"male",
    qualification:"MCA",
    work:function(){} ->method
}
//how to access object value
console.log(myObj.name);
console.log(myObj["gender"]); //ese bhi obj ki values print kr skte hn
//update object property
myObj.name="OM";
console.log(myObj);

Object Destructuring : it allow user to extract properties from object and assign it to variables

const user ={
 name:"hero",
 email:"herobchayeg"a@gmail.com",
 country:"Ind",
 };

 without object desturcturing

 const name=user.name;
 const email=user.email;
 const country=user.country;

 with object desturcturing

 const {name:userName,email,country}=user; //name:userName wo hai rename/name change
 console.log(userName,email,country);

*/

/*
 Use function declarations → for utility/helper functions you’ll reuse.
 Use function expressions → when you want functions as values (pass around, closures).
 Use arrow functions → for callbacks, array methods, and when you don’t want a new this.
*/
//Function Expression → Not hoisted, only usable after the line it’s defined.
const myfunction=function() //iska datatype object function bola jata hai
{
    return "hello world";
}
console.log(myfunction); //hm sirf function call ko declaration ke baad hi call kr skte hain
//Function Declaration → Hoisted, can be called before it’s defined.
function cook(dish)
{
  console.log(`i am cooking ${dish}`)
}
console.log(cook("paneer-tika-masaka"));
/*Arrow functioin -> Not hoisted, ES6,Does NOT have its own this, arguments, or super →
Instead, it uses this from the surrounding scope (called lexical this).*/

const washDish = (dish) => {
    return `Washing ${dish}...`;
};
console.log(washDish("plates"));


//memory
//stack
let my_yt_name="Ninjax";
let other_yt_2=my_yt_name;
other_yt_2="gaming with me"

console.log(my_yt_name)
console.log(other_yt_2)

//heap

let user1={
    emailId:"myemail+yt@gmail.com",
    upiId:"pay@googlepay"
}
let user2=user1
user2.emailId="my2email@gmail.com"

console.log(user1.emailId)
console.log(user2.emailId)

//string
// + ->concatenate
const myname="rohit"
const state="uttrakhand"
console.log(`hello my name is ${myname} and i am from ${state}`)//using backticks modern way to concatenate(string interpolation)

const variable=new String('im variable')//string constructor
console.log(variable) 

/* conditional ->agar - magar ya esa hua toh - vesa hua toh

inmae se koi ek chlega 
if(10>9){ //->ya toh condition true hogi ya false
}
else if(){ }
else{
}
*/

/* 
  loops ->koi cheez repeatition mae hogi 
  for(let i=0;i<=10;i++)
      console.log("hello");

  let it=0;
  while(it<5)
{
   console.log(it);
   it++;
  }

*/
/*
ARRAY
array declaration
let heroes=["Batman","Superman","Ironman","Spiderman"]; //iska data type function hai
let a=[1,2,3,4,5,6,7];
a.push(9);
a.pop();
a.unshift(10); //add value at first index of an array
a.shift(); //remove value from first index of an array
a.splice(0,4);

map() : immutable and used to transform elements within an array and create new array with the transformed value 

const products = ["product1","product2","product3","product3"];

map () return new array , it take 3 argument currentValue,index,array

const displayItems = products.map(function(product){
  return "<li>"+product+"</li>"
});

const displayItems=products.map((product)=> "<li>"+product+"</li>");
console.log(displayItems)

filter() : returns new array and filter according to condition and it take function as an argument

const ages = [12,4,87,20,36,65,5]

const adults=ages.filter((age)=>age>18);
console.log(adults)

//spread operator ...

const arr1=[1,2,3,4]
const arr2=[7,8,9,10]
//const arr3=[5,6]
//const numbers=arr1.concat(arr3,arr2);
const numbers = [...arr1,5,6,...arr2] //... spread operator 
console.log(numbers);

const numbers=[1,2,3,4,5,6,7,8,9,10];
const [one, two, ... rest]=numbers;  o/p->1, 2, 3,4,5,6,7,8,9,10

we can also used it with objects 

const obj1={
 name:"ram",
};

const obj2={ 
 skills=["coding","music","dance","theater"]
};

const user={... obj1,... obj2,age:22};
console.log(user);

*/

//ternary operator

const marks=65;
const result=marks>50?"passed":"fail"
console.log(result);
/*
//Modules : it is a file that contain code to perform specific task ,it can contain variables,objects,functions etc.
//post.jsx
//export make thingh public 
export function post(){  
  console.log("this is post");
}

//main.jsx
import {post} from "path of the module ./post" ./->refer to current folder

function feed(){
  console.log("this is feed");
  post();
  post();
  post();
}
feed();
*/
/*
asyncronous programming : async await

async await >> promis chains >> callback hell

sync : jis sequence mae code/instruction  likha hai us sequence mae hi execute hoga 

async :due to sync programming,sometimes imp instructions get blocked due to
some previous instructions,which cause delay in the UI. async code execution allows to
execute next instructions immediatey and doesn't block the flow.

function hello(){
   console.log("hello");
}
setTimeout(hello,2000); 2sec=2000 milisec
or 
console.log("one");
console.log("two");
setTimeout(()=>{console.log("hello")},4000); //parallel run hoga
console.log("three");
console.log("four");

o/p : one two three four hello  ->async programming
*/
/*
callback function: It is a fun() that is passed as an argument to another function with
the intention of being executed later typically after the completion of some operation within
the receiving function.

callback hell :nested callbacks stacked below one another forming a pyramid structure.

function sum(a,b){
  console.log(a+b);
}
function calculator(a,b,sumCallback){
  sumCallback(a,b);
}

calculator(5,10,sum);
or 
calculator(1,101,(a,b)=>{console.log(a+b)});

function getData(dataId,getNextData){

  setTimeout(()=>{
    console.log("data",dataId);
    if(getNextData){
      getNextData();
    }
  },2000)
}

getData(1,()=>{
  getData(2,()=>{
    getData(3);
  });
});
*/

//to resolve callback hell problem there is something called promises

/*
promise: It is for "eventual" completion of task. it is an object in js.

let promise=new promise((resolve,reject)=>{...}) resolve and reject function with 2 handlers
promise states : 1)pending 2)fulfilled 3)rejected

resolve and reject are callbacks (functions) created/provided by js internaly resolve() ,reject()

//Note : general programming mae hme API'S Promise return krti hn and hm use bs handle krte hn

for fulfill : .then(res) & for reject : .catch(err) res and err are parameter through which we can acess resolve and reject values 


const getPromise=()=>{
   return new Promise((reolve,reject)=>{
   console.log("I am a promise");
   resolve("sucess");
   //reject("error")
  });
};

let promise=getPromise();

promise.then((res)=>{
  console.log("promise fulfilled");
});

promise.catch((err)=>{
  console.log("rejected");
});
*/
//promise chain










