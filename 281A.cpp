//144433373	Jan/29/2022 20:27UTC+5.5	hahaharshilpp	281A - Word Capitalization	GNU C++20 (64)	Accepted	30 ms	0 KB
//https://codeforces.com/problemset/problem/281/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	string s; cin >> s;
	string change;

	if(islower(s[0])){
		s[0] = toupper(s[0]);
		cout << s << endl;
	}else{
		cout << s << endl;
	}
	return 0;
}

