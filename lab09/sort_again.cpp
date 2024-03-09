#include <bits/stdc++.h>

using namespace std;

bool compare(int a, int b);

// Задача В


int main()
{
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];
        

    sort(arr, arr+n, compare);

    for (int i : arr) cout << i << ' ';

    cout << endl;
 
}


bool compare(int a, int b)
{
    int first = a % 2;
    int second = b % 2;

    return (first == 0 && a > b) || (second != 0 && a < b);
}

