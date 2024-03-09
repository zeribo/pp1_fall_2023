#include <iostream>

using namespace std;

int main()

{
    int n;
    cin >> n;
   
    int arr[n];

    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];  
    }


    int k = 0;

    for (int i = 1; i < n; i++)
    {

        if (arr[k] < arr[i])
        {
            k = arr[i];
        }

        
    }

    cout << k << endl;

}
