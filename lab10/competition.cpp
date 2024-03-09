#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; 
    cin >> n;

    pair<string, int> p1[n];
    pair<string, int> p2[n];

    string arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p1[i].first;
        cin >> p1[i].second;
        
        cin >> p2[i].first;
        cin >> p2[i].second;
        
    }

    for(int i = 0; i < n; i++)
    {
        arr[i] = p1[i].first + to_string(p1[i].second) + p2[i].first + to_string(p2[i].second);
    }

    bool index[n];

    for (int i = 0; i < n; i++) index[i] = 0;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] == arr[i])
            {
                 index[i] = 1;
            }
        }
    }

    pair<string, int> sorted[n];

    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (index[i] == 0)
        {
            string s = p1[i].first + " and " + p2[i].first + ' ';
            sorted[j].first = s;
            sorted[j].second = p1[i].second + p2[i].second;
            j++;
        }
    }

    sort(sorted, sorted+j);

    for (int i = 0; i < j; i++)
    {
        cout << sorted[i].first << sorted[i].second << endl;
    }
}

