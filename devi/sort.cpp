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

    for (int i = 0; i < n; i++)
    {
        int min = i;
        int temp;
        for (int j = i+1; j < n; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j; 
            }

        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp; 
    }

    
    for (int i = n-1; i >= 0; i--)
    {
        cout << arr[i] << ' ';
    }
}   