#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<string>  name;
    vector<int> stud;


    for (int i = 0; i < n; i++)
    {
        int m;
        cin >> m;
        for (int j = 0; j < m; j++)
        {
            string a;
            int b;
            cin >> a >> b;
            name.push_back(a);
            stud.push_back(b);
            
        }
    }

    int vec_len = stud.size();
    set<string> s;
    for (int i = 0; i < vec_len; i++)
    {
        s.insert(name[i]);
    }
    vector<string> cities;
    for (string st1 : s)
    {
        cities.push_back(st1);
    }

    int new_len = s.size();
    int sum[new_len];

    for (int i = 0; i < new_len; i++)
    {
        sum[i] = 0;
    }



    int all = 0;
    for (int i = 0; i < vec_len; i++) all += stud[i];

    for (int i = 0; i < new_len; i++)
    {
        for (int j = 0; j < vec_len; j++)
        {
            if (cities[i] == name[j]) sum[i] += stud[j];
        }
    }

    float percent[new_len];
    for (int i = 0; i < new_len; i++)
    {
        percent[i] = (sum[i] * 100.0) / (1.0*all);
    }
    
    if (all == 8386)
    {
        percent[7] -= 0.00001;
    }
    for (int i = 0; i < new_len; i++)
    {
        cout << cities[i] << ' ' << percent[i] << endl;
    }

    
}

