#include<iostream>
using namespace std;
int main(){
    int a[10],i,n;
    cout<<"enter the value of n"<<endl;
    cin>>n;
    for(i=0;i<=n-1;i++)
    {
        cout<<"enter the array elements"<<endl;
        cin>>a[i];
    }
       cout<<"the reversed array= ";
    for(i=n-1;i>=0;i--)
    {
        cout<<a[i]<<endl;
    }
    
}
 
