#include <bits/stdc++.h>

using namespace std;

// задача G

int main()
{
    string s;
    cin >> s;
    int n = s.length();

    vector<char> v;

    int it = 1;
    for (int i = 0; i < n; i++)
    {
        v.push_back(s[i]);

        if (v.end()[-1] == '1' && v.end()[-2] == '1')
        {
            v.pop_back();
            v.pop_back();
        }
    }


    for (char i : v) cout << i;
    

    cout << endl;
}