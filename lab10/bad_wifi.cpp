#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    multiset<string> s1;
    multiset<int> s2;

    for (int i = 0; i < n; i++)
    {
        string stu;
        int mark;
        cin >> stu >> mark;

        s1.insert(stu);
        s2.insert(mark);
    }
    
    auto it1 = s1.begin();
    auto it2 = s2.begin();

    while (it1 != s1.end() && it2 != s2.end())
    {
        string p1 = *it1;
        int p2 = *it2;

        cout << p1 << ' ' << p2 << endl;

        it1++;
        it2++;
    }

}