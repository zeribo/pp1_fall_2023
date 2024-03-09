#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n; cin >> n;
    n--;

    string one; cin >> one;
    int s_size = one.size();

    string arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    set<char> st;
    for(char i : one)
    {
        int count = 0;
        for(string j : arr)
        {
            for (char k : j)
            {
                if(k == i)
                {
                    count++;
                    break;
                }
            }
        }

        if(count == n)
        {
            st.insert(i);
        }
    }

    if(st.empty()) 
    {
        cout << "NO COMMON CHARACTERS";
        return 0;
    }

    for (char i : st) cout << i << ' ';
}