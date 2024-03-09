#include <iostream>
#include <set>
#include <vector>
#include <cmath>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int arr[4];

    for (int i = 0; i < 4; i++) cin >> arr[i];
    
    int max = arr[0];
    for (int i = 1; i < 4; i++)
        if (arr[i] > max) max = arr[i];

    cout << max << endl;
}