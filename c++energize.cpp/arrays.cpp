// 1 dimensional array 
// basics of initializing and working with arrays

// #include<iostream>
// using namespace std;

//     int main()
// {   int arr[5],i;         //you can here make the size of array as constant like- const size =5;
//                          //      And initialize it as this-                      int array[size];
//     for(i=0;i<=4;i++) 
//     {   
//         cout<<"Enter the elements "<<i+1<<" of array"<<endl;
//         cin>>arr[i];
//     }

//     for(i=0;i<=4;i++)
//     {
//         cout<<arr[i]<<endl;
//     }

//     return 0;
// }

// sum of elements of the array
// #include<iostream>
// using namespace std;

// int main()
// {   
//     const int size =6;
//     int arr[size],i,sum=0;

//     for(i=0;i<=5;i++)
//     {
//         cout<<"Enter the "<<i+1<<" Element of the array!"<<endl;
//         cin>>arr[i];
//         sum+=arr[i];
//     }

//     cout<<"The sum of all array elements = "<<sum<<endl;
//     return 0;
// }    

// 2 dimensional array
// #include<iostream>
// using namespace std;

// int main()
// { 
//    const int row = 4;
//    const int col = 5;
//    int arr[row][col],i,j;

// for(i=0;i<row;i++)
// {
//        for(j=0;j<col;j++)
//     {
//         cout<<"Enter the value of ["<<i<<"]"<<"["<<j<<"]="<<endl;
//         cin>>arr[i][j];
//     }  
// }

// for(i=0;i<row;i++)
// {
//       for(j=0;j<col;j++)
//     {
//        cout<<arr[i][j]<<" ";
//     }
//     cout << endl;
// }
   
// return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//    char arr[]={"ma"};///doubt
//     cout<<sizeof(arr)<<endl;
//     return 0;
// }

// linear search 
// #include<iostream>
// using namespace std;
// int linearsearch(int arr[],int sz,int target)
// {   for(int i=0;i<=sz;i++)
//     {
//         if(arr[i]==target)
//         {
//             return i;
//         }
//         return -1;//it means value not found
//     }
    
// }

// int main()
// {   int arr[]={10,20,30,40,50};
//     int sz=5;
//     int target=100;

//     cout<<linearsearch(arr,sz,target)<<endl;
//      return 0;
// }

