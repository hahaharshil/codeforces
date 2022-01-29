#include <bits/stdc++.h>

using namespace std;

int main(){
  int k,n,w; cin >> k >> n >> w;
  int sum = 0;
  for(int i = 0; i <= w; i++){
    sum += k * i;
  }
  int needsToBorrow = sum - n;
  if(needsToBorrow <= 0){
    cout << 0 << endl;
  }else{
    cout << needsToBorrow << endl;
  }
  return 0;
}
