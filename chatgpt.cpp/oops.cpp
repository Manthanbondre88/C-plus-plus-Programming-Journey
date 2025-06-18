// ENCAPSULATION //

// #include<iostream>
// #include<string>
// using namespace std;
// class Student
// { private:
//   string name;
//   int age;  
//   public:
 
//   Student(string s,int m)
//   {  name=s;
//     age=m;
//   }

//   void getdetails()
//   { 
//      cout<<"Name:"<<name<<endl;
//      cout<<"Age:"<<age<<endl;
//   }

// };
// int main()
// { Student s("Manthan",17);
// s.getdetails();
// return 0;  
// }

// INHERITANCE //
// Single Inheritance
// #include<iostream>
// using namespace std;
// class Base
// { public:
//   int age;
//   string name;
  

//   void display()
//   {
//     cout<<"Name="<<name<<endl;
//     cout<<"Age="<<age<<endl;
//   }

// };
// class Derive:public Base
// { public:
// int roll;
// void show()
// {
//     cout<<"Roll no.="<<roll<<endl;
// }

// };

// int main()
// { Derive d;
//   d.age=17;
//   d.name="Manthan";
//   d.display();
//   d.roll=5;
//   d.show();
//   return 0;
// }

// #include<iostream>
// using namespace std;
// class A
// { int a ;
//   public:
//   int b=8;
//   int geta()
//   { a=4;
//     return a;
//   }

//   void displaya()
//   {
//     cout<<"Value of a="<<geta()<<endl;
//   }

//   void display()
//   {
//     cout<<"Value of b="<<b<<endl;
//   }
//  };
//   class B:public A
//   {  public:
//     void displayb()
//     {
//         cout<<"Successfully inherited!"<<endl;
//     }; 
//   };


// int main()
// { B b1;
//   b1.displaya(); 
//   b1.display();
//   b1.displayb();
// return 0;
// }

// Multilevel inheritance
// #include<iostream>
// using namespace std;
// class A
// { public:
//     void display(){
//   cout<<"Class A"<<endl;  
//     }

// };
 
// class B:public A
// { public:
//   void display()
//   {
//      cout<<"Class B"<<endl;  
//   }  

// };

// class c:public B
// { public:
//   void display()
//   {
//     cout<<"Class c"<<endl;
//   }  

// };

// int main()
// { A a;
//   B b;
//   c C;
//   a.display() ; 
//   b.display() ; 
//   C.display() ; 
//   return 0;  
// }

// Multiple inheritance 
// #include<iostream>
// using namespace std;
// class A
// { public:
//   void display()
//   { 
//     cout<<"My name is manthan"<<endl;
//   }  
// };

// class B
// { public:
//   void display()
//   {
//     cout<<"Future Ceo of a company!"<<endl;
//   }
// };

// class C:public A,public B
// { public:
//   void display()
//   {
//     cout<<"You are definitely going to be successful in your Life"<<endl;
//   }   
// };

// int main()
// { A a;
//   B b;
//   C c;
//   a.display();     //If error come                 c.A::display();
//                   //write like this-               c.B::display();
//                  //                               c.display();
//  b.display();
//  c.display();
  
 
//   return 0;  
// }

// Hierchial inheritance
// #include<iostream>
// using namespace std;
// class Teacher
// { public:
//   void message()
//   {
//     cout<<"We are teachers"<<endl;
//   }  
// };

// class Mathsteacher:public Teacher
// { public:
//   void showmath()
//   {
//     cout<<"I am a Math teacher"<<endl;
//   }  

// };

// class Scienceteacher:public Teacher
// { public:
//   void showacience()
//   {
//     cout <<"I am a Science teacher"<<endl;
//   }  
// };

// int main()
// {  Teacher t;
//    Mathsteacher mt;
//    Scienceteacher st; 
//    t.message();
//    mt.message();
//    mt.showmath();
//    st.message();
//    st.showacience();
// return 0;
// }

// hybrid inheritance
// #include<iostream>
// using namespace std;
// class A
// { public:
//   void displayA()
//   {
//     cout<<"This is class A "<<endl;
//   }  
// };

