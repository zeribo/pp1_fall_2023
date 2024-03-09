#include <iostream>

using namespace std;
int main()
{
    int n, k, sum;
    cin >> n;
    cin >> k;

    sum = n + (k % 100 % 10 + k / 100);

    cout << sum << endl;

    
    

}