#include <bits/stdc++.h>

using namespace std;

bool pali(int arr[], int n);

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    sort(arr, arr+n);

    //for (int i : v) cout << i << ' ';
    do 
    {
        if (pali(arr, n))
        {
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << ' ';
            }
            return 0;
        }
    } while (next_permutation(arr, arr + n));

    cout << "Impossible";

}

bool pali(int arr[], int n)
{
    for (int i = 0, j = n - 1; i <= n / 2; i++)
    {
        if (arr[i] != arr[j]) return 0;
        j--;
    }

    return 1;
}