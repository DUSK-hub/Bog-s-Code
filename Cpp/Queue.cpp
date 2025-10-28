#include <iostream>
using namespace std;

class Queue {
private:
    int arr[5];
    int front, rear;
    int count;  // Track number of elements

public:
    Queue() {
        front = 0;
        rear = -1;
        count = 0;
    }

    void enqueue(int value) {
        if (count < 5) {
            rear = (rear + 1) % 5;  // Wrap around
            arr[rear] = value;
            count++;
        } else {
            cout << "Queue is full!" << endl;
        }
    }

    void dequeue() {
        if (count > 0) {
            front = (front + 1) % 5;  // Wrap around
            count--;
        } else {
            cout << "Queue is empty!" << endl;
        }
    }

    int Front() {
        if (count > 0)
            return arr[front];
        cout << "Queue is empty!" << endl;
        return -1;
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == 5;
    }

    void print() {
        if (count == 0) {
            cout << "Queue is empty!" << endl;
            return;
        }
        
        int idx = front;
        for (int i = 0; i < count; i++) {
            cout << arr[idx] << " ";
            idx = (idx + 1) % 5;  // Wrap around
        }
        cout << endl;
    }
};

int main() {
    Queue q;
    int choice, value;

    while (true) {
        cout << "\n1) Enqueue\n2) Dequeue\n3) Front\n4) Print\n5) Exit\nChoose: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter value: ";
            cin >> value;
            q.enqueue(value);
            break;

        case 2:
            q.dequeue();
            break;

        case 3:
            cout << "Front: " << q.Front() << endl;
            break;

        case 4:
            q.print();
            break;

        case 5:
            q.isEmpty();
            cout << "Empty status checked." << endl;
            break;
        
        case 6:
            q.isFull();
            cout << "Full status checked." << endl;
            break;

        case 7:
            return 0;

        default:
            cout << "Invalid choice!" << endl;
        }
    }
}