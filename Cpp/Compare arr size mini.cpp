#include <iostream>
using namespace std;

string ArrayEqualCheck(int arr1[5], int arr2[5])
{
    for (int i = 0; i < 5; i++)
    {
        if (arr1[i] != arr2[i])
            return "(The two arrays do not match)\nfalse";
    }
    return "(The two arrays match)\ntrue";
}

int main()
{
    int arr1[5], arr2[5];

    cout << "Enter 5 integers for Array 1:\n";
    for (int i = 0; i < 5; i++)
        cin >> arr1[i];

    cout << "Enter 5 integers for Array 2:\n";
    for (int i = 0; i < 5; i++)
        cin >> arr2[i];

    cout << "\n"
         << ArrayEqualCheck(arr1, arr2) << endl;

    return 0;
}
