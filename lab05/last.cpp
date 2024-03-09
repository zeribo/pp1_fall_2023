#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
    string s;
    cin >> s;
    int len = s.length();

    int max = 0;
    for (int i = 0; i < len; i++)
    {
        if (max < (int)s[i])
        {
            max = s[i];
        }
    }

    cout << (char)max << endl;

}