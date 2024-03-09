#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    string s; cin >> s;

    int s_size = s.size();
    for(int i = 0; i < s_size; i++)
    {
        if((isupper(s[i]) && s[i]+n <= 'Z') || islower(s[i]) && s[i]+n <= 'z')
        {
            s[i] = (char)s[i]+n;
        }
        else
        {
            s[i] = (char)s[i]+n-26;
        }
    }

    cout << s << endl;

}