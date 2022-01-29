#include <bits/stdc++.h>

using namespace std;

int main(){
	string s; cin >> s;
	int n = s.length();
	int sum = 0;
	char initpos = 'a';

	for(int i = 0; i < n; i++){
		if(abs(initpos - s[i]) <= 13){
			sum += abs(int(s[i]) - int(initpos));
		}else{
			sum += 26 - abs(int(initpos) - s[i]);
		}
		initpos = s[i];
	}
	cout << sum << endl;
	return 0;
}
