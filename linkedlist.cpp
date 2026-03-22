/* problem with array: size ->if at runtime no of user or elment increases we can't
 increase or decrease size at runtime we have to decide at compile time or coding time.
 
 difference btw array and linked list: we can declare an array in stack or heap
 stack: int arr[size];
 heap: int *arr=new int[size];
 so benefit with array is elements stored at contigious memory location use can access it by indexing
 linked list stored at heap

 structure ->by default all members are public
 class ->by default all members are private
 
 what is linked list->linked list is collection of nodes that each node containing data and pointer to next node
 used in ->Stack and Queue data structure and in browser(webpages)

 rule of linked list->never ever temper the head
 */
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node* next;
        
        Node(int data1,Node* next1)
        {
            data=data1;
            next=next1;
        }
    public:
    Node(int dt)
    {
       data=dt;
       next=NULL;
    }

    };
void print(Node* ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"/0"<<endl;
}
int length(Node* l)
{
    int count=0;
    while(l!=NULL)
    {
        l=l->next;
        count++;
    }
    return count;
}

int searchelment(Node* E,int key)
{
    while(E!=NULL)
    { 
        if(E->data==key)
          return 1;
        else
          E=E->next;
    }
    return -1;
}

Node* arraytoLL(vector<int>&arr)
{    
    Node* head=new Node(arr[0]);
    Node* mover=head;
    for(int i=1;i<arr.size();i++)
    {
        Node* temp=new Node(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return head;
}


int main()
{
    vector<int>arr={10,20,25,47,84}; 
    Node* head=arraytoLL(arr);
    print(head);
    cout<<"length of linked list:"<<length(head)<<endl;
    int result=searchelment(head,25);
    if(result!=-1)
      cout<<"node value is present"<<endl;
    else
      cout<<"node value is not present"<<endl;
    return 0;
}