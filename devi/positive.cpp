#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            count++;
            //cout << arr[i] << ' ';
        }
    }

    cout << count;


}