//144400506	Jan/29/2022 14:19UTC+5.5	hahaharshilpp01:24	1631A - Min Max Swap	GNU C++20 (64)	Accepted	31 ms	0 KB
//https://codeforces.com/problemset/problem/1631/A

#include <bits/stdc++.h>

using namespace std;

int main(){
  int n; cin >> n;
  for(int i = 0; i < n; i++){
    int l; cin >> l;
    vector<int> v;
    vector<int> m;
    for(int i = 0; i < l; i++){
      int num; cin >> num;
      v.push_back(num);
    }
    for(int i = 0; i < l; i++){
      int num; cin >> num;
      m.push_back(num);
    }
    vector<int> a;
    vector<int> b;

    for(int i = 0; i < l; i++){
      if(v[i] < m[i]){
        a.push_back(m[i]);
        b.push_back(v[i]);
      }else{
        b.push_back(m[i]);
        a.push_back(v[i]);
      }
    }
    cout << *max_element(a.begin(), a.end()) * *max_element(b.begin(), b.end())<< endl;
  }

	return 0;
}
