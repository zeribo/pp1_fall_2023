#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b);

int main()
{
    int n; cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max = 0;
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            int gc = gcd(arr[i], arr[j]);
            if(gc > max) max = gc;
        }
    }

    cout << max;
}



int gcd(int a, int b)
{
    

}