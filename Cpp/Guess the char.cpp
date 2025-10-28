#include <iostream>
using namespace std;

int main()
{

    char arr[8] = {'a', 'e', 'c', 'y', 'b', 'k', 'u', 'o'};
    cout << "There's 8 random choosen characters,\nguess a character and if it matches one of them, you win!" << endl;
    char guess;
    cin >> guess;
    bool found = false;
    for (int i = 0; i < 8; i++)
    {
        if (arr[i] == guess)
        {
            found = true;
            break;
        }
    }
    if (found)
        cout << "You Won!!" << endl;
    else
        cout << "You Lost!" << endl;

    return 0;
}