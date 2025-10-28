#include <iostream>
using namespace std;

string ArrayEqualCheck(int arr1[], int arr2[], int size)
{
    int matchCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr1[i] == arr2[i])
        {
            matchCount++;
        }
    }
    if (matchCount == size)
        return "(The two arrays match)\ntrue";
    else
        return "(The two arrays does not match)\nfalse";
}

int main()
{
    while (true)
    {

        int size;
        cout << "Please enter the size of the arrays that you want to compare: ";
        cin >> size;

        int arr1[size], arr2[size]; // works in GCC comiler, we can replace the size with a constant value if needed
        cout << "Please enter two arrays of " << size << " integers each.\n";

        cout << "Array 1:\n";
        for (int i = 0; i < size; i++)
        {
            cin >> arr1[i];
        }
        cout << "Array 2:\n";
        for (int i = 0; i < size; i++)
        {
            cin >> arr2[i];
        }

        cout << ArrayEqualCheck(arr1, arr2, size) << endl;

        char choice;
        cout << "\nDo you want to compare again? (y/n): ";
        cin >> choice;

        if (choice == 'n' || choice == 'N')
        {
            break;
        }

        cout << endl;
    }
    return 0;
}