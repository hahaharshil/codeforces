//https://codeforces.com/contest/344/problem/A

#include "bits/stdc++.h"

using namespace std;

int main(){
  int n; cin >> n;
  int noOfGroups = 0;
  int prevMag;
  for(int i = 0; i < n; i++){
    int m; cin >> m;
    if(prevMag != m){
      noOfGroups++;
    }
    prevMag = m;
  }
  cout << noOfGroups << endl;
}
