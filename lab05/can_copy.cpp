#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() 
{
    string s;
    string t;
    cin >> s;
    cin >> t;
    int len_s = s.length();
    int len_t = t.length();

    int check = 0;

    int j = 0;
    for (int i = 0; i < len_t; i++)
    {
        if (t[i] == s[j])
        {
            j++;
        }
        //cout << j << " test" << endl;
        if (j == len_s)
        {
            check++;
            j = 0;
        }
    }


    //cout << check << " bru" << endl;
    if (check*1.0 == (len_t*1.0) / len_s)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }


}