//142171376	Jan/10/2022 17:03UTC+5.5	hahaharshilpp	A - Word	GNU C++20 (64)	Accepted	30 ms	0 KB
//https://codeforces.com/contest/59/problem/A

#include <bits/stdc++.h>
using namespace std;

int main(){
  string s; cin >> s;
  int upper = 0; int lower = 0;
  for (int i = 0; i < s.size(); i++){
    if(isupper(s[i])){
      upper++;
    }else{
      lower++;
    }
  }
  if(upper == lower){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
  }else if(upper < lower){
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout << s << endl;
  }else{
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout << s << endl;
  }
  return 0;
}
