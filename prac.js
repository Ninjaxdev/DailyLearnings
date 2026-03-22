const bhabhiName="Fullstack Bhabhi"
console.log(bhabhiName)

let bhabhiSnacks=['chips','cold-drink','choclate','namkeen'] //array
bhabhiSnacks.forEach((snack)=>console.log(`snacks are:${snack}`))
bhabhiSnacks.push('jalebi')//to add element in array
bhabhiSnacks.forEach((snack)=>console.log(`snacks are:${snack}`))

let bhabhiProfile={   //object
    name:'DP',
    age:32,
    codingSkill:'c++'
};
console.log(bhabhiProfile.codingSkill)

let price=150
let isPriceRange=(price>=100 && price<=300)
console.log(`is price range btw 100 and 300 ${isPriceRange}`)

//control flow

let hungerlevel=1;
if(hungerlevel>7)
    console.log('its time for biryani')
else if(hungerlevel>3)
    console.log('have a tea or coffee')
else
   console.log('have a juice')

//ternary operator
let meal=hungerlevel>5 ?"full thali":"maggie"
console.log(meal)

//switch case

const day=2

switch(day)
{
    case 1:
        console.log("sunday hai ji")
        break;
    case 2:
        console.log("monday hai ji")
        break;
    default:
        console.log("bekar hai ji apki aankein")
        break;
}
//loops in javascript
for(let i=0;i<5;i++)
    console.log(i)

let i=5
while(i<10)
{    
    console.log('javascript jinda baad')
    i++;
}   
 let j=10
do{
console.log("hello bhabhi")
}while(j<-1)
//for each loop ->specificlly for array(use:when you need to perform an action for each element in an array)

const colors=['red','black','grey','white','blue']

/*colors.forEach(function(color){
    console.log("i like " + color)
});*/

colors.forEach(color=>{
    console.log(`color is ${color}`)
});

const age=20
if(age>18)
    console.log("welcome to bhabhi's coding club")
else
   console.log("study first")

fruits=['apple','banana','orange','pear','berry']
fruits.forEach(fruit=>{
    console.log(`Bhabhi's fruit :${fruit}`)
});

//function

//declaration
function cookDish(dish)
{
    return `Bhabhi cooked ${dish}`;
}
console.log(cookDish("paneer tikka"))
//expression
const eatDish=function(dish){
    return `yum,eating ${dish}`
}
console.log(eatDish("curry"))
//Arrow function-new way of writing function nothing more!
const spieceLevel=(dish,level="high")=>`${dish} is ${level} spicy`
console.log(spieceLevel("paneer"))

function greetBhabhi(name)
{
    return `Namaste,${name} ! bhabhi's coding with you` 
}
console.log(greetBhabhi("rohan")+" fulstack bhabhi")

triplet=(number)=>3*number
console.log(triplet(30))

const makeChai=(sugar="ture")=>`Chai is ready,sugar:${sugar}`
console.log(makeChai())

//Module 2 array and objects

let bhabhiRecipes=['Biryani','Dosa','Butterchicken']
bhabhiRecipes.push('PaVbHAji') //add
bhabhiRecipes.forEach((dish)=>console.log(`${dish}`))
bhabhiRecipes.pop() //remove
bhabhiRecipes.forEach((dish)=>console.log(`${dish}`))
//map()->create a new array from calling a function for every array element,does not change the original array
const numbers=[4,9,36,400,25]
const newArr=numbers.map(Math.sqrt)
newArr.forEach((i)=>console.log(`${i}`))
const newBrr=numbers.map(fun)
function fun(num)
{
  return num*10
}
newBrr.forEach((i)=>console.log(`${i}`))
//filter()->create a new array filled with elements that pass a test provide by a function,doesnot change the original array
const ages=[1,2,5,17,18,16,20,25]
const result=ages.filter(checkAdults)
function checkAdults(age)
{
    return age>=18
}
result.forEach((k)=>console.log(`${k}`))
//reduce()->execute reduce function for array elements,return single value and doesnot change the original array
const a = [2, 4, 6];
// Use reduce to calculate the sum
const sum = a.reduce((acc, x) => acc + x, 0);
console.log(sum);
/*function sum2(acc, x) {
  return acc + x;
}
const sum = a.reduce(sum2, 0);*/

const b=[4,6,8,10,12]
const product=b.reduce((p,i)=>p*i,1)
console.log(product)

//find()->find the first occurance if multiple exsist in an array

const number=[1,2,5,7,8,9]
const even=number.find(num=>num%2==0)
console.log(even)

Bhabhisong=['chumki chori','silki baand','maya baand','pushpa chori','chaita ki chaitwalia']
Bhabhisong.push('dhudki baand')
Bhabhisong.forEach((song)=>console.log(song))

const playlis=Bhabhisong.map((song)=>console.log(`Bhabhi jam to ${song}`))
const longName=Bhabhisong.filter(fun)
function fun(song)
{
    if (song.length>15)
       return song
}
longName.forEach((i)=>console.log(i))

