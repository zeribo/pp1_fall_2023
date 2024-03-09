#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int area[n];

    for(int i = 0; i < n; i++)
    {
        int j = i;
        int k = i;

        int len = 1;
        while(j--)
        {
            if (arr[j] >= arr[i]) len++;
            else break;
        }

        while (++k < n)
        {
            if (arr[k] >= arr[i]) len++;
            else break;
        }

        area[i] = len;
    }

    int calculate[n];
    for (int i = 0; i < n; i++)
    {
        calculate[i] = area[i] * arr[i];
    }
    
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        if (calculate[i] > max) max = calculate[i];
    }

    cout << max;
}