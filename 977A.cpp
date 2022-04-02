//144833669	Feb/01/2022 17:38UTC+5.5	hahaharshilpp	977A - Wrong Subtraction	GNU C++20 (64)	Accepted	15 ms	0 KB
//https://codeforces.com/problemset/problem/977/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n, k; cin >> k >> n;

	for(int i = 0; i < n; i++){
		if(k%10 == 0){
			k = k/10;
		}else{
			--k;
		}
	}
	cout << k << endl;
	return 0;
}
