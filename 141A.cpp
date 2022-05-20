//157731709	May/19/2022 22:48UTC+5.5	hahaharshilpp	A - Amusing Joke	GNU C++20 (64)	Accepted	30 ms	1200 KB
//https://codeforces.com/contest/141/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	string a,b,s; cin >> a >> b >> s;

	string c = a + b;

	sort(c.begin(), c.end());
	sort(s.begin(), s.end());


	if(s == c){
		cout << "YES" << endl;
		return 0;
	}

	cout << "NO" << endl;
	return 0;
}
