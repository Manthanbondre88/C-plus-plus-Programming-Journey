// UNARY OPERATOR OVERLOADNG //
// #include<iostream>
// using namespace std;
// class A
// {  int money;
// public:
//    A(int m)
//    {
//       money=m; 
//    }

// void operator-()
// {
//     money=-money;
//     cout<<"Operator overloaded"<<endl;
// }
// void show()
// {
//     cout<<"Value="<<money<<endl;
// }
// };
// int main()
// { A a(125);
//   a.show();
//   -a;
//   a.show();  
//   return 0;   
// }

// #include<iostream>
// using namespace std;
// class A
// {
//   int measurement;
//   public:
//   A(int m)
//   {
//      measurement=m;
//   }

//   void operator ++()
//   { measurement=++measurement;
//      cout<<"Operator overloaded"<<endl;
//   }

//   void display()
//   {
//     cout<<"Measurement="<<measurement<<endl;
//   }

// };
// int main()
// { A a(15000);
//   a.display();
//   ++a;
//   a.display();
//   return 0;
// }

// #include<iostream>
// using namespace std;
// class A
// { string str1,str2,str3;
//   public:

//   A(string a,string b)
//   { str1=a;
//     str2=b;
//   }

//   void operator +()
//   { str3=str1+str2;
//     cout<<"Operator overloaded!"<<endl;
//   }
  
//   void display()
//   {
//     cout<<"string="<<str3<<endl;
//   }

// };
// int main()
// { A a("Manthan","Pratik");
//   +a;   
//   a.display();
//   return 0;
// }

// BINARY OPERATOR OVERLOADING //

// #include<iostream>
// using namespace std;
// class A
// {
//   int x;
//   public:
//   A(int a)
//   { 
//      x=a;
//   }

//   void display()
//   {
//     cout<<"Value of x="<<x<<endl;
//   }

//   friend A operator -(A obj1,A obj2);
// };

// A operator -(A obj1,A obj2)
// {  A temp(0);
//   temp.x=obj1.x-obj2.x;
//   return temp;
// }

// int main()
// { A a1(10),a2(10),a3(0);
//   a3=a1-a2;
//   a3.display();
//   return 0;
// }

// #include<iostream>
// using namespace std;
// class Distance
// { int meter;
//   public:
//   Distance(int x)
//   {
//      meter=x;
//   }
   
//   void display()
//   {
//     cout<<"value="<<meter<<endl;
//   }
//   friend Distance operator+(Distance d1,Distance d2);

// };
//   Distance operator+(Distance d1,Distance d2)
// { Distance temp(0);
//   temp.meter=d1.meter+d2.meter;
//   return temp;
// }
//   int main()
//   { Distance a1(10),a2(20),a3(0);
//     a3=a1+a2;
//     a3.display();
//     return 0;
// }

// RELATIONAL OPERATOR OVERLOADING //

// #include<iostream>
// using namespace std;
// class A
// {
//   int age;
//   public:

//   A(int num)
//   {
//     age=num;
//   }

//   bool operator==(A a)
//   {
//     if(age==a.age)
//      return true;
//      else 
//      return false;
//   } 
// };

// int main()
// { A g(100);
//   A h(23);
//   A i(23);
//   if(g==h)
//   cout<<"g and h are Equal"<<endl;
//   else
//   if(g==i)
//   cout<<"g and i are Equal"<<endl;
//   else
//   if(i==h)
//   cout<<"i and h are Equal"<<endl;
//   else 
//   cout<<"Not Equal"<<endl;
//   return 0;
// }

