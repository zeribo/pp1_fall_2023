#include <bits/stdc++.h>
using namespace std;

// Задача L

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    for (int i = 0, k = n - 1; i < n; i++, k--)
    {
        if (s[i] != s[k])
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

}