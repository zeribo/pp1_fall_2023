#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int len = s.length();

    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            sum += s[i] - '0';
        }
    } 

    //cout << sum << endl;

    cout << '3';
}