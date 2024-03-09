#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x, y; cin >> x >> y;

    int n; cin >> n;

    pair<int, int> coor[n];

    for (int i = 0; i < n; i++)
    {
        cin >> coor[i].first;
        cin >> coor[i].second;
    }

    multimap<int, string> mp;
    for(int i = 0; i < n; i++)
    {
        double dist = pow((coor[i].first - x), 2) + pow((coor[i].second - y), 2);
        dist = sqrt(dist);
        
        mp.insert({dist, to_string(coor[i].first) + ' ' + to_string(coor[i].second)});
    }

    multimap<int, string>::iterator it;
    for(it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->second << endl;
    }

}