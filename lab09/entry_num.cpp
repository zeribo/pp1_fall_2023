#include <bits/stdc++.h>

using namespace std;

// задача D


int main()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;

    for (int i : arr)
    {
        if (i == k) sum++;
    }

    cout << sum << endl;
}