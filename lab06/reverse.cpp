#include <iostream>
#include <set>
#include <vector>
#include <cmath>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";

    cout << endl;

}