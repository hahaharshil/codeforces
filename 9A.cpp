//https://codeforces.com/contest/9/problem/A
//150615767	Mar/23/2022 19:20UTC+5.5	hahaharshilpp	A - Die Roll	GNU C++20 (64)	Accepted	30 ms	0 KB
#include <bits/stdc++.h>

using namespace std;

int main(){
  int y,w; cin >> y >> w;
  int greater;

  if(y < w)
    greater = w;
  else
    greater = y;

  int prob = 6 - (greater - 1);

  int gcd = __gcd(prob, 6);

  cout << prob/gcd << "/" << 6/gcd << endl;

  return 0;
}
