//145179495	Feb/05/2022 06:37UTC+5.5	hahaharshilpp	133A - HQ9+	GNU C++20 (64)	Accepted	30 ms	0 KB
//https://codeforces.com/problemset/problem/133/A
#include <bits/stdc++.h>

using namespace std;

int main(){
	string s; cin >> s;
	vector<char> v = {'H', 'Q', '9',};

	for(int i = 0; i < v.size(); i++){
		for(int j = 0; j < s.length(); j++){
			if(s[j] == v[i]){
				cout << "YES" << endl;
				return 0;
			}
		}
	}
	cout << "NO" << endl;
}



