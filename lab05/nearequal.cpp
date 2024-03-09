#include <iostream>
#include <string>

using namespace std;

string unique(string str);

int main()
{
    string s,t;
    cin >> s >> t;

    int s_len = s.length();
    int t_len = t.length();

    if (s_len != t_len)
    {
        cout << "NO" << endl;
        return 0;
    }

    string s1 = unique(s);
    //string t1 = unique(t);

    

    int uni_len = s1.length();

    //int sum[uni_len];

    int total_s = 0;
    for (int i = 0; i < uni_len; i++)
    {
        //total_s = 0;
        for (int j = 0; j < s_len; j++)
        {
            if (s1[i] == s[j])
            {
                total_s++;
            }
        }
        //sum[i] = total;
    }

    int total_t = 0;
    for (int i = 0; i < uni_len; i++)
    {
        //total_t = 0;
        for (int j = 0; j < s_len; j++)
        {
            if (s1[i] == t[j])
            {
                total_t++;
            }
        }
        //sum[i] = total;
    }

    //cout << total_s << " t " << total_t << endl;

    if (total_s == total_t)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO";
    }


   





}




string unique(string str)
{
    int len = str.length();
    string newstr;

    int j = 0;
    newstr.push_back(str[0]);
    for (int i = 1; i < len; i++)
    {
        if (str[i] != str[j])
        {
            j = i;
            newstr.push_back(str[j]);   
        }    
    }
    
    return newstr;
}