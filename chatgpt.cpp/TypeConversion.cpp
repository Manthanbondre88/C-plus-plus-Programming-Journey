// BASIC CONVERSION //
// #include<iostream>
// using namespace std;
// class Distance
// { int meter;
// public:
//  Distance(int m)
//  {
//     meter=m;
//  }

//  operator int()
//  {  
//     return meter;
//  }

// };

//  int main()
//  { Distance d1(100);
//     int x=d1;
//     cout<<"x="<<x<<endl;
//     return 0;
//  }
  
// class TO BASIC //
// #include<iostream>
// using namespace std;
// class Marks
// { int score;
//   public:
//   Marks(int s)
//   {
//     score=s;
//   } 
  
//   operator int()
//   {
//     return score;
//   }

// };

// int main()
// { Marks m1(100);
//   Marks m2(40);
//   int x=m1;
//   int y=m2;
//   cout<<"Student 1="<<x<<endl;
//   cout<<"Student 2="<<y<<endl;  
//   cout<<"Total="<<x+y<<endl;
//   return 0;
// }
   
// CONVERSION USING OPERATOR OVERLOADING // basic to class
// #include<iostream>
// using namespace std;
// class Result
// { int marks;
// public:
//   Result(int m)
//   {
//     marks=m;
//   }

//   operator int()
//   {
//     return marks;
//   }

//   bool operator >(Result r)
//   {
//     if(r.marks>40)
//     return true;
//     else 
//     return false;
//   }

// };

// int main()
// { Result r1(30);
//    int x=r1;  
//   if(x>40)
//   cout<<"Pass"<<endl;
//   else
//   cout<<"Fail"<<endl;
//   return 0;
// }

// CLASS TO CLASS
// #include<iostream>
// using namespace std;
// class Centimeter;
// class Meter
// { float meter;
// public:
//  Meter(float m)
//  {
//     meter=m;
//  }

//  void display()
//  {
//     cout<<"Meter value="<<meter<<endl;
//  }
//  operator Centimeter();

// };


// class Centimeter
// { float centimeter;
// public:
// Centimeter(){}
// Centimeter(float c)
// {
//     centimeter=c;
// }

// void show()
// {
//   cout<<"Centimeter value="<<centimeter<<endl;
// }
// };

//   Meter::operator Centimeter()
//   { 
//    float centimeter=meter*100;
//    return Centimeter(centimeter);
//   }

//   int main()
//   { Meter m1(20.5);
//     m1.display();
//     Centimeter c1=m1;
//     c1.show();
//     return 0;
//   }


















