#include <iostream>

using namespace std;

int main()
{
    int n;
    int odd = 0, even = 0; 
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << even << ' ';
    cout << odd;
}