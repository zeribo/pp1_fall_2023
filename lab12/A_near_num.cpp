#include <bits/stdc++.h>

using namespace std;

int main()
{
    
  int n;
  cin >> n;
  int arr[n];
  for(int i = 0; i < n; i++)
  {
     cin >> arr[i]; 
  }
  int k;
  cin >> k;

  int min = arr[0] - k;
  if (min < 0) min = min * -1;
  
  for (int i = 1; i < n; i++)
  {
    int a = arr[i] - k;
    if (a < 0) a = a * -1;
    if (a < min) min = a;
  }

  for (int i = 0; i < n; i++)
  {
    if (arr[i] - k == min || arr[i] - k == min * -1)
    {
      cout << i << endl;
      return 0;
    }

  }
  
}