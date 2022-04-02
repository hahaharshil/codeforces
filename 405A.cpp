//150647915	Mar/24/2022 01:44UTC+5.5	hahaharshilpp	405A - Gravity Flip	GNU C++20 (64)	Accepted	15 ms	0 KB
//https://codeforces.com/problemset/problem/405/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	vector<int> v(n);
	for(int i = 0;i < n;i++){
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	
	for(int i : v){
		cout << i << " ";
	}
	return 0;
}

