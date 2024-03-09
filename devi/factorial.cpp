#include <iostream>

//
using namespace std;

int main()
{
    int n;
    cin >> n;

    int k = 0;

    for (int i = 1; i <= n; i++)
    {
        k += i;
    }

    cout << k << endl;
}