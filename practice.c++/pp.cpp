// #include<iostream>
// using namespace std;
// class manthan
// {  public:
//     string name,Dob;
//     int age;

//     int takedetails()
//     {  
//    cout<<"Enter your name= "<<endl;
//    cin>>name;
//    cout<<"Enter your date of Birth= "<<endl;
//    cin>>Dob;
//    cout<<"Enter your age= "<<endl;
//    cin>>age;
//    }

//    int printdetails()
//    {
//      cout<<"Printing the details..."<<endl;
//      cout<<"Name= "<<name<<endl;
//      cout<<"Dob= "<<Dob<<endl;
//      cout<<"Age= "<<age<<endl;
//      cout<<"Thankyou!"<<endl;
//    }

// };

// int main()
// {  manthan m;
//   cout<<m.takedetails()<<endl;
//   cout<<m.printdetails()<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// class Abc
// {  public:
//     void printname();
// };

// void Abc::printname()     // the function body is decided out of the class because we dont have what idea i have to write it in 
// {
//   cout<<"My name is manthan"<<endl;
// }

// int main()
//  {   
//    Abc s;
//    s.printname();
//   return 0;
// }


// #include<iostream>
// using namespace std;
//   class Book
// { public:
//   string title,author;
//   float price;
  
//   void getdetails()
//   {
//     cout<<"Enter the title of the book"<<endl;
//     getline(cin,title);
//     cout<<"Enter the author name of the book "<<endl;
// getline(cin,author);
//     cout<<"enter the price of the book"<<endl;
//     cin>>price;
//   }

//   void putdetails();
// };
//  void Book::putdetails()
// {  cout<<"The title of the book= "<<title<<endl;
//     cout<<"The Author of the book= "<<author<<endl;
//     cout<<"The price of the book= "<<price<<endl;

// }

// int main()
// {
//     Book b;
//     b.getdetails();
//     b.putdetails();
// return 0;    
// }

// #include<iostream>
// using namespace std;
// class mobile
// { public:
//    string model;
//    int price;


//    void putdetails()
//    {
//      cout<<"The model= "<<model<<endl;
//      cout<<"The price= "<<price<<endl;
//    }
// };

// int main()
// {
//     mobile m;
//     m.model="234567";
//     m.price=23000;
//     m.putdetails();
//     return 0;
// }


// #include<iostream>
// using namespace std;
// class Rectangle
// { private:
//     int length,breadth;
//    public: 
//     void getdata()
//     {
//         cout<<"Enter the length and breadth"<<endl;
//         cin>>length>>breadth;
//     }

  
//   int area()
//   {
//     return length *breadth;  
//   }  

//   void showarea()
//   {  int show;
//     show=area();
//     cout<<"The area= "<<show<<endl;
//   }
// };

// int main()
// {  Rectangle r;
//     r.getdata();
//     r.area();
//     r.showarea();
// return 0;
// }

// #include<iostream>
// using namespace std;
// class complex
// {  float x;
//    float y;
//    public:
// void input(float m,float n)
// {
//     x=m;
//     y=n;
// }
// void show()
// {
//     cout<<"the real part="<<x<<endl;
//     cout<<"the imaginary part="<<y<<endl;
// }
//   friend complex sum(complex c1,complex c2);
 

// };
// complex sum(complex c1,complex c2)
// {    complex c3;
//      c3.x=c1.x+c2.x;
//      c3.y=c1.y+c2.y;
//      return c3;
// }

// int main()
// {  complex a,b,c;
//     a.input(10,20.5);
//     a.show();
//     b.input(10,12.5);
//     b.show();
//     c=sum(a,b);
//     cout<<"The addition of the this is "<<endl;
//     c.show();

// return 0;
// }

// #include<iostream>
// using namespace std;
// class calculator
// { public: 
//     void showaddition()
//     {
//       cout<<"Addition"<<endl;  
//     }

//   void showsubtraction()
//     {
//         cout<<"subtraction"<<endl;
//     }
  
// };
// int main()
// { calculator c;
// void (calculator::*ptr1)()= &calculator::showaddition; 
// void(calculator::*ptr2)()=&calculator::showsubtraction;
// (c.*ptr1)();
// (c.*ptr2)();
// return 0;
//  } 

// #include<iostream>
// using namespace std;
// class printer
// { public:
//     string name;
//     string getname()
//     {
//         cout<<"Enter your name="<<endl;
//         cin>>name;
//         return name;
//     }

//     void printname(string name)
//     {
//         cout<<"My name is "<<name<<endl;
//     }

// };

// int main()
// {  printer p;
//   void (printer::*ptr1)(string name)= &printer::printname;
//   string n=p.getname();
//   (p.*ptr1)(n);
//    return 0;
// }


                                      //     CONSTRUCTOR    //
//  #include<iostream>
// using namespace std;
// class Vote
// {  int age;
//    public:
//    Vote()  //constructor is basically used to assign values to the data members of the class
//    {
//       age=45;  //default value 
//    }
  
//   void show()
//   {
//     cout<<"Age="<<age<<endl;
//   }
      
// };

// int main()
// {
//     Vote v,m,man;
//     v.show();
//     m.show();
//     man.show();
//     return 0;
// }

                                    //   PARAMETERISED CONSTRUCTOR //
// #include<iostream>
// using namespace std;
// class manthan
// {  int age;
//     public:
//    manthan(int a);
   
//   void display()
//   {
//     cout<<"value="<<age<<endl;
//   } 
 
// };

// manthan::manthan(int a)
// {
//     age=a;
// }
// int main()
// {  manthan m(100);
//    m.display();
//    return 0; 
// }

                                   //  COPY CONSTRUCTOR  //
// #include<iostream>
// using namespace std;
// class manthan
// {
//     int age;
//  public:
//   manthan(int a){
//     age=a;
//   }

//   manthan(manthan &n)
//   {
//     age=n.age;
//   }

//   void display()
//   {
//     cout<<"value of age= "<<age<<endl;
//   }

// };

// int main()
// {  manthan m(100);
//     m.display();
//    manthan k(m);   //constructor ne dusre constructor ko copy kiya h 
//      k.display();
//    manthan p=m;    //constructor ne dusre constructor ko copy kiya h
//      p.display();

// return 0;
// }

                                                    //  DYNAMIC CONSTRUCTOR  //

//  #include<iostream>
//  using namespace std;
//  class employee
//  {
//     string name,*l;
//     int age,*p,size1=3,size2=3;
    
//   public:
//    employee(string s,int a)
//    {  
//         name=s;
//         age=a;
//         l= new string[size1];
//         p=new int [size2]; 
//    }  
//    void input()
//    {  for(int i=0;i<size1;i++){
//      cout<<"Enter the name values="<<endl;
//      cin>>l[i];
//    }
//       for(int i=0;i<size2;i++)
//       {
//         cout<<"Enter the age values="<<endl;
//         cin>>p[i];
//       }
// }

// void output()
// {
//    for(int i=0;i<size1;i++)
//    {
//      cout<<"The name= "<<l[i]<<" Age="<<p[i]<<endl;
   
//    }
// }
// };

// int main()
// {  string m;
//     int a;
//     employee e(m,a);
//     e.input();
//     e.output();
//   return 0;  
// }

