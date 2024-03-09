#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, y;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }

    cin >> x;
    cin >> y;

    for (int i = 0; i < x; i++) cout << v[i] << ' ';
        
    cout << y << ' ';

    for (int i = x; i < n; i++) cout << v[i] << ' ';


}