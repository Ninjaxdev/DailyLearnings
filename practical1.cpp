#include<iostream>
using namespace std;
/*
class book
{
   string title;
   int price;
public:
   book(string t,int p)
   {
    title=t;
    price=p;
   }
   void get()
   {
    cout<<"book:"<< title<<" "<<price<<endl;
   }
};

int main()
{
   book *b=new book("JUNGLE BOOK",690);
   b->get();   
   delete b;
    
    return 0;
}*/

/*class mathoperation
{
   public:
   int add(int a,int b)
   {
      return a+b;
   }
   double add(double a,double b)
   {
      return a+b;
   }
   string add(string a,string b)
   {
      return a+b;
   }
};
int main()
{
    mathoperation m;
    cout<<"addition of integer:"<< m.add(4,8)<<endl;
    cout<<"addition of double:"<< m.add(6.3,8.9)<<endl;
    cout<<"addition of string:"<<m.add("hello","world");
    return 0;
}*/

// pass by value and pass by refrence

/*class number
{
   public:
   int num;
   number(int x)
   {
     num=x;
   }
};

void modifybyvalue(number n)
{
   n.num=100;
   cout<<"modify by value:"<<n.num<<endl;
}

void modifybyrefrence(number &n)
{
    n.num=200;
    cout<<"modify by refrence:"<<n.num<<endl;
}

int main()
{
    number n1(20);
    cout<<"initial :"<<n1.num<<endl;
    modifybyvalue(n1);
    cout<<"after modify by value:"<<n1.num<<endl;
    number n2(40);
    cout<<"initial:"<<n2.num<<endl;
    modifybyrefrence(n2);
    cout<<"after modify by refrence:"<<n2.num<<endl;
}*/

//binary operator overloading->class name operator+(const& object)

/*class complex
{
   int real;
   int img;
   public:
   complex(){}
   complex(int r,int i)
   {
    real=r;
    img=i;
   }
   complex operator+(complex const& c)
   {
      complex res;
      res.real=real+c.real;
      res.img=img+c.img;
      return res;
   }
   void print()
   {
     cout<<real<<"+i"<<img<<endl;
   }
};

int main()
{
    complex c1(1,20),c2(7,1);
    complex c3=c1+c2;
    c3.print();
}*/

//operator overloading ==

/*class point
{
    int x,y;
    public:
    point(){}
    point(int a,int b)
    {
        x=a;
        y=b;
    }
    bool operator==(point const& p)
    {
         return (x==p.x && y==p.y);
    }
    void print()
    {
        cout<<"("<<x<<","<<y<<")"<<endl;
    }

};
int main()
{
    point p1(2,3),p2(4,5),p3(2,3);
    p1.print();
    p2.print();
    p3.print();
    if(p1==p2)
      cout<<"p1 is equal to p2"<<endl;
    else
      cout<<"p1 is not equal to p2"<<endl;

    if(p1==p3)
      cout<<"p1 is equal to p3"<<endl;
    else
      cout<<"p1 is not equal to p3"<<endl;
}*/

// constructor overloading

/*class person
{
   string name;
   int age;
   public:
   person(){name="hacker";age=22;}
   person(string n){name=n;}
   person(string n,int a){name=n;age=a;}
   void print()
   {
    cout<<"name:"<<name<<" "<<"age:"<<age<<endl;
   }
};
int main()
{
    person p,p1("rohit"),p2("rohit",22);
    p.print();
    p1.print();
    p2.print();
    return 0;
}*/

//friend function & friend class

/*class fry
{
  int x;
  protected:
  int p;
  public:
  fry()
  {
    x=10;
    p=25;
  }
  friend class food;
};
class food
{
  public:
  void display(fry& f)
  {
    cout<<"value of x is:"<<f.x<<endl;
    cout<<"value of p is:"<<f.p<<endl;
  }

};
int main()
{
    fry f;
    food o;
    o.display(f);   
    return 0;
}*/
