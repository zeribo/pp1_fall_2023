#include <bits/stdc++.h>

using namespace std;

bool check_prime(int n);

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0) arr[i] = arr[i] * -1;
    }

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(check_prime(arr[i])) 
        {
            count++;
            //cout << arr[i];
        }
    }

    cout << count << endl;
}

bool check_prime(int n) 
{
    bool is_prime = true;

    if (n == 1 || n == 0) 
    {
        is_prime = false;
    }

    for (int i = 2; i <= n / 2; ++i) 
    {
        if (n % i == 0) 
        {
            is_prime = false;
            break;
        }
    }

    return is_prime;
}