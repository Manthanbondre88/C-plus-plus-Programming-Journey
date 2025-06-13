// DEFAULT CONSTRUCTOR//

// #include<iostream>
// using namespace std;
// class A
// { public:
//   A()
//   {
//     cout<<"Object created syccessfully!"<<endl;
//   }

// };

// int main()
// { A a;
//   return 0;  
// }

// #include<iostream>
// using namespace std;
// class Employee
// {  int salary;
//    public:
//    Employee()
//    {
//      salary=50000;
//    }
  
//    void show()
//    {
//     cout<<"Salary="<<salary<<endl;
//    }
// };

// int main()
// {  Employee e;
//    e.show();
//    return 0;
// }

// PARAMETERIZED CONSTRUCTOR
// #include<iostream>
// using namespace std;
// class BOOK
// { int price;
//   public:
//   BOOK(int p)
//   {
//     price=p;
//   }

//   void show()
//   {
//     cout<<"Price="<<price<<endl;
//   }
// };

// int main()
// { BOOK b(25000);
//   b.show();
//   return 0;  
// }

// #include<iostream>
// using namespace std;
// class Pizza
// {  string size;
//    string topping,coldDrink;
// public:
//    Pizza(string s,string t,string c)
//    {  size=s;
//     topping=t;
//     coldDrink=c; 
//    }
   
//    void showOrder()
//    {
//     cout<<"Pizza details are as:-"<<endl;
//     cout<<"Size="<<size<<endl;
//     cout<<"Topping="<<topping<<endl;
//     cout<<"Colddrink="<<coldDrink<<endl;
//    }
// };

// int main()
// {
//   Pizza p("medium","paneer","Pepsi");
//   p.showOrder();
//   return 0;
// }

// FUNCTION OVERLOADING //
// #include<iostream>
// using namespace std;
// class Laptop
// { int price;
//   string brand;
// public:
  
//   Laptop()
//   {
//     price=23000;
//     brand="unknown";
//   }

//   Laptop(int p,string b)
//   { price=p;
//     brand=b;
//   }

//   void showdetails()
//   {
//     cout<<"price="<<price<<" Brand="<<brand<<endl;
    
//   }

// };

// int main()
// { Laptop l;
//   l.showdetails();
//   Laptop k(30000,"Dell");
//   k.showdetails();
//   return 0;
// }

// COPY CONSTRUCTOR //
// #include<iostream>
// using namespace std;
// class A
// { int x;
//  public:
//     A(int m)
//     { x=m;
//     }

//     A(A &a)
//     {
//       x=a.x;
//     }
  
//    void show()
//    {
//      cout<<"Value of x="<<x<<endl;
//    } 
// };

// int main()
// { A m (100);
//   m.show();
//   A k(m);
//   k.show();
//   return 0;  
// } 

// DYNAMIC CONSTRUCTOR //
// #include<iostream>
// using namespace std;
// class Employee
// {
//   int *age;
//   public:
//   Employee(int m)
//   { age=new int;
//     *age=m;
//   }
 
//   void show()
//   {
//     cout<<"Value of age="<<*age<<endl;
//   }
  
//   ~Employee()
//   {
//     delete age;
//   }
  
// };
// int main()
// { Employee e(100);
//   e.show();
//  return 0;
// }

// #include<iostream>
// using namespace std;
// class A
// { string *a;
//   public:

//   A(string s)
//   { a=new string;
//     *a=s;
//   }

//   void display()
//   {
//     cout<<"String="<<*a<<endl;
//   }

//   ~A()
//   {
//     delete a;
//     cout<<"Destructor has deleted the memory!"<<endl;
//   }
// };
// int main()
// { A b("Jai Shri Ram!");
//   b.display();
//   return 0;
// }


