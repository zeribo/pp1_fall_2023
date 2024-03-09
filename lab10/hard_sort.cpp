#include <bits/stdc++.h>

using namespace std;

bool decrease(vector<int>& a, vector<int>& b);

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> v;


    for (int i = 0; i < n; i++)
    {
        vector<int> temp;
        int r_size;
        cin >> r_size;
        temp.push_back(r_size);

        for (int j = 0; j < r_size; j++)
        {
            int num;
            cin >> num;
            temp.push_back(num);
        }
        v.push_back(temp);
        temp.clear();
    }


    //int sum[n];

    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 1; j <= v[i][0]; j++)
        {
            sum += v[i][j];
        }
        v[i].push_back(sum);

    }


    sort(v.rbegin(), v.rend(), decrease);
    
    for (int i = 0; i < n; i++)
    {
        //if()
    }

    int row[n];
    for (int i = 0; i < n; i++)
    {
        row[i] = v[i][0];
    }

    for (int i = 0; i < n; i++)
    {
        v[i].erase(v[i].begin());
    }

    

    //cout << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < row[i]; j++)
        {
            cout << v[i][j] << ' ';
        }
        cout << endl;
    }

}



bool decrease(vector<int>& a, vector<int>& b)
{
    if(a.back() != b.back())
    {
        return a.back() > b.back();
    }
    if(a != b)
    {
        return a > b;
    }
    return a > b;

}
