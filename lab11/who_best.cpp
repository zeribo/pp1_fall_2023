#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;

    map<string, int> mp;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        string s; cin >> s;
        int n; cin >> n;
        mp[s] += n;

        sum += n;
    }

    
    map<string, int>:: iterator it;

    int mp_size = mp.size();
    pair<float, string> p[mp_size];

    int temp = 0;
    for (it = mp.begin(); it != mp.end(); it++)
    {
        float a = it->second * 100.0 / sum;
        p[temp].first = a;
        p[temp].second = it->first;
        temp++;
    }

    sort(p, p+mp_size);
    for (int i = mp_size-1; i >= 0; i--)
    {
        cout << p[i].second << ' ' << p[i].first << '%' << endl;
    }


}