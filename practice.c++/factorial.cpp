#include<iostream>
using namespace std;
int main(){
    int n,fact=1,i;
    cout<<"enter the value of n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    cout<<"the factorial is"<<fact;
 return 0;   
}


