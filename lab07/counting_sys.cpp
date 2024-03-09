#include <bits/stdc++.h>

// Задача O

using namespace std;

string knary(int n, int k);

int main()
{
    int n, k;
    cin >> n >> k;

    string s = knary(n, k);

    int len = s.length();

    for (int i = len - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    cout << endl;
    
}

string knary(int n, int k)
{
    string conv;

    map<char, int> charMap;

    for (int i = 0; i <= 9; ++i) 
    {
        charMap[i] = '0' + i;
    }

    for (int i = 0; i < 26; ++i) 
    {
        charMap[i+10] = 'A' + i;
    }

    while (n > 0)
    {
        conv.push_back(charMap[n % k]);
        n = n / k;
    }
    
    return conv;
}
