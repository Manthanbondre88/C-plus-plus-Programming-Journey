// #include<iostream>
// using namespace std;
// void maximum(int a,int b){
// cout<<((a>b)?"a is greater":"b is greater");  
// }
// int main(){
//     int a,b;
// cout<<"Enter the value of a,b"<<endl;
// cin>>a>>b;
// maximum(a,b);
// }

// #include<iostream>
// using namespace std;

// void square(int num){
//     cout<<"enter the number"<<endl;
//     cin>>num;
//     cout<<""<<num*num;

    
// }
// int main(){
//     int num;
// square(num);
// return 0;
// }  

// #include<iostream>
// using namespace std;

//  int factorial(int n){
//    int fact=1;
//    for(int i=1;i<=n;i++){
//     fact*=i;
//    }
//     return fact;
//     }

//   int main()
//   {
//   cout<<factorial(4)<<endl;
//   cout<<factorial(12)<<endl;
  
//   return 0;
//  }

// #include<iostream>
// using namespace std;
// int sum(int num){
//     int digsum=0;
//     while(num>0){
//     int lastdig;
//     lastdig = num%10;
//     num=num/10;   
//     digsum+=lastdig;       
//     }
//    return digsum;
// }
// int main(){
//     cout<<"The sum= "<<sum(123)<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// void reverse(int num){
//     while(num>0){
//     int lastdigit;
//     lastdigit=num%10; it seperates the last digit by taking modulus and the last digit is the remainder
//     num=num/10; it removes the last digit and the loop works on the previous number
//     cout<<lastdigit;
//     }
//     return;
// }
// int main(){

//   reverse(123);
//   return 0;
// }

// #include<iostream>
// using namespace std;
// int fact(int num){
// int fac=1;
// for(int i=1;i<=num;i++){
// fac=fac*i;
// }
// return fac;
// }
// int main(){
//     int n=8,r=2,result;
//     result=fact(n)/(fact(r)*fact(n-r));
//     cout<<result<<endl;
// return 0;
// }

// #include<iostream>
// using namespace std;
// void checkprime(int num){
//     if(num<=1){
//     cout<<"Not a prime number"<<endl;
//     return;
//     }
//     int count=0;

//     if(num>1){
        
//         for(int i=1;i<=num;i++){
//           if (num%i==0){
//             count++;
//         }
//         }
//     }
//         if(count==2){
//            cout << "It is a prime number"<<endl;
//         }
//         else 
//         cout<<"Not a prime number"<<endl;

// }

// int main(){
//     checkprime(29);
//     return 0;
// }

// #include<iostream>
// using namespace std;

// void maxtwo(int a ,int b){
//     if(a>b){
//  cout<<"The maximum is "<<a<<endl; 
// }
// else 
// cout<<"The maximum is "<<b<<endl; 
// }

// void maxtwof(float a,float b){
// if(a>b){
//  cout<<"The maximum is "<<a<<endl; 
// }
// else 
// cout<<"The maximum is "<<b<<endl; 
// }

// void maxthree(int a,int b,int c){
//     if(a>=b && a>=c){
//         cout<<"The maximum is "<<a<<endl;
//     }
//     else if(b>=a && b>=c){
//         cout<<"The maximum is "<<b<<endl;
//     }
//     else 
//     cout<<"The maximum is "<<c<<endl;
  
// }

// int main(){
//     int choice,a,b,c;
//     cout<<"Press 1 for finding maximum of two integers\nPress 2 for finding maximum of two floats\nPress 3 for finding maximum of 3 integers"<<endl;
//   cout<<"Enter your choice"<<endl;
//   cin>>choice;
  
  
//   switch(choice){
//     case 1:cout<<"Enter two numbers"<<endl;
//            cin>>a>>b;
//           maxtwo(a,b);
//           break; 
  

//     case 2:cout<<"Enter two numbers"<<endl;
//            float fa,fb;
//            cin>>fa>>fb;
//            maxtwof(fa,fb);
//            break;
    
//     case 3:cout<<"Enter three numbers"<<endl;
//            cin>>a>>b>>c;
//            maxthree(a,b,c);
//            break;

//     default:cout<<"Invalid choice\nPlease enter the valid choice"<<endl;       
//     }
//   return 0;  
// }


// #include<iostream>
// using namespace std;
// int square(int a)
// { a=18;
//   cout<<"the square is "<<a*a<<endl;
//   return a;
// }

// int main()
// { int a=square(a);
//   return 0;
// }

// #include<iostream>
// using namespace std;
// string reversestr(string str)
// {   char temp;
//     int n=str.length();
//     for(int i=0;i<=n/2;++i)
//     {
//       temp = str[n-i-1];
//       str[n-i-1]=str[i];
//       str[i]=temp;
      
//     }
//      return str;
// }

// int main()
// {   string str,rev;
//     cout<<"Enter the string"<<endl;
//     cin>>str;
//     rev=reversestr(str);
//     cout<<"The reversed string = "<<rev<<endl;
//     return 0;
// }


// can be written as this
// #include<iostream>
// using namespace std;
// void reversestr(string str)
// {   char temp;
//     int n=str.length();
//     for(int i=0;i<=n/2;++i)
//     {
//       temp = str[n-i-1];
//       str[n-i-1]=str[i];
//       str[i]=temp;
      
//     }
//     cout<<str<<endl;
// }

// int main()
// {   string str;
//     cout<<"Enter the string"<<endl;
//     cin>>str;
//     reversestr(str);
//     return 0;
// }
