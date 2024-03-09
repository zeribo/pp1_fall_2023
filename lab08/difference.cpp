#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > max) max = v[i];
    }

    int min = 1000;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < min) min = v[i]; 
    }

    cout << max - min << endl;

}