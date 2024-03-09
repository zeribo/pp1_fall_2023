#include <bits/stdc++.h>
using namespace std;

// Задача B

int main()
{
    int n;
    cin >> n;

    int x = 32;
    long long int arr[x];
    for (int i = 0, j = x - 1; i < x; i++)
    {
        arr[i] = pow(2, j);
        //cout << j << ' ';
        j--;
    }

    int bin[x];
    for (int i = 0; i < x; i++) bin[i] = 0;

    //while 

    for (int i = 0, j = 0; i < x; i++)
    {
        if (j + arr[i] <= n)
        {
            j += arr[i];
            bin[i] = 1;
            
        }
    }

    int f = 0;
    for (int i = 0; i < x; i++)
    {
        if (bin[i] == 1)
        {
            f = i;
            break;
        }
    }

    for (int i = f; i < x; i++)
    {
        cout << bin[i];
    }

    cout << endl;




}