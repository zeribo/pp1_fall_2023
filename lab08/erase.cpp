#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cin >> x;


    for (int i = 0; i < n; i++)
    {
        if (i != x)
            cout << v[i] << ' ';
    }

}