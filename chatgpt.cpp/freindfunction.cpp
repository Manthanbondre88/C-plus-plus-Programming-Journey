//   freind function practice //

// #include<iostream>
// using namespace std;
// class A
// {  int length;
//    public:
   
//    A()
//    {
//       length=10;
//    }

//   friend void printlength(A a);
// };


// void printlength(A a)
// {
//    cout<<"The length="<<a.length<<endl;
// }

// int main(){
//    A m;
//    printlength(m);
//  return 0;  
// }

// #include<iostream>
// using namespace std;
// class M
// {  string greet;
//    public:

//    M()
//    {
//       greet="Good Morning";
//    }
  
//    friend void printgreet(M m);
   
// };
// void printgreet(M m)
// {
//    cout<<""<<m.greet<<endl;
// }

// int main()
// {  M n;
//    printgreet(n);
//  return 0;  
// }

// #include<iostream>
// using namespace std;
// class student
// { int marks;
//    public:

//   student()
//   {
//    marks=40;
//   } 

//   friend void printmarks(student s);

// };

// void printmarks(student s)
// {
//    cout<<"Marks="<<s.marks<<endl;
// }

// int main()
// { student m;
// printmarks(m);
// return 0; 
// }

// #include<iostream>
// using namespace std;
// class C; //ye forward declaration h jisse compiler ko pta chlta h ki class C bhi exist krta h
// class A
// {
//    int b;
//   public:
//   A(){
//    b=10;
//   }

//   void printb()
//   {
//     cout<<"Value of b="<<b<<endl;
//   }
//    friend void add(A m,C s); 
// };

// class C
// {
//    int d;
//    public:
//    C()
//    {
//      d=20;
//    }

//   void printd()
//   {
//     cout<<"Value of d="<<d<<endl;
//   } 
//   friend void add(A,C); 
// };

// void add(A m,C s)
// { int result;
// result=m.b+s.d;
// cout<<"Result="<<result<<endl;
// }

// int main()
// { A l;
//   C k;
//   l.printb();
//   k.printd();
//   add(l,k);
//   return 0; 
// }

// #include<iostream>
// using namespace std;
// class Man
// {  int length=10;
//    public:

// friend void print(Man* m); //by using "pointer"

// };

// void print(Man* m)
// {
//    cout<<"Length="<<m->length<<endl;
// }

// int main()
// {  Man a;
//    print(&a);
// return 0;
// }

// FREIND FUNCTION WITH POINTERS
// #include<iostream>
// using namespace std;
// class student
// {
//     int marks;
//     public:
//     student(int m)
//     {
//        marks=m;
//     }

//   friend void printmarks(student*ptr);  
// };

// void printmarks(student*ptr)
// {    ptr->marks+=10;
//     cout<<"Marks="<<ptr->marks<<endl;
// }

// int main()
// {
//   student k(50);  
//   printmarks(&k);
// return 0;
// }

// #include<iostream>
// using namespace std;
// class printer;
// class rectangle
// {  float length,breadth;
//     public:
//    rectangle(int l,int b)
//    {
//      length=l;
//      breadth=b;
//    }
// friend void printarea(rectangle *r);

// };

//  class printer
//  {  public:

//  friend void printarea(rectangle *r);

//  }; 

//  void printarea(rectangle*r){
//     float area=r->length*r->breadth;
//     cout<<"Area="<<area<<endl;
// }
// int main()
// { rectangle o(20,30);
//    printarea(&o);
//    return 0; 
// }

// #include<iostream>
// using namespace std;
// class point
// {
//     int x,y;
//     public:
//     point()
//     {
//         x=10;
//         y=20;
//     }

//     friend void add(point p1,point p2);
// };
// void add(point p1,point p2)
// {  point temp;
//    temp.x=p1.x+p2.x;
//    temp.y=p1.y+p2.y;
//    cout<<"x="<<temp.x<<endl;
//    cout<<"Y="<<temp.y<<endl;
// }
// int main()
// { point p1,p2;
//   add(p1,p2);  
// return 0;
// }

// #include<iostream>
// using namespace std;
// class B;
// class A
// { int x;
//   public:
//   A()
//   {
//     x=10;
//   }

//   friend void show(A,B);

// };

// class B
// { int y;
//  public:
//    B()
//    {
//      y=20;
//    }
//  friend void show(A,B);
// };
// void show(A a,B b)
// {
//     cout<<"Addition="<<a.x+b.y<<endl;
// }
// int main()
// { A l;
//   B k;
//   show(l,k);
//   return 0;  
// }

// #include<iostream>
// using namespace std;
// class A
// { int length;
// public:
//  A()
//  {
//     length=200;
//  }
//   void show()
//   {
//     cout<<"Before modify Value="<<length<<endl;
//   }
//   friend void modify(A &a);  
// };
// void modify(A &a)
// {
//   a.length+=15;
//   cout<<"After modification value="<<a.length;  
// }

// int main()
// { A b;
//   b.show();  
//  modify(b);
//  return 0;
// }

// #include<iostream>
// using namespace std;
// class A
// {  int salary;
//    public:
//    A(int m=0)
//    {
//       salary=m;
//    } 

//    void show()
//    {
//     cout<<"The Beginning salary="<<salary<<endl;
//    }
//    friend void modify(A &a);

// };

// void modify(A &a)
// {
//   a.salary*=2;
//   cout<<"MOdified Salary="<<a.salary<<endl;
// }
// int main()
// { A b(20000);
//   b.show();
//   modify(b);
//   return 0;  
// }

// #include<iostream>
// using namespace std;
// class B;
// class A
// { int marks;
//     public:
//   A(int a)
//   { marks=a;
//   }  

//   friend void add(A l,B k);

// };

// class B
// { int bonus;
//     public:
//   B(int b)
//   { 
//     bonus=b;
//   }
//   friend void add(A l,B k);
// };

// void add(A l,B k)
// { int temp;
//     temp=l.marks+k.bonus;
//  cout<<"Total Marks="<<temp<<endl;
// }

// int main()
// { A a(20);
//   B b(30);
//   add(a,b);
//   return 0; 
// }
