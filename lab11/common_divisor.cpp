#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, k;
    cin >> a >> b >> k;
    int small;
    if (a <= b) small = a;
    else small = b;

    vector<int> v;
    for(int i = 1; i <= small; i++)
    {
        if(a % i == 0 && b % i == 0)
        {
            v.push_back(i);
        }
    }

    cout << v.end()[-k];


}