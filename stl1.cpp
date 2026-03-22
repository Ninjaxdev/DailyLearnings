// vector -> inserting,updating,deleting elments

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    //inserting elements in vector ->insert()->it take linear time,
    //push_back()->it take constant time
    //emplace() and emplace_back() ->give a reading (emplace_back() is faster than push_back())
   
    vector<pair<int,int>>vec; //you can use pair with vector 
    vec.emplace_back(2,3);
    vec.push_back({5,6});
     for(auto i:vec)
       cout<<i.first<<","<<i.second<<"  ";
    cout<<endl;
    
    vector<int>v1; //empty container
    v1.push_back(14); 
    v1.push_back(25);
    v1.push_back(17);
    v1.push_back(58);
    v1.insert(v1.begin()+2,99); //it shifts the elment by one at that index if exist
    v1.insert(v1.begin(),500);
    v1.insert(v1.begin()+3,2,5); //it insert 2 element value 5 at 3rd index
    for(auto i:v1)
       cout<<i<<" ";
    cout<<endl;

    vector<int> q(5,100); //5:size of vector and 100 is default value
    vector<int>r(6); // size of 6 element  vector  is created
    vector<int>a(q); //copy of vector q to a
  //Note:if you predefined size of a vector then also you can increase or decrease(change) its size
  //iterator only point to memory address ,you have to use pointer (address of operator) to access value
  vector<int>::iterator it=v1.begin();//begin() pointing to memory of v1 first element
  it++;
  cout<<"iterator :"<<*(it)<<endl;
 // -> vector<int>::iterator i=v1.end();//i points of right after the memory location of last vector element
  //to access memory location last element of a vector you have to do --end() and for value *--end()
   //-> vector<int>::iterator rev=v1.rbegin();//this rev iterator reverse the vector and if you do ++rev it point to next reverse element
   //v1={10,20,30,40} then rev point at 40 if you do ++rev then it point to 30
   //rend() is similar to end() the only difference is it point to right before end of reverse vector i.e before vector v1 10

   // for accessing vector elements->v[index]-> do not check exsistance of the element and 
//v.at(index)->check whether the elment exist or not

   vector<char>c={'g','f','g','c','p'};
   cout<<c[2]<<endl;
   cout<<c[6]<<endl; //index not present
   cout<<c.at(3)<<endl;
   //cout<<c.at(9);//index not present ->throw error
   cout<<"front :"<<c.front()<<endl;
   cout<<"back :"<<c.back()<<endl;
   cout<<"itreator :"<<*(c.begin()+1)<<endl;
   
   //updating elements- //you can also use front,back,iterator methods to update
   c[2]='R';
   c.at(4)='O';
   
   for(auto j:c)
      cout<<j<<" ";
   cout<<endl;
    
  // finding size of a vector
  
  cout<<"size of a vector name c :"<<c.size()<<endl;
  
// delete elements- erase()->with erase() we also have to use find() if we just know the value and dont know the index
//and pop_back()->constant time
  
  vector<char>b={'R','O','H','I','T','C','H','D'};
  b.pop_back();
  b.erase(find(b.begin(),b.end(),'T'));
  b.erase(b.begin()+2,b.begin()+4); 
 // b.clear(); ->to empty the vector
  //b.empty() ->true if vector does not have any element and false if vector has 1 element
  for(auto x:b)
    cout<<x<<" ";
  cout<<endl;    
  return 0;
}