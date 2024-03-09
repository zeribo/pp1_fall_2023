#include <bits/stdc++.h>

using namespace std;

int main()
{
    string n;
    cin >> n;

    vector<char> v;


    for (size_t i = 0; i < n.length(); i++)
    {
        v.push_back(n[i]);
        if (v.size() > 1)
        {
            string s = "  ";
            s[0] = v.end()[-2];
            s[1] = v.end()[-1];

            int num = stoi(s);

            if ((int)sqrt(num) * (int)sqrt(num) == num)
            {
                v.pop_back();
                v.pop_back();
            }
        }
    }

    if (v.empty()) 
    {
        cout << "Stack is empty";
        return 0;
    }
    
    for (auto it = v.rbegin(); it != v.rend(); it++) cout << *it;

    
}