#include <bits/stdc++.h>

using namespace std;

bool by_value(pair<int, int> a, pair<int, int> b);
bool by_index(pair<int, int> a, pair<int, int> b);

int main()
{
    int n;

    cin >> n;

    vector<pair<int, int>> p;

    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin >> a >> b;
        int c = a+b;
        p.push_back(make_pair(c, i));
    }
    
    //cout << endl;

    //cout << p[44].first << ' ' << p[220].first << endl;

    sort(p.begin(), p.end(), by_value);

    for (int i = 0; i < n; i++)
    {
        int y_len = 0;
        int start = 0;
        for (int j = i+1; j < n; j++)
        {
            if (p[j].first == p[j-1].first)
            {
                start = j-1;
                break;
            }
            else break;
        }

        for (int j = i+1; j < n; j++)
        {
            if (p[j].first == p[j-1].first)
            {
                y_len++;
            }
            else break;
        }

        if (y_len > 0)
        {
            sort(p.begin()+start, p.begin()+start+y_len+1, by_index);
        }


    }

    for (int i = 0; i < n; i++)
    {
        cout << p[i].second+1 << ' ';
    }

    cout << endl;

    

}




bool by_value(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}

bool by_index(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

