//144448375	Jan/29/2022 23:23UTC+5.5	hahaharshilpp	96A - Football	GNU C++20 (64)	Accepted	30 ms	0 KB
//https://codeforces.com/problemset/problem/96/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	string s; cin >> s;
	int n = s.length() - 7;
	int k = 7;
	for(int i = 0; i <= n; i++){
		int count = 0;
		for(int j = i; j <= i + 6; j++){
			if(s[i] == s[j]){
				count++;
			}
		}
		if(count == 7){
			cout << "YES" << endl;
			return 0;
		}
	}
	cout << "NO" << endl;
	
}