// class B:virtual public A
// { public:
//   void displayB()
//   {
//     cout<<"This is class B"<<endl;
//   }  
// };

// class C:virtual public A
// { public:
//   void displayC()
//   {
//     cout<<"This is class C"<<endl;
//   }
// };

// class D:public B,public C
// { public:
//   void displayD()
//   {
//     cout<<"This is class D"<<endl;
//   }
// };

// int main()
// { D d;
//   d.displayA();
//   d.displayB();
//   d.displayC();
//   d.displayD();
//  return 0;
// }

// Compile time POLYMORPHISM //
// #include<iostream>
// using namespace std;
// class A
// { public:
//     int a,b,c;
//   void show()
//   {
//     cout<<"This is class A"<<endl;
//   }  

//   void show(int j)
//   {
//     a=j;
//     cout<<"Value of a ="<<a<<endl;
//   } 

//   void show(int k,int l)
//   { b=k;
//     c=l;
//     cout<<"Value of b="<<b<<endl;
//     cout<<"Value of c="<<c<<endl;
//   }
// };

// int main()
// { A a;
//   a.show();
//   a.show(2);
//   a.show(3,4);
//   return 0;
// }

// run time POLYMORPHISM
// #include<iostream>
// using namespace std;
// class Base
// { public:
//    virtual void show()
//   {
//     cout<<"This is base class"<<endl;
//   }  

// };
// class Derive:public Base
// { public:
//    void show()
//   {
//     cout<<"This is derive class"<<endl;
//   }  
// };
// int main()
// {  Base *b;
//    Derive d;
//    b=&d;
//   b->show();
//   return 0;
// }

// ABSTRACTION 
// ABSTRACTION using abstract class - Method 1

// #include<iostream>
// using namespace std;
// class A  //abstract class
// { public:
//   virtual void sound()=0;
//   void sleep()
//   {
//     cout<<"I am sleeping!"<<endl;
//   }  
// };

// class B:public A //derived class//
// { public:
//   void sound()
//   {
//     cout<<"Dog=WOOf WOOF!"<<endl;
//     cout<<"Cat=MEOW MEOW!"<<endl;
//   }  
// };

// int main()
// { B b;
//   b.sleep();
//   b.sound();
//   return 0;
// }

// #include<iostream>
// using namespace std;
// class PaymentMethod //abstract class
// { public:
//   virtual void pay(int x)=0;
// };

// class CreditCard:public PaymentMethod
// { public:
//   void pay(int x)
//   { 
//     cout<<"Paying "<<x<<" rupees using Creditcard"<<endl;
//   }  
// };

// class UPI:public PaymentMethod
// { public:
//   void pay(int x)
//   {
//      cout<<"Paying "<<x<<" rupees using UPI"<<endl;
//   }  
// };

// class PayPal:public PaymentMethod
// { public:
//   void pay(int x)
//   {
//     cout<<"Paying "<<x<<" rupees using PayPal"<<endl;
//   }  
// };

// int main()
// { PaymentMethod *p;
//   CreditCard c;
//   UPI u;
//   PayPal P;
//   p=&c;
//   p->pay(4000);
//    p=&u;
//   p->pay(3000);
//   p=&P;
//   p->pay(2000);
//   return 0;
// }

// #include<iostream>
// using namespace std;
// class Transaction
// { public:
//   virtual void perform(int x)=0;
// };

// class Deposit:public Transaction
// { public:
//   void perform(int x)
//   {
//      cout<<"Rupees "<<x<<" deposited successfully!"<<endl;
//   }  
// };

// class Withdraw:public Transaction
// { public:
//   void perform(int x)
//   {
//     cout<<"Rupees "<<x<<" withdrawn successfully!"<<endl;
//   }
// };

// int main()
// { Transaction*t1 = new Deposit();
//   Transaction*t2 = new Withdraw(); 
//   t1->perform(200000);
//   t2->perform(1000); 
//    return 0;
// }

