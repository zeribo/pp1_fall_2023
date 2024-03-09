#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
    int n, x;
    cin >> n;

    int arr1[n];
    //int arr2[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i]; 
    }

    cin >> x;
    //for (int i = 0; i < n; i++)
    //{
    //    cin >> arr2[i]; 
    //}

    for (int i = 0; i < n; i++)
    {
        if (arr1[i] == x)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }

    cout << "No" << endl;



}