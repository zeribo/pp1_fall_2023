#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> red;
    vector<int> blue;
    vector<int> purple;
    
    int q;
    cin >> q;

    for(int i = 0; i < q; i++)
    {
        string str;
        int a;
        cin >> str >> a;

        if(str == "red")
        {
            red.push_back(a);
        }
        else if(str == "blue")
        {
            blue.push_back(a);
        }
        else{
            purple.push_back(a);
        }
    }

    sort(red.begin(), red.end());
    sort(blue.begin(), blue.end());
    sort(purple.begin(), purple.end());

    
    for(int j = 0; j < red.size(); j++){
        cout << "red" << " " << red[j] << endl;
    }
    for(int j = 0; j < blue.size(); j++){
        cout << "blue" << " " << blue[j] << endl;
    }
    for(int j = 0; j < blue.size(); j++){
        cout << "purple" << " " << purple[j] << endl;
    }
}
