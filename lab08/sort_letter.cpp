#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        s[i] = tolower(s[i]);
    }

    set<char> uni(s.begin(), s.end());

    cout << uni.size() << endl;

    for (char i : uni) cout << i << ' ';
}