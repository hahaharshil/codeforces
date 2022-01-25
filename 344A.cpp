//142176747	Jan/10/2022 18:02UTC+5.5	hahaharshilpp	A - Magnets	GNU C++20 (64)	Accepted	156 ms	0 KB
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
