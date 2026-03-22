#include<iostream>
using namespace std;

/*void fun(int x)
{
    if(x>0)
    {
        fun(x-1); //o/p->1,2,3,4,5
        cout<<x<<" ";
        //fun(x-1); // op->5,4,3,2,1
    }
}

int main()
{
   int x=5;
   fun(x);
    return 0;
}
*/
//static and global variable

int func1(int n)
{
    static int x=0;
    if(n>0)
    {
        x++;
        return func1(n-1)+x;
    }
    return 0;
}

int main()
{
    int a=5;
    cout<<func1(a);
    return 0;
}
