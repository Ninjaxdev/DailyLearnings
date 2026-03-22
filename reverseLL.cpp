#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    public:
    node(int data,node* next){
         this->data=data;
         this->next=next;
    }
    node(int dt){
        data=dt;
        next=NULL;
    }
};
node* reverse(node* head)
{
    node* prev=NULL;
    node* curr=head;
    node* n;
    while(curr!=NULL)
    {
       n=curr->next;
       curr->next=prev;
       prev=curr;
       curr=n;
    }
    return prev;
}
node* convertheadtoLL(vector<int>&arr)
{
   node* head=new node(arr[0]);
   node* mover=head;
   for(int i=1;i<arr.size();i++)
   {
       node* temp=new node(arr[i]);
       mover->next=temp;
       mover=temp;
   }
   return head;
}
void traverse(node* p)
{
   while(p!=NULL)
   {
    cout<<p->data<<"->";
    p=p->next;
   }
   cout<<"/0"<<endl;
}
int main()
{
   vector<int>arr={10,20,30,40,50,60};
    node* head=convertheadtoLL(arr);
    traverse(head);
    head=reverse(head);
    traverse(head);   
    return 0;
}
