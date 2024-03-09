#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();

    char arr[len];
    arr[0] = s[0];

    int uni = 1;
    int j = 0;
    for (int i = 1; i < len; i++)
    {
        if (s[i] != s[j])
        {
            j = i;
            arr[uni] = s[j];
            uni++;

            //cout << "test1 " << s
        }
    }

    int sum[uni];
    int total;
    for (int i = 0; i < uni; i++)
    {
        total = 0;
        for (int j = 0; j < len; j++)
        {
            if (arr[i] == s[j])
            {
                total++;
            }
        }
        sum[i] = total;
    }

    //cout << uni << "test" << endl;
    int check = 1;
    for (int i = 1; i < uni; i++)
    {
        if (sum[i] == sum[0]) check++;
    }

    if (check == uni)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

}