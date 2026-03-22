//pair is part of utility library
//work with different data types
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int>p={2,3};
    cout<<p.first<<","<<p.second<<endl;
    //nested property of pair
    pair<int,pair<int,int>>q={1,{2,5}};
    cout<<q.first<<","<<q.second.first<<","<<q.second.second<<endl;
    pair<int,int> arr[]={{1,2},{4,5},{3,6},{7,8}};
    cout<<arr[0].first<<endl;
    pair<char,char>c={'A','R'};
    cout<<c.first<<","<<c.second<<endl;
    return 0;
}