#include <iostream>
using namespace std;

int main()
{
    int rnum = rand() % 100 + 1;
    int unum = 0;
    bool en = true;
    string a;

    while (en)
    {
        cout << "Enter a random number between 1 and 100: ";
        cin >> unum;
        if (unum > 100 || unum < 1)
        {
            cout << "Your number is not in range." << endl;
        }
        if (unum < rnum)
        {
            cout << "The random number is higher." << endl;
        }
        else if (unum > rnum)
        {
            cout << "The random number is lower." << endl;
        }
        else
        {
            cout << "You guessed the random number." << endl;
            en = false;
        }
    }
    cout << "Press any key and Enter to exit." << endl;
    cin >> a;
    return 0;
}