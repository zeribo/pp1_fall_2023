#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    unordered_set<int> s;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        s.insert(arr[i]);
    }

    if(s.size() == n) cout << "YES";
    else cout << "NO";

}