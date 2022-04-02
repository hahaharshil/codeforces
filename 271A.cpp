//https://codeforces.com/problemset/problem/271/A
//150723699	Mar/24/2022 19:57UTC+5.5	hahaharshilpp	271A - Beautiful Year	GNU C++20 (64)	Accepted	30 ms	0 KB

#include <bits/stdc++.h>

using namespace std;

bool checks(int year){
	string s = to_string(year);
	vector <char> v;

	for(int i = 0; i < s.length(); i++){
		v.push_back(s[i]);
	}
	sort(v.begin(),v.end());
	char lastel = v[0];

	for(int i = 1; i < s.length(); i++){
		if(v[i] == lastel){
			return true;
		}
		lastel = v[i];
	}
	return false;
}

int main(){
	int n; cin >> n;
	int m = n + 1;
	while(checks(m)){
		m += 1;
	}
	cout << m << endl;
	return 0;
}
