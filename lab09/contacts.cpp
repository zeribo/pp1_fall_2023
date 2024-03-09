#include <bits/stdc++.h>

using namespace std;

// задача Е

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

    for (string i : arr) s.insert(i);

    int sum = 0;
    for (string i : s)
    {
        int check = 0;
        for (string j : arr)
        {
            if (i == j)
            {
                check++;
            }
        }
        if (check == 3) sum++;
    }

    cout << sum << endl;
    
}