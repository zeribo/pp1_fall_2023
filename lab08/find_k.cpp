#include <bits/stdc++.h>
using namespace std;

// Задача C

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    int x;
    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;

}