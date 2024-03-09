#include <bits/stdc++.h>

using namespace std;

// Задача I

int main()
{
    int n;
    cin >> n;

    string arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "new user added" << endl;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                 cout << "user already exists" << endl;
                 break;
            }
            if (j == i-1) cout << "new user added" << endl;
        }
    }
    

    

    cout << endl;
}