#include <bits/stdc++.h>

using namespace std;

// Задача Н

int main()
{
    int n;
    cin >> n;

    string arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<string> s;

    for (int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }

    for (string i : s)
    {
        cout << i << ' ';
        for (int j = 0; j < n; j++)
        {
            if (i == arr[j])
            {
                cout << j+1 << endl;
                break;
            }
        }
    }
    
}