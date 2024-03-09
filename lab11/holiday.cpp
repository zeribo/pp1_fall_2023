#include <bits/stdc++.h>

using namespace std;

int main(){
  string week[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI",  "SAT"};
  string t; int c=0; cin>>t;

  for(int i=0; i<7; i++){
    if(week[i]==t){
      c=i;
      break;
    }

  }
  cout<<7-c;
}
