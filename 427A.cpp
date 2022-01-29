//144042835	Jan/26/2022 13:04UTC+5.5	hahaharshilpp	427A - Police Recruits	GNU C++20 (64)	Accepted	62 ms	0 KB
//https://codeforces.com/problemset/problem/427/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	int sum = 0;
	int crimes = 0;

	for(int i = 0; i < n; i++){
		int a; cin >> a;

		if(a > 0){
			sum = sum + a;
		}else if(a < 0){
			if(sum > 0){
				--sum;
			}else{
				crimes++;
			}
		}
	}
	cout << crimes << endl;
	return 0;
}
