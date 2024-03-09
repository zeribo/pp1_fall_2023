#include <bits/stdc++.h>

using namespace std;

string Binary(int decimal);

int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) cout << Binary(arr[i]) << endl;
}

string Binary(int decimal) 
{
    if (decimal == 0) {
        return "0";
    }

    vector<int> digits;

    while (decimal > 0) {
        digits.push_back(decimal % 2);
        decimal /= 2;
    }

     
    string binary;
    for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
        binary += std::to_string(*it);
    }

    return binary;
}
