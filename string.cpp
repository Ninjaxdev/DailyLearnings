#include<iostream>
using namespace std;

//1:reverse a string

/*
void rev(string str)
{
    int l=0,h=str.length()-1;
    while(l<=h)
    {
        swap(str[l],str[h]);
        l++;
        h--;
    }
    cout<<"reverse of str is :"<<str<<endl;
}
int main()
{
    string str;
    cout<<"enter the string :";
    getline(cin,str);
    rev(str);
    return 0;
}
*/
// 2 : remove special character from a string
/* 
string removespecialchar(string str)
{
    string s="";
    for(auto i:str)
    {
       if(isalnum(i))
         s+=i;
    }
    return s;
}
int main()
{
    string str;
    cout<<"enter the string :";
    cin>>str;
    cout<<removespecialchar(str);
    return 0;
}*/

// 3)remove all white space from string
/*
string removingwhitespace(string &s)
{  
    int w=0;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
          { s[w]=s[i];
           w++;
          } 
    }
    s.resize(w);
    return s;
}

int main()
{
    string str="h   e  l  l   o";
    cout<<removingwhitespace(str)<<endl;
    return 0;
}
*/

//all posible substring

int main()
{
    string s="hello";
    for(int i=0;i<s.size();i++)
    {
        for(int j=i;j<s.size();j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<s[k];
            }
            cout<<endl;
        }
    }
    
    return 0;
}























