#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    int m; cin >> m;
    vector<int> v;

    for(int i = 0; i < n*m; i++)
    {
        int s; cin >> s;
        v.push_back(s);
    }

    int k; cin >> k;

    for(int i = 0; i < n*m; i++)
    {
        if(v[i] > k)
        {
            cout << "Penalty!";
            return 0;
        }
    }

    cout << "No penalty for today.";
}