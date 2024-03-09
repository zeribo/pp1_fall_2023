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

    for (int i = 0; i < n; i++)
    {
        int x = i;
        for (int j = i+1; j < n; j++)
        {
            if (v[j] < v[x]) x = j;
        }

        int temp;
        temp = v[i];
        v[i] = v[x];
        v[x] = temp;
    }

    for (int i : v) cout << i << " ";
    
    cout << endl;
}