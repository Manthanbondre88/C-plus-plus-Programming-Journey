// Function Template
// #include<iostream>
// using namespace std;
// template<typename T>
// T sum(T a,T b)
// {
//     return a+b;
// }
// int main()
// { cout<<sum<int>(10,20)<<endl;
//   cout<<sum<float>(20.4,12.4)<<endl;
//   cout<<sum<string>("manthan","Pratik");  
// return 0;
// }

// #include<iostream>
// using namespace std;
// template<typename T>
// T getgreaterfunc(T a,T b)
// { if(a>b)
//   {
//     return a;
//   }
//   else return b;
// }
// int main()
// { cout<<"Greater="<<getgreaterfunc(30,40)<<endl;
//   return 0;
// }

// class template 
// #include<iostream>
// using namespace std;
// template<class t>
// class Add
// { public:
//   t a,b;
//    Add( t x, t y)
//   {
//     a=x;
//     b=y;
//   }  

//   int getsum()
//   {
//     return a+b;
//   }
// };
// int main()
// { Add<int>obj1(10,20);
//   cout<<obj1.getsum()<<endl;
//   Add<float>obj2(10.5,12.5);
//   cout<<obj2.getsum()<<endl;
// return 0;
// }

