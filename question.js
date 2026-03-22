var name="rohit";
console.log(name);
var name="chand"
console.log(name)
//if you take let instead of var you get an error
//you can do this and result came normal
let aa=100;
aa=99;
console.log(aa);

console.log("Rohit","coding");
console.log(45*2-10);
const dt=new Date;
console.log(dt.getFullYear());
let first="ROHIT";
let last="CHAND";
console.log(first+" "+ last);
console.log(`${first} ${last}`);
//console.error("hi"); -> work on browser
console.log(12**2); // ** -> for raise to power 

var a=true;
console.log(typeof(a)); //typeof(var) -> tell type

let age=2;
age>=18?console.log("greater than 18"):console.log("minor");

console.log(100/0);

const pi=Math.PI;
console.log(pi);

console.log(typeof(null)); //Object
console.log(typeof(NaN)); //Number
console.log(NaN===NaN); //false 
console.log(null===null);
let c="25"
console.log(typeof(c));

let d="25"/25;
console.log(typeof(d));
console.log(d);

let e=25+"25"+25; //+ concat hota hai to string bnta hai
console.log(typeof(e));
console.log(e);

let t=true;
console.log(typeof(t));
console.log(t);

let v;
//const v; it gave an  error
console.log(typeof(v)); //undefined 

const arr=[1,2,3,"array",true]; //mutable,distinct data-types
//Note : you can't reassign const value but you can update it.
console.log(typeof(arr)); //object
console.log(arr);

let u=undefined; //undefined type is undefined
console.log(typeof(u));
/*
const g=10;
g++; //you think you are updating but g=g+1; this is assignment
*/

//loops

for(let i=1;i<50;i++)
    console.log(i);

//console.log(i); it gave error but if we declare using var it wont gave any error
let sum=0,i=0;
while(i<=10)
{
    sum+=i;
    i++;
}
console.log(`sum of no from 1 to 10 is ${sum}`);

let str="javascript";
for(let ch of str)
{
    console.log(ch);
}



















































































