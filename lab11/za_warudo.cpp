#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s; cin >> s;
    multiset<char> st(s.begin(), s.end());

    int k = 0;
    for(char i : st)
    {
        s[k] = i;
        k++;
    }

    do
    {
        int count = 0;
        for (int i = 0, j = s.size()-1; i < s.size(); i++, j--)
        {
            if(s[i] == s[j]) 
            {
                count++;
            }
        }

        if (count == s.size())
        {
            cout << "ZA WARUDO TOKI WO TOMARE";
            return 0;
        }
    } while (next_permutation(s.begin(), s.begin()+s.size()));

    cout << "JOJO";
    

}