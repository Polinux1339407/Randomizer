#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int const SIZE = 10;
    srand(time(NULL));
    /*int a = rand() % 10 + 5;
    cout << a << endl;
    a = rand() % 10+5;
    cout << a << endl;
    */

    int arr[SIZE];
    bool alreadyThere;
    for (int i = 0; i < SIZE; )
    {
        alreadyThere = false;
        int newRandomValue = rand() % 20;
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == newRandomValue)
            {
                alreadyThere = true;
                break;
            }
        }
        if (!alreadyThere)
        {
            arr[i] = newRandomValue;
            i++;
        }

    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << arr[i] << endl;
    }
    
}

