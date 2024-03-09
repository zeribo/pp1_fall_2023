#include <bits/stdc++.h>
using namespace std;

// Задача J

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    int sum = 0;

    for (int i = 0; i < n; i++)
        sum += (s[i] - '0') / 2;

    cout << sum << endl;
}