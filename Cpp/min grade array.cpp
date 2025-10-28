#include <iostream>
using namespace std;

int main()
{
    int arr[8];
    cout << "Please enter 8 grades: \n";

    for (int i = 0; i < 8; i++)
    {
        cin >> arr[i];
    }
    int min_grade = arr[0];
    int location = 1;

    for (int i = 1; i < 8; i++)
    {
        if (arr[i] < min_grade)
        {
            min_grade = arr[i];
            location = i + 1;
        }
    }

    cout << "The minimum grade = " << min_grade << endl
         << "Location = " << location << endl;
    return 0;
}