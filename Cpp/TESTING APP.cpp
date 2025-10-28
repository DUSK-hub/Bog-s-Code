#include <iostream>
using namespace std;

void demoStack()
{
    cout << "\n--- STACK DEMO ---\n";
    int a = 10;
    double b = 3.14;
    char c = 'Z';

    cout << "a = " << a << "  | &a = " << &a << endl;
    cout << "b = " << b << "  | &b = " << &b << endl;
    cout << "c = " << c << "  | &c = " << (void *)&c << endl;
}

void demoPointer()
{
    cout << "\n--- POINTER DEMO ---\n";
    int x = 5;
    int *p = &x;

    cout << "x = " << x << "      | &x = " << &x << endl;
    cout << "p = " << p << " | &p = " << &p << endl;
    cout << "*p = " << *p << "   (value pointed by p)\n";
}

void demoDynamicArray()
{
    cout << "\n--- DYNAMIC ARRAY DEMO (HEAP) ---\n";
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int *arr = new int[n]; // allocated in HEAP
    for (int i = 0; i < n; i++)
    {
        arr[i] = i + 1;
    }

    cout << "Array values & addresses:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "] = " << arr[i]
             << "  |  &(arr[" << i << "]) = " << &arr[i] << endl;
    }

    delete[] arr; // free memory
    cout << "Memory freed with delete[]\n";
}

int main()
{
    int choice;
    while (true)
    {
        cout << "\nWhat do you want to test?\n";
        cout << "1) Stack variables\n";
        cout << "2) Pointers\n";
        cout << "3) Dynamic array (new/delete)\n";
        cout << "0) Exit\n";
        cout << "> ";

        cin >> choice;

        if (choice == 1)
            demoStack();
        else if (choice == 2)
            demoPointer();
        else if (choice == 3)
            demoDynamicArray();
        else if (choice == 0)
            break;
        else
            cout << "Invalid choice.\n";
    }
    return 0;
}
