#include <bits/stdc++.h>
using namespace std;

// Задача I

int main()
{
    vector<int> v;

    int n;
    do
    {
        cin >> n;
        //cout << n;
        v.push_back(n);
    } while (n != 0);

    int sum = 0;
    for (int i : v) sum += i;

    cout << sum << endl;
}