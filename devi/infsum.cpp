#include <iostream>
#include <vector> 
using namespace std;


int main()
{

    vector<int> x;
    
    int z;
    while (cin >> z)
    {
        
        x.push_back(z);
        if (cin.get() == '\n')
        {
            break;
        }
    }

    int size = x.size();
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << x[i] << ' ';
    }



}