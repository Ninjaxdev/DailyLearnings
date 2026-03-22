// STL 
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void printvector(vector<int>& v)
{
    for (auto x: v) 
    {
        cout << x << " ";
    }
    cout << endl;
}

int main()
{
    vector<int>v1; //empty array  
    //v1 value provide 
    v1.push_back(10);
    v1.push_back(25);
    v1.push_back(30);
    v1.push_back(96);
    vector<int>v2={4,6,8,96,21,63,74};
    vector<int>v3(5,6); //size=5,default value->6
    
    printvector(v1);
    printvector(v2);
    printvector(v3);
    
    //this is how you copy an array in vector
    int arr[]={1,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    vector<int>copy={arr,arr+size};
    
    for(auto i:copy)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    // copy elements from one vector to another or form a vector from another vector
    
    vector<int>e1={7,8,9,2,0};
    vector<int>e2={e1.begin(),e1.end()};
    
    for(auto j:e2)
    {
        cout<<j<<" ";
    }
    cout<<endl;
    
    //using fill()
    
    vector<int>h(5);
    fill(h.begin(),h.end(),99);
    
    for(auto k:h)
    {
        cout<<k<<" ";
    }
    cout<<endl;
    
    //using iota()
    
    vector<int>i(6);
    iota(i.begin(),i.end(),99);
    
    for(auto n:i)
    {
        cout<<n<<" ";
    }
    cout<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}