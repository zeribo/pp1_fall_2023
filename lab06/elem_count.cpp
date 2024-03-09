//#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <vector>


using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr1[n];
    int arr2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i]; 
    }

    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i]; 
    }


    set<int> set1;
    for(int i = 0; i < n; i++) 
    {
        set1.insert(arr1[i]);
    }

    //set<int> set2;
    //for(int i = 0; i < n; i++) 
    //{
    //    set2.insert(arr2[i]);
    //}

    vector<int> vec1(set1.begin(), set1.end());
    //vector<int> vec2(set2.begin(), set2.end());

    int vec_len = vec1.size();
    //out << endl;
    //for (int i : vec1)
    //    cout << i << " ";
    //cout << endl;

    int count1[vec_len];
    for (int i = 0; i < vec_len; i++)
    {
        int sum1 = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr1[j] == vec1[i])
            {
                sum1++;
            }
        }
        count1[i] = sum1;
    }

    int count2[vec_len];
    for (int i = 0; i < vec_len; i++)
    {
        int sum2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr2[j] == vec1[i])
            {
                sum2++;
            }
        }
        count2[i] = sum2;
    }

    //for (int i : count1)
    //{
    //   cout << i << " ";
    //}
    //cout << endl;

    //for (int i : count1)
    //{
    //    cout << i << " ";
    //}
    //    cout << endl;


    int total = 0;
    for (int i = 0; i < vec_len; i++)
    {
        if (count1[i] <= count2[i]) total += count1[i];
        else total += count2[i];
    }

    cout << total << endl;

}