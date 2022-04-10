//https://codeforces.com/problemset/problem/148/A
//153277410	Apr/10/2022 14:15UTC+5.5	hahaharshilpp	148A - Insomnia cure	GNU C++20 (64)	Accepted	30 ms	0 KB

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int k,l,m,n,d; cin >> k >> l >> m >> n >> d;

	int count = 0;

	for(int i = 1; i <= d; i++){
		if(i%k == 0 || i%l == 0 || i%m == 0 || i%n == 0)
			count++;
	}
	cout << count << endl;
}



