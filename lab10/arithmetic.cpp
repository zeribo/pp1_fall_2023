#include <bits/stdc++.h>

using namespace std;

bool check_prime(int n);

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) arr[i] = i+1;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < arr[i]; j++)
        {
            cout << arr[i] << ' ';
        }
    }
}