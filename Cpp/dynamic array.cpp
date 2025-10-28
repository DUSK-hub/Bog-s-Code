#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of grades: ";
    cin >> n;

    // Dynamically allocate an array to hold the grades
    double* grades = new double[n];

    // Input grades
    cout << "Enter " << n << " grades:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> grades[i];
    }

    // Calculate sum of grades
    double sum = 0.0;
    for (int i = 0; i < n; i++) {
        sum += grades[i];
    }

    // Output the sum
    cout << "Sum of grades: " << sum << endl;

    // Deallocate memory
    delete[] grades;

    return 0;
}