#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n = 5;

    queue<int> q;

    int arr[n] = {1, 3, 2, 7, 5};

    for (int i = 0; i < n; i++)
    {
        q.emplace(arr[i]);
    }

    while (!q.empty())
    {
        cout << q.front() << ' ';
        q.pop();
    }
}