Bhabhiplaylist=Bhabhisong.reduce((acc,current,index)=>{
    if(index==0)
        return `bhabhi's playlist:${current}`
    else
        return `${acc},${current}`
},"")
console.log(Bhabhiplaylist)

//object

let bhabhiCookbook={
    dish:'Biryani',
    spices:['cumin','cardamom'],
    cook:function(){
        return `cooking ${this.dish}!`
    }
};
console.log(bhabhiCookbook.dish)
let{dish:foodName,spices}=bhabhiCookbook //destructuring->unpack values from array or object into distinct variables,
//helps to extract data{here it take dish and spices property from bhabhicook book and assign their value to new variables named dish and spices}
//renaming->{orignalNAME:new name}=object
let newRecipe= { ...bhabhiCookbook,serves:4} //spread(...)->shallow copy from one object content to other,
// putting together or expanding an object properties into new object
//console.log(bhabhiCookbook.foodName) //it give undefined value as foodName is new variable independent
//it has no relation with object i.e foodName is not a property of object(bhabhicookbook)

let bhabhiStyle={
    color:'black',
    outfit:'indian',
    wear:function()
    {
        return`bhabhi's rocking in ${Bhabhiplaylist.outfit}!`
    }
}
console.log(bhabhiStyle.color)
let{color,outfit}=bhabhiStyle
let newStyle={...bhabhiStyle,jewelry:'diamond necklace'}
console.log(newStyle.jewelry)

//Module 3:DOM manipulation

//selector:querrySelector,querySelectorAll,getElementById
//updates:textContent,innerHTML,style,classList

/*let title=document.querySelector("h1")
let buttons=document.querySelectorAll(".bhabhi-btn")

title.textContent="Bhabhi's coding kitchen"
title.style.color="purple"
buttons.forEach((btn)=>btn.classList.add("fancy-btn"))*/

/*DOM->document object model(tree like structure)
4 pillar of DOM .1)selection of an element 2)changing HTML 3)changing css 4)event listener
1)var a= document.querySelector("h1")->is se html ke koi bhi element  ko select kr skte hn
2) a.innerHTML="changed h1 content"->innerHTML se content change kr skte ho html element ka
3) a.style.backgroundColor="blue" ->css property change kr skte hain
4) a.addEventListener("click",function(){
   console.log("hey")
    })
*/
/*let ptag=document.querySelector("p")
ptag.innerHTML="Bhabhi's code is spicy"
let d=document.querySelector("div")
d.style.backgroundColor="yellow"
//imp
let bhabhiItem=document.querySelectorAll(".bhabhi-item")
bhabhiItem.forEach(item=>{
    item.classList.add("glow")
})*/
//if div is exsisting already
/*let tardiv=document.querySelector("div")
if(tardiv)
{
    tardiv.innerHTML +="<span>Bhabhis magic</span>"
}*/
//if div is not exsist

/*let newDiv=document.createElement("div")
newDiv.innerHTML="<span>Bhabhi's magic</span>"
document.body.appendChild(newDiv)*/

//event handling in js

//Events:click,input,submit
//Listeners:addEventListener
//javascript mae event sequentially run hote hain(jada trr) 
//event kisi activity pr invoke hote hn
//pdhna hai imp->type,timestamp,defaultPrevented,target,toElement,srcElement,currentElement,clientX,clientY,altkey,keyCode

document.getElementById('owl').addEventListener('click',function(e){
   FontFaceSetLoadEvent.log(e)// alert('owl clicked again')
},false/true)
//e->event object
//false/true ko bolte hn event propagation (by default:false) ,event bubbling and event capturing jo cheeze hoti hn event propagationg mae
//false:event bubbling,bubling ka mtlb inside se outside(bottom se top) ture:event capturing,(top se bottom)

document.getElementById('images').addEventListener('click',function(e){
    console.log("clicked inside the ul")
},false)
document.getElementById('owl').addEventListener('click',function(e){
    console.log("owl clicked")
},false)
/*<ul><image1></image1>
<image2></image2>
<owl></owl>
<image4></image4>
</ul>*/
//jb image 1 pr click krenge to clicked inside the ul ayega ,
// pr jb owl pr click krenge to owl clicked and then clicked inside the ul ayega
document.getElementById('images').addEventListener('click',function(e){
    console.log("clicked inside the ul")
},true)
document.getElementById('owl').addEventListener('click',function(e){
    console.log("owl clicked")
},true)
//ab jb owl pr click krenge toh phle clicked inside the ul ayega then owl clciked
//ki baar hm chahte hain bubbling na ho to stopPropagation() ka use krte hn
document.getElementById('owl').addEventListener('click',function(e){
    console.log("owl clicked")
    e.stopPropagation()
},false)
//ise se bubbling nhi hogi or owl clicked hi ayega bs
document.getElementById('google').addEventListener('click',function(e){
    console.log('google clicked')
    e.preventDefault()
},false)






























































