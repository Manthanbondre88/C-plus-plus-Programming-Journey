// take input from user and print it 
#include<iostream>
using namespace std;
int main()
{
    char A[100];
    char B[100];
  cout<<"enter your name";
  cin.getline(A,100);
  cout<<"your name is" <<A<<endl;
  cout<<"enter your girlfreind name ";
  cin.getline(B,100);
  cout<<"your girlfreind name is "<<B<<endl;
  return 0;

}