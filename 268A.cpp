//https://codeforces.com/contest/268/problem/A
//145180247	Feb/05/2022 07:13UTC+5.5	hahaharshilpp	A - Games	GNU C++20 (64)	Accepted	30 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, count = 0; cin >> n;
	vector<int> v;
	vector<int> x;
	
	for(int i = 0; i < n; i++){
		int a,b;
		cin >> a >> b;
		v.push_back(a);
		x.push_back(b);
	}
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(v[i] == x[j]){
				count++;
			}
		}
	}
	cout << count << endl;
	return 0;
}
