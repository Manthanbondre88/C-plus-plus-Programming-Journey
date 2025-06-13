// #include<iostream>
// #include<cstring>
// using namespace std;
// class String
// {  char a[100];
// public:

//    String(const char s[])
//    {
//      strcpy(a,s);
//    }

//    void display()
//    {
//     cout<<"String="<<a<<endl;
//    }

// };
// int main()
// { String s1("Manthan");
//   s1.display();  
//   String s2("Pratik");
//   s2.display();
//   return 0;
// }

// CONCENTRATION //
// #include<iostream>
// #include<cstring>
// using namespace std;

// class String
// { char str[100];
// public:
//    String(){}
//   String(char s[])
// { 
//     strcpy(str,s);
// }   

// String operator +(String s)
// {  String temp;
//    strcpy(temp.str,str); 
//    strcat(temp.str,s.str);
//    return temp;
// }

// void display(){
//     cout<<"string after joining="<<str<<endl;
// }

// };

// int main()
// { String s1("Manthan");
//   String s2("Pratik");
//   String s3;
//   s3 = s1+s2;
//   s3.display();
//   return 0;
// }

// COMPARING TWO STRINGS //

#include<iostream>
#include<cstring>
using namespace std;

class String
{ char a[100];
  char b[100];
  public:

  String(){}
  String(String s1,String s2)
  {
    strcpy(a,s1);
  }
  
  
  

};