#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++) //&&
    {
        cin >> arr2[i];
    }

    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int a = arr1[i] + arr1[j];
            s.insert(a);
        }
    }

    for (int i = 0; i < m; i++)
    {
        if(s.count(arr2[i]) > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}