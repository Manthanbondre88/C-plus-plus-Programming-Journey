// ENCAPSULATION
// #include<iostream>
// using namespace std;
// class Student
// {  private: 
//  string name;
//  int roll_no;
//  int marks;
//  public:
//  Student(string n,int r,int m)
//  {  name=n;
//     roll_no=r;
//     if(marks>0&&marks<100)
//     {
//         marks=m;
//     }
//  }

//   void display()
//   {
//     cout<<"Name="<<name<<endl;
//     cout<<"roll no.="<<roll_no<<endl;
//     cout<<"Marks="<<marks<<endl;
//   }
// };
// int main()
// { Student s("Bhoomi",24350940767,641);
//   s.display();
//   return 0;  
// }

// #include<iostream>
// using namespace std;
// class BankAccount
// { string name;
//   int balance;
//   public:
//   int choice,withdrawamt,depositamt;
//   BankAccount(string n,int b)
//   { name=n;
//     if(balance>0){
//       balance=b;
//     }
//   }
//   void transaction()
//   { cout<<"Enter the choice- 1 for deposit and 2 for withdraw"<<endl;
//     cin>>choice;
//     if(choice=1)
//     {
//       cout<<"Enter amount to be deposit"<<endl;
//       cin>>depositamt;
//       cout<<depositamt<<" deposited successfully!"<<endl;
//     }
//     else
//     if(choice=2)
//     {
//       cout<<"Enter amount to be Withdraw"<<endl;
//       cin>>withdrawamt;
//       cout<<withdrawamt<<" withdrawn successfully!"<<endl;
//     }
//   }


//   void display()
//   {
//     cout<<"customer details are as-"<<endl;
//     cout<<"Name="<<name<<endl;
//     if(choice=1)
//     { 
//       cout<<"Balance="<<balance+depositamt;
//     }
//     else
//     {
//       cout<<"Balance="<<balance-withdrawamt;
//     }
//   } 
// };
// int main()
// { BankAccount b("Manthan",1000);
//   b.transaction();
//   b.display();
//   return 0;
// }

// inheritance
// #include<iostream>
// using namespace std;
// class Person
// { public:
//   string name;
//   int age;  

//   Person(string n,int a)
//   { name=n;
//    age=a;  
//   }
 
//   void display()
//   {
//     cout<<"Name="<<name<<endl;
//     cout<<"Age="<<age<<endl;
//   }
// };

// class Employee :public Person
// { public:
//     Employee (string n,int a):Person(n,a){}
//     void show()
//     {
//     cout<<"Inherited successfully"<<endl;
//     }
// };

// int main()
// { Employee e("manthan",17);
//   e.display();
//   e.show();
//   return 0;
// }

// #include<iostream>
// using namespace std;
// class student
// { public:
//   string name;
//   int roll_no;

//   void getinfo()
//   { cout<<"Enter your details-"<<endl;
//     cout<<"Name="<<endl;
//     cin>>name;
//     cout<<"Roll no="<<endl;
//     cin>>roll_no;
//   }
 
//   void displaayinfo()
//   { cout<<"Details are as-"<<endl;
//     cout<<"Name="<<name<<endl;
//     cout<<"Roll no="<<roll_no<<endl;
//     cout<<"Thank You!"<<endl;
//   }
// };

// class Marks:public student
// { public:
//   int mark1,mark2;

//   void getmarks()
//   { 
//     cout<<"Enter marks of subject 1="<<endl;
//     cin>>mark1;
//     cout<<"Enter  marks of subject 2="<<endl;
//     cin>>mark2;
//   }

//  void displaymarks()
//  { 
//   cout<<"Subject of Mark 1="<<mark1<<endl;
//   cout<<"Subject of Mark 2"<<mark2<<endl;
//  }
//  };

//  class Result:public Marks
//  {  public:
//     int Total;

//     void calculatetotal()
//     {
//       cout<<"Total="<<mark1+mark2<<endl;
//     }
//  };

//  int main()
//  { 
//    Result r;
//    r.getinfo();
//    r.displaayinfo();
//   r.getmarks();
//   r.displaymarks();
//   r.calculatetotal();
//   return 0;
// };

// POLYMORPHISM          // Compile time polymorphism uses operator overloading or function overloading 
// #include<iostream>
// using namespace std;
// class student
// { public:
  
//     void calculate(int a,int b)
//     {  
//         cout<<"Value of A="<<a<<" Value of B="<<b<<endl;
//         cout<<"Addition="<<a+b<<endl;
//     }

//     void calculate(float b,float c)
//     { 
//         cout<<"Value of A="<<b<<" Value of B="<<c<<endl;
//         cout<<"Addition="<<b+c<<endl;   
//     }

//     void calculate(int a,float b)
//     { 
//         cout<<"Value of A="<<a<<" Value of B="<<b<<endl;
//         cout<<"Addition="<<a+b<<endl;
//     }

// };

// int main()
// { student s;
//   s.calculate(3,4);
//   s.calculate(3.5f,2.5f);
//   s.calculate(3,2.5f);
//   return 0;
// }

// Run time polymorphism 

//  #include<iostream>
//  using namespace std;
//  class People
//  { public:
//     virtual void condition()=0;
//  };

//  class EverythingGood:public People
//  { public:
//    void condition()
//    {
//     cout<<"People condition=ALL GOOD!"<<endl;
//    }
//  }; 
//   class Handicapped:public People
//   { public:
//     void condition()
//     {
//     cout<<"People condition=Handicapped!"<<endl;
//     } 
//  };

//  int main()
//  { People *P;
//    EverythingGood e;
//    Handicapped h;
//    P=&e;
//    P->condition();
//    P=&h;
//    P->condition();
//    return 0;
//  }

// abstraction
// Same Code performs Abstraction concept of oops.
// #include<iostream>
// using namespace std;
// class Person
// { public:
//   virtual void condition()=0;  // It becomes pure virtual function i.e abstract class  
// };

// class EverythingGood:public Person
// { public:
//   void condition()
//   {
//     cout<<"Person's condition=ALL GOOD!"<<endl;
//   }
// };

// class Handicapp:public Person
// { public:
//   void condition()
//   {
//     cout<<"Person's condition=Handicapped!"<<endl;
//   }
// };

// int main()
// { Person *p;
//   EverythingGood E;
//   Handicapp H;
//   p=&E;
//   p->condition();
//   p=&H; 
//   p->condition();
//   return 0;
// }