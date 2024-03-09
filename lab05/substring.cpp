#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s, t;
    cin >> s;
    cin >> t;

    int len_s = s.length();
    int len_t = t.length();

    
    int check = 0;

    //cout << m << "test2" << endl;

    for (int i = 0; i <= len_s - len_t; i++)
    {
        int j;
        for (j = 0; j < len_t; j++)
        {
            if (s[i+j] != t[j]) break;
        }
        if (j == len_t) check = 1;
    }

    if (check == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    //cout << check << "test1" << endl;

}