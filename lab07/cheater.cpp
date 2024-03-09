#include <bits/stdc++.h>

// Задача N 

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] < arr[i-1])
        {
            cout << "cheater" << endl;
            return 0;
        }
    }

    cout << "no" << endl;
}