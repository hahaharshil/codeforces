#include <bits/stdc++.h>

using namespace std;

int main(){
  int t; cin >> t;
  for(int i = 0; i < t; i++){
    int n; cin >> n;
    int a,b,c;
    for(int j = 0; j < n; j++){
      for(int k = 0; k < n; k++){
        for(int l = 0; l < n; l++){
          if(j+k+l == n && __gcd(j,k) == l){
            a = j; b = k; c = l;
          }
        }
      }
    }
    cout << a << " " << b << " " << c << endl;
  }
}
