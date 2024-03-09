#include <bits/stdc++.h>
using namespace std;



int main()
{
    //int n;
    //cin >> n;

    int x = 4;
    int arr[x];
    for (int i = 0, j = x - 1; i < x; i++)
    {
        arr[i] = pow(2, j);
        cout << j << ' ';
        j--;
    }
    cout << endl;

    for (int i : arr)
        cout << i << " ";

    cout << endl;

}