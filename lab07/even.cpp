#include <bits/stdc++.h>
using namespace std;

// Задача F

int main()
{
    string s;
    cin >> s;

    int len = s.length();

    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if ((s[i] - '0') % 2 == 0)
            count++;
    }

    cout << count << endl;
}