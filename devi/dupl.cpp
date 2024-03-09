#include <iostream>

using namespace std;

int main()
{

    int n;
    int k = 0;
    cin >> n;

    int arr[n];
    


    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long temp[n];


    for (int i = 0; i < n; i++)
    {
        if (arr[i] != arr[i + 1])
            {
                temp[k] = arr[i];
                k++;
            }
    }


    for (int i = 0; i < k; i++)
    {
        cout << temp[i] << ' ';
    }


}