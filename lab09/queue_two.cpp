#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    int k;

    //cout << endl;
    queue<string> q;
    while(n--)
    {
        cin >> k;
        if (k == 1)
        {
            cin >> s;
            q.push(s);
        }
        if (k == 2 && !q.empty())
        {
            q.pop();
        }

        if (!q.empty()) cout << q.front() << endl;
        else cout << "queue is empty" << endl;
    }
}