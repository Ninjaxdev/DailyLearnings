#include <iomanip>
#include <iostream>
#include <string.h>
using namespace std;

//int add(int x,int y);
//int sub(int x,int y);

/*class student
{
   string name;
   int age;
   char grade;

   public:
   int set(string n,int a,char g)
   {
      name=n;
      age=a;
      grade=g;
   }
   void get()
   {
    cout<<"name of the student is:"<<name<<endl;
    cout<<"age of the student is:"<<age<<endl;
    cout<<"grade of the student is:"<<grade<<endl;
   }
};*/

/*class car
{
    string brand;
    string model;
    int year;
    public:
    car(string,string,int);
    ~car();
};
car::car(string b,string m,int y)
{
    brand=b;
    model=m;
    year=y;
    cout<<"car:"<< brand<<" "<< model<<" "<< year<<endl;
};
car::~car()
{
    cout<<"destructor:"<<brand<< model<< year<< endl;
};*/

class A
{
  public:
  int x;
  A(){}
  A(A& t)
  {
    x=t.x;//deep coppy
  }
};



int main()
{
   // precesion

    /*float radius,circumference,area,pi=3.14;
   cout<<"enter the vlaue of radius:";
   cin>>radius;
   circumference=2*pi*radius;
   area=pi*radius*radius;
   cout<<fixed<<setprecision(2);
   cout<<"circumference of circle is:"<<circumference<<endl;
   cout<<"area of circle is :"<<area<<endl;*/

   // transpose of the matrix

   /*int n,m;
   cout<<"enter the no of rows:";
   cin>>n;
   cout<<"enter the no of columns:";
   cin>>m;
   int arr[n][m];
   cout<<"enter"<<n*m<<"elments in matrix:"<<endl;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cin>>arr[i][j];
    }
   }
   cout<<"matrix:"<<endl;
   for(int i=0;i<n;i++)
   {
    for(int j=0;j<m;j++)
    {
        cout<<arr[i][j]<<" ";
    }
      cout<<endl;
   }
   cout<<"matrix transpose:"<<endl;
   for(int i=0;i<m;i++)
   {
    for(int j=0;j<n;j++)
    {
        cout<<arr[j][i]<<" ";
    }
       cout<<endl;
   } */

   // input string and count no of vowel,consonants,digits and special characters
   
   /*int count_vwl=0,cnt_conso=0,cnt_digit=0,cnt_spechar=0;
   string s;
   cout<<"enter the string:";
   getline(cin,s);
   
   for(char ch:s)
   {
    if(isalpha(ch)) //check if character is alphabet or not
    {
    ch=tolower(ch); //it take two arguments  
    if(ch=='a'|| ch=='e'|| ch=='i'||ch=='o'|| ch=='u')
      count_vwl++;
   else
      cnt_conso++;
    }
    else if(isdigit(ch)) //check if character is digit or not
       cnt_digit++;
    else
       cnt_spechar++;
   }
   cout<<"no of vowel in string is:"<<count_vwl;
   cout<<"no of consonant in string is:"<<cnt_conso;
   cout<<"no of digit in string is:"<<cnt_digit;
   cout<<"no of special character in string is:"<<cnt_spechar; */
  
   // function pointer ->int (*name)(parmeter1,parameter2)
   /*
   int choice;
   int a,b;
   cout<<"enter the value of a and b:";
   cin>>a>>b;
   int (*funptr)(int ,int);
   cout<<"enter 1->addition and 2->subtraction"<<endl;
   cout<<"enter your choice:";
   cin>>choice;
   switch(choice)
   {
    case 1:
        funptr=&add;
        break;
    case 2:
        funptr=&sub;
        break;
    default:
        cout<<"choose wisely"<<endl;
        break;
   }
   cout<<"the answer is:"<<(*funptr)(a,b);*/

// class implementation

/*student S;
S.set("ROHIT",22,'A');
S.get();*/

// car

/*car c("LAMBORGINI","AVENTADOUR",2025);
{
    cout<<"constructor of c1"<<endl;
    car c1("Toyota","hileux",2027);
}*/ 

// coppy consturctor deep copy vs shallow copy

A a1;
a1.x=10;
cout<<"a1's x is :"<<a1.x<<endl;
A a2=a1; //shallow copy
cout<<"a2's x is :"<<a2.x<<endl;
   
   return 0;
}
/*int add(int x,int y)
{
    return x+y;
}
int sub(int x,int y)
{
    return x-y;
}*/
