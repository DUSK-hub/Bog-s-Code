#include <iostream>
#include <stack>
using namespace std;

class Stack {
public:
    int arr[100];
    int topIndex = -1;

    void push(int value) {
        if (topIndex < 99) arr[++topIndex] = value;
    }

    void pop() {
        if (topIndex >= 0) topIndex--;
    }

    int top() {
        if (topIndex >= 0) return arr[topIndex];
        return -1;
    }

    void print() {
        for (int i = 0; i <= topIndex; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
};

int main() {
    Stack st;
    int choice, value;

    while (true) {
        cout << "1. Push\n2. Pop\n3. Top\n4. Print\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                st.push(value);
                break;
            case 2:
                st.pop();
                break;
            case 3:
                cout << "Top element: " << st.top() << endl;
                break;
            case 4:
                st.print();
                break;
            case 5:
                return 0;
            default:
                cout << "Invalid choice. Try again." << endl;
        }
    }
}
