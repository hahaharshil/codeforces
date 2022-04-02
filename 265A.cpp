//149252351	Mar/11/2022 18:17UTC+5.5	hahaharshilpp	A - Colorful Stones (Simplified Edition)	GNU C++20 (64)	Accepted	30 ms	0 KB
//https://codeforces.com/contest/265/problem/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	string s, t; 
	cin >> s >> t;
	int j = 0;
	for(int i = 0; i < t.length(); i++){
		if(t[i] == s[j]){
			j++;
		}
	}
	cout << j + 1 << endl;
}
	
