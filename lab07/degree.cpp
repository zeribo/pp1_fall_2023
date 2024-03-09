#include <bits/stdc++.h>
using namespace std;

// Задача A

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 1 << endl;
        return 0;
    }

    int x = 2;
    for (int i = 1; i < n; i++)
    {
        x = 2 * x;
    }

    cout << x << endl;
}