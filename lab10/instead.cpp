#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0, rev = n-1; i < n; i++)
    {
        if (arr[rev] == arr[i]) cout << "OK" << endl;
        else cout << "Instead of " << arr[i] << " here was " << arr[rev] << endl;
        rev--;
    }
}