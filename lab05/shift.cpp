#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
    string s;
    cin >> s;
    int len = s.length();

    for (int i = 0; i < len; i++)
    {
        int n = (int)s[i] + 1;

        if (s[i] != 'z')
        {
            s[i] = (char)n;
        }
        else s[i] = 'a';
    }

    cout << s << endl;
}