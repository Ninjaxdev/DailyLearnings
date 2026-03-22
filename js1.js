console.log(NaN===NaN)  //false
console.log(2**5) //exponent
console.log("1"+2)
console.log(1+"2")
console.log("1"+2+2) //agar string first hai toh sab string mae convert honge
console.log(1+2+"2") //agar number first hai toh sb number mae convert honge
console.log(null>0)
console.log(null==0)
console.log(null>=0)
let a="1"+2;
console.log(typeof a); //string
let b=1+"2";
console.log(typeof b);
console.log(NaN==false) //false
console.log(NaN===false)
console.log("5"-2)
console.log("5"*2)

let myobj={
    name:"rohit",
    age:25,
    work(){
        return "software developer";
    }
};

console.log(myobj.name);
console.log(myobj.work()); //if you go for normal or arrow function do myobj.work() don't use console with it bec it'll return undefined.
console.log(myobj["age"])

//normal function hoisted hota hai

cook("paneer-tika");
function cook(dish){
    console.log(`i am cooking ${dish}`)
}

//expression 
//cookie() ->refrence error
const cookie=function()
{
   return "hello world";
}
console.log(cookie());

//primitive data type  (stack memory)

let myname="rohit"
let friendname=myname;
console.log(myname) //rohit
console.log(friendname) //rohit
friendname="mohit"
console.log(myname) //rohit
console.log(friendname) //mohit

//non primitive data type (heap memory) same value ya same hi refrence pass hota hai 

let arr=[1,2,3,4]
let newarr=arr;
console.log(arr) //1,2,3,4
console.log(newarr) //1,2,3,4
newarr.push(5);
newarr.push(15);
newarr.push(50);
console.log(arr)  //1,2,3,4,5,15,50
console.log(newarr) //1,2,3,4,5,15,50
arr.shift(); //remove value from 1st index of an array
console.log(arr) 
arr.unshift(10) //add value to first index
console.log(arr)
arr.splice(1,3) //delete arr elements form star,end index
console.log(arr)

//when not to use filter and map : when changing same array,when async logic inside,o(n),return new array
let a1=[1,2,3,4,5,6,7]
let b1=a1.map(n=>n*n);
console.log(b1)
const even=a1.filter(n=>n%2==0)
console.log(even)















