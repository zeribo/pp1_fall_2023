#include <iostream>

using namespace std;

int main()
{
    int n, k;

    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

  

    k = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[k] < arr[i])
        {
            k = i;
        }
    }

   // cout << arr[k] << 'a' << endl;

    int l = 0;
    for (int i = 1; i < n; i++)
    {

        if (arr[l] > arr[i])
        {
            l = i;
        }
    }

    //cout << arr[l] << 'b' << endl;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[k])
        {
            arr[i] = arr[l];
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }

    
}