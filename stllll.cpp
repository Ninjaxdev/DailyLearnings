/*
STL ->standard template library,pre built container,algo that make coding experience better
containers,iterator,algorithms,functors
container->vector(dynamic array->runtime pr size increase ya decrease)
front(),back(),push_back(),pop_back(),emplace_back()->O(1)
insert(),erase()->O(n)
erase() and clear() ->it changes the size not the capacity
*/

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>arr;
    vector<int>a={141,25,47,85,69,96};
    a.erase(a.begin()); //erase(iterator())->it is used to delete an element and range of elements
    a.erase(a.begin()+2);
    a.erase(a.begin()+1,a.begin()+3);//delete range of elements [start,end) start->inclusive and end->exclusive
    for(auto value:a)
      cout<<value<<" ";
    cout<<endl;
    vector<int>b(5,10); //5=size and 10=value
    b.insert(b.begin()+3,50); //insert(iterator+pos,value)
    for(auto value:b)
      cout<<value<<" ";
    cout<<endl;
    vector<int>vec2(a);//copy vector a elements to vec2
    for(auto value:vec2)
      cout<<value<<" ";
    cout<<endl;
    //push_back():it is used to insert data in vector at the end
    arr.push_back(14);
    arr.push_back(25);
    arr.push_back(57);
    arr.push_back(69);
    arr.push_back(58);
    arr.emplace_back(85); //same as push_back() ->insert at end
    arr.pop_back(); //delete element at end
    cout<<"size:"<<arr.size()<<endl;//size->no of elment it contain
    cout<<"capacity:"<<arr.capacity()<<endl;//every time capacity doubles,capacity->how many element it can contain
    for(auto i:arr)  //for each loop
       cout<<i<<" ";
    cout<<endl;
    cout<<"value at index 2:"<<arr[2]<<" or "<<arr.at(2)<<endl;
    cout<<"first element of vector:"<<arr.front()<<endl;
    cout<<"last element of vector :"<<arr.back()<<endl;
    return 0;
}