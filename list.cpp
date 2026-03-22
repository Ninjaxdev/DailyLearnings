//list container same as vector container insert() in vector is costly and push_front() in list is cheaper in terms of time complexity
//rest  all the function is same as vector
//deque is a container that provide fast insertion and deletion at both end
//stack follow lifo(last in first out)
//push,pop,top : they took O(1) time complexity
//queue follow fifo(first in first out) 
//all operation took O(1) time as stack
//priority_queue :largest valued element stayed at top
//its not a linear data structure inside it a tree data structure

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //list
    list<int> ls;
    ls.push_back(2);
    ls.push_front(4);
    ls.emplace_front(10);
    ls.emplace_back(8);
    for(auto it:ls)
       cout<<it<<" ";
    cout<<endl;
    //deque
    deque<int>dq;
    dq.push_back(5);
    dq.push_front(10);
    dq.emplace_front(15);
    dq.emplace_back(0);
    for(auto i:dq)
       cout<<i<<" ";
    cout<<endl;
//stack
  stack<int>st;
 st.push(1);
 st.push(2);
 st.push(3);
 st.push(4);
 st.emplace(10);
 cout<<st.top()<<endl; //top() point to top/last element of a stack
 st.pop();
 cout<<"size :"<<st.size()<<endl;
 cout<<st.empty()<<endl;   //checks wether stack is empty or not
 stack<int>st2;
 st2.swap(st); 
 cout<<st2.top()<<endl;
 //cout<<st.top()--<<endl;
 cout<<st.empty()<<endl; //swap() copy all the element and make earlier stack empty
//queue
 queue<int>qt;
qt.push(10);
qt.push(20);
qt.push(30);
qt.emplace(40);
qt.emplace(50);
cout<<" queue size :"<<qt.size()<<endl;
cout<<"last element :"<<qt.back()<<endl;
cout<<"first element :"<<qt.front()<<endl;
qt.pop(); //delete the front element
//size,swap,empty same as stack ->O(1)
//priority queue
//push,pop ->O(log n) top:O(1)
priority_queue<int>pq; //max heap
pq.push(1); //{1}
pq.push(10); //{10,1}
pq.push(5); //{10,5,1}
pq.emplace(20); //{20,10,5,1}
pq.emplace(15); //{20,15,10,5,1}
cout<<"top:"<<pq.top()<<endl; //20
pq.pop();//20
cout<<"top:"<<pq.top()<<endl;
//push,pop,size,swap,top
priority_queue<int,vector<int>,greater<int>> lq; //it store least valued element at top (min heap)
lq.push(50); //{50}
lq.push(10); //{10,50}
lq.push(80); //{10,50,80}
lq.push(2); //{2,10,50,80}
lq.push(30); //{2,10,30,50,80}
lq.emplace(1); //{1,2,10,30,50,80}
cout<<"top:"<<lq.top()<<endl; //1
//set ->sorted and unique element store krta hai
//it is not a linear data structure ,it use tree to store elements
set<int>s;
s.insert(1);
s.emplace(2);
s.insert(4);
s.insert(6);
s.insert(7);
s.insert(10);
s.insert(8);
s.insert(2);
for(auto it:s)
  cout<<it<<" ";
cout<<endl;
//begin,end,rbegin,rend,size,empty,swap are same as above

auto a1=s.find(3);//if element is not in the set it return iterator pointing just after s.end()
auto a=s.find(2);//  iterator
s.erase(6); //delete 6
int cnt=s.count(1); //if 1 is present in set it return 1 else 0
auto it1=s.find(4);
auto it2=s.find(10);
s.erase(it1,it2); //it erase all elment btw 4,10(excluded) in sorted order
for(auto t:s)
  cout<<t<<" "; 
cout<<endl;
//upper bound and lower bound conditiion:container must be in sorted order for best use case
set<int>s1;
s1.emplace(10);
s1.emplace(20);
s1.insert(5);
s1.insert(15);
s1.insert(25);
s1.insert(30);
for(auto i:s1)
    cout<<i<<" ";
cout<<endl;
//lower bound kya krega ki element found rega agar wo element present nhi hoga toh uss-se bda element find krega
//or agar na element present hai na use bda element present hai to next memory location ka pointer return krega
//upper bound:use se bda element hi return krega
//lower bound and upper bound location return krte hain element ki array:pointer and vector:iterator
//complexity->O(log n)
auto k=lower_bound(s1.begin(),s1.end(),10); //10 this method is good for vectors but not for set and map cause it taking O(N) RATHER THAN O(log n)
cout<<"lower bound:"<<*k<<endl;
auto l=upper_bound(s1.begin(),s1.end(),10); //15
cout<<"upper bound:"<<*l<<endl;
//instead of passing begin and end 
auto v1=s1.lower_bound(25);
cout<<"lower bound set:"<<*v1<<endl;
auto v2=s1.upper_bound(25);
cout<<"upper bound set:"<<*v2<<endl;
//map mae sirf key ke uppar lower and upper bound lgta hai

//multi set->sorted and store all occurence of an element(you keep duplicate elements)
multiset<int>ms;
ms.insert(1);
ms.insert(2);
ms.insert(3);
ms.insert(3);
ms.insert(5);
ms.insert(1);
ms.insert(6);
ms.insert(1);
ms.erase(1); //erase all occurence of 1
ms.erase(ms.find(3)); //erase only one occurence
for(auto m:ms)
   cout<<m<<" ";
cout<<endl;

int cont=ms.count(3);
cout<<"count occurence:"<<cont<<endl;
//rest all function are same as set

//un ordered set 
//all operations are same as set except store element in unoreder and time complexity is O(1) & worst case O(n)
//LOWER BOUND AND UPPER BOUND DOES NOT WORK 

unordered_set<int>us;
us.insert(10);
us.insert(1);
us.insert(80);
us.insert(5);
for(auto u:us)
  cout<<u<<" ";
cout<<endl;

//map ->key:value and keys are unique and in sorted oreder ,key can be any data type
//lower and upper bound work and rest all the functio are same
map<int,int>mp;
mp[1]=2;
mp.emplace(3,1);
mp.insert({2,4});
for(auto m:mp)
  cout<<m.first<<","<<m.second<<" ";
cout<<endl;
cout<<mp[1]<<endl; //2
auto g=mp.find(3); //iterator g points to key=3 and g points to key=3 value
cout<<g->second<<endl;

//  map<int,pair<int,int>>mpp;














return 0;

}