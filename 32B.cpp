//https://codeforces.com/problemset/problem/32/B
//150697857	Mar/24/2022 16:10UTC+5.5	hahaharshilpp	32B - Borze	GNU C++20 (64)	Accepted	30 ms	0 KB

#include <bits/stdc++.h>

using namespace std;

int main(){
	string s; cin >> s;

	vector<int> v;
	int b = 0;
	for(int i = 0; i < s.length(); i++){
		if(s[b] == '-' && s[b + 1] == '.'){
			cout << 1;
			b += 2;
		}
		if(s[b] == '-' && s[b+1] == '-'){
			cout << 2;
			b += 2;
		}
		if(s[b] == '.'){
			cout << 0;
			b += 1;
		}
	}
	return 0;
} 
