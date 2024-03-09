#include <bits/stdc++.h>

using namespace std;

string hexa(int n);

int main()
{
    int n;
    cin >> n;

    string s = hexa(n);

    int len = s.length();

    for (int i = len - 1; i >= 0; i--)
    {
        cout << s[i];
    }
    cout << endl;
    
}

string hexa(int n)
{
    string conv;

    map<char, int> charMap;

    for (int i = 0; i <= 9; ++i) 
    {
        charMap[i] = '0' + i;
    }

    for (int i = 0; i < 5; ++i) 
    {
        charMap[i+10] = 'A' + i;
    }

    while (n > 0)
    {
        conv.push_back(charMap[n % 16]);
        n = n / 16;
    }
    
    return conv;
}
