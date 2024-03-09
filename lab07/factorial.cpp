#include <bits/stdc++.h>
using namespace std;

// Задача G

int main()
{
    int n;
    cin >> n;

    int x = 1;;
    for (int i = 1; i <= n; i++)
    {
        x = x * i;
    }

    cout << x << endl;
}