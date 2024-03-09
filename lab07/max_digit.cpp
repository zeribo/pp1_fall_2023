#include <bits/stdc++.h>
using namespace std;

// Задача K

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] - '0' > max)
            max = s[i] - '0';
    }

    cout << max << endl;
}