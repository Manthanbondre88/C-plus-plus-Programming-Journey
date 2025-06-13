// addition of two numbers using classes and objects

// #include<iostream>
// using namespace std;
// class A{
//     public:
//     int sum;
//     void call(int a,int b){
//         sum=a+b;
//         cout<<sum<<endl;
        

//     }

// };

//  int main(){
//     int a,b;
//     cout<<"enter the value of a and b";
//     cin>>a>>b;
//     A B ;
//     B.call(a,b);

    
//     return 0;

//  }

#include <iostream>
#include <string>
using namespace std;

class Manthan {
public:
    void call(string manthan); // Function declaration
};

// Function definition
void Manthan::call(string manthan) {
    cout << "Hello, " << manthan << "!" << endl;
}

int main() {
    string manthan;
    
    cout << "Write your name here: ";
    cin >> manthan;  // Get user input
    
    Manthan parshvi;
    parshvi.call(manthan);
    
    cout << "Manthan, your Parshvi is calling you!" << endl;

    return 0;
}
