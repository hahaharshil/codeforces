//144435075	Jan/29/2022 20:45UTC+5.5	hahaharshilpp	617A - Elephant	GNU C++20 (64)	Accepted	15 ms	0 KB
//https://codeforces.com/problemset/problem/617/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;

	vector<int> v = {5,4,3,2,1};
	int i = 0;
	int count = 0;
	while(n > 0){
		if(v[i] <= n){
			n = n - v[i];
			count++;
		}else{
			i++;
		}
	};
	cout << count << endl;
	return 0;
}

