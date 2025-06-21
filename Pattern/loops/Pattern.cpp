#include <iostream>
using namespace std;

int main()
{
    int n = 4;

    // Square Pattern(n);
    // for (int i = 1; i <= n; i++)
    // {

    //     for (int j = 1; j <= n; j++)
    //     {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }

    // Rectangle Pattern(n);
    for (int i = 1; i <= 3; i++)
    {

        for (int j = 0; j <= n; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}