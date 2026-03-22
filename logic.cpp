#include<iostream>
using namespace std;

// q1) square pattern 
   /* * * * * * *
      *         * 
      *         *
      *         *
      *         *
      * * * * * *  */
/*int main()
{
   int n=6;
    for(int i=0;i<n;i++)
   {
    for(int j=0;j<n;j++)
    {
       if(i==0 || i==n-1 || j==0 || j==n-1)
        cout<<"*";
       else 
       {
        cout<<" ";
       } 
    }
      cout<<endl;
   }
    
   
    return 0;
}*/

// question 2 -> inverted star pattern 
/*  * * * * * *    
     * * * * *
      * * * *
       * * *
        * *
         *   */   

/*int main()
{
   int n=4;
   for(int i=n;i>0;i--)
   {
    for(int sp=0;sp<n-i;sp++)
       cout<<" ";
    for(int j=0;j<i;j++)
        cout<<" *";
    
    cout<<endl;
   }
    return 0;
}*/

//question 3 ->pyramid star pattern

/*int main()
{
   int n=5;
   for(int i=0;i<n;i++)
   {
    for(int sp=n-i;sp>0;sp--)
       cout<<" ";
    for(int j=0;j<=i;j++)
       cout<<" *";
    cout<<endl;
   }
    return 0;
}*/

// question  4-> diamond star pattern (combination of pyramid and inverted pyramid pattern)

/*int main()
{
int n=5;
for(int i=0;i<n;i++)
{
    for(int sp=n-i-1;sp>0;sp--)
      cout<<" ";
    for(int j=0;j<=i;j++)
      cout<<" *";
    cout<<endl;
}
for(int i=n-1;i>=0;i--)
   {
    for(int sp=0;sp<n-i;sp++)
       cout<<" ";
    for(int j=0;j<i;j++)
        cout<<" *";
    cout<<endl;
   }
}*/

//question 5->butterfly pattern

int main()
{
   int n=6;
   for(int i)
   
   
    return 0;
}