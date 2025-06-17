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

// Topic was started again from scratch //

// #include<iostream>
// #include<string>
// using namespace std;

// class Str1
// {
//    string s1;
// public:
//   Str1(string s)
//   {
//     s1=s;
//   }  
  
//   Str1 operator +(Str1 st)
//   { string temp;
//     temp= s1 + st.s1;
//     return Str1(temp); 
//   }

//   friend ostream& operator << (ostream &out, const Str1 Obj) //ostream mtlb outstream which enables chaining 
//   {
//     out << Obj.s1;
//     return out;
//   }

// };

// int main()
// { Str1 st1("Manthan");
//   Str1 st2("Pratik");
//   Str1 st3("");
//    st3=st1+st2;
//   cout<<"String after concentation="<<st3<<endl; 
// }


