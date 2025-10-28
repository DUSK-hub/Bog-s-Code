#include <iostream>
using namespace std;

int main (){

// int x = 5;
// cout<<"The value of x is: " << x << endl;
// cout<<"The address of x is: " << &x << endl;

// int* ptr = new int; // dynamically allocate an integer
// *ptr = 10;
// cout<<"The value pointed to by ptr is: " << *ptr << endl;
// cout<<"The address stored in ptr is: " << ptr << endl;



// delete ptr; // free the allocated memory

int *arr,size;
cout<<"Size of Array: "<<endl;
cin>>size;

arr = new int [size];
for (int i = 0; i < size; i++)
{
    cin>>arr[i];
}

cout<<endl;
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}

delete[] arr;

    return 0;
}