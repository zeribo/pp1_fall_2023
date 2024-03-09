#include <bits/stdc++.h>

using namespace std;

bool myfunction (int i, int j) 
{
    return (i==j);
}

int main()
{
    int n, m;
    cin >> n >> m;

    //int arr[n+m];

    vector<int> vec1;
    for (int i = 0; i < n; i++) 
    {
        int a;
        cin >> a;
        //arr[i] = a;
        vec1.push_back(a);

    }

    vector<int> vec2;
    for (int i = 0; i < m; i++) 
    {
        int a;
        cin >> a;
        //arr[i] = a;
        vec2.push_back(a);
    }

    //vector<int> v;
    //for (int i : arr) v.push_back(i);

    //cout << endl;
    //for (int i : vec1) cout << i << ' ';
    vec1.erase(unique(vec1.begin(), vec1.end()), vec1.end());
    vec2.erase(unique(vec2.begin(), vec2.end()), vec2.end());

    int len = vec1.size();

    vector<int> new_vec;
    for (int i = 0; i < len; i++)
    {
        new_vec.push_back(vec1[i]);
        if (i < vec2.size())
        {
            new_vec.push_back(vec2[i]);
        }
    }

    new_vec.erase(unique(new_vec.begin(), new_vec.end()), new_vec.end());
    for (int i : new_vec) cout << i << ' ';
    cout << endl;
    //for (int i : vec2) cout << i << ' ';
    //cout << "5 4 5 3 4 2 3";



}