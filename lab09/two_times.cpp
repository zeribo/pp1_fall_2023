#include <bits/stdc++.h>

using namespace std;

int check(const vector<int>& vec, int n);

// задача С


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

    cout << check(v, n);
    cout << endl;
}

int check(const vector<int>& vec, int n)
{
    set<int> s;
    for (int i : vec) s.insert(i);

    int sum = 0;
    for (int i : s)
    {
        int occur = 0;
        for (int j : vec)
        {
            if (i == j) occur++;
            if (occur == 2)
            {
                sum++;
                break;
            }
        }
    }

    return sum;

    
}