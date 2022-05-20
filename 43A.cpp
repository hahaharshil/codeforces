//https://codeforces.com/problemset/problem/43/A
//

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	
	vector<string> v;
	string a,b;
	
	for (int i = 0; i < n; ++i){
		string s; cin >> s;
		v.push_back(s);
	}
	
	a = v[0];
	
	int x = 0,y = 0;
	
	for(int i = 0; i < n; i++){
		if(v[i] == a){
			x++;
		}
		else{
			y++;
			b = v[i];
		}
	}
	
	if(x > y)
		cout << a << endl;
	else
		cout << b << endl;
}