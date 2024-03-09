#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    
    int i = 0;
    int check = 0;

    while(i < len)
    {
        if (s[i] == s[len-i-1])
        {
            check++;
        }
        i++;
    }

    //cout << check << "test" << endl;
    if (check == len)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}