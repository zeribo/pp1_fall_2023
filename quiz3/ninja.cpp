#include <bits/stdc++.h>

using namespace std;

int main()
{
    char a;
    cin >> a;
    
    string s;
    cin >> s;

    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        if (s[i] != a)
        {
            cout << s[i];
        }
    }


}