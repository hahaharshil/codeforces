#include <bits/stdc++.h>

using namespace std;

int main(){
  int change; cin >> change; //420
  vector<int> v = {500,100,50,20,10,5,2,1};
  int i = 0, count = 0;
  while(change > 0){
    if(v[i] <= change){
      change -= v[i];
      count++;
    }else{
      i++;
    }
  }
  cout << count << endl;
  return 0;
}
