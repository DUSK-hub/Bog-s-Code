#include <iostream>
using namespace std;

struct student {
    int id;
    char name[50];
};

int main (){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    // Dynamically allocate an array of size n
    int* arr = new int[n];

    return 0;
}