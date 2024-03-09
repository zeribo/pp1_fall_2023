#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int len = s.length();
    s.push_back('0');

    int new_len = len+1;

    //cout << s << " test1" << endl;

    for(int i = 0; i < 26; i++)
    {
        char n = 'a' + i;
        s[len]= n;

        int j = 0;
        int check = 0;

        while(j < new_len)
        {
            if (s[j] == s[new_len - j - 1])
            {
                check++;
            }
            j++;
        }

        //cout << "test2 " << check << " " << new_len << endl;

        if (check == new_len)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;

    //cout << s << endl;
}