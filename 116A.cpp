#include <bits/stdc++.h>
//145490132	Feb/07/2022 07:35UTC+5.5	hahaharshilpp	116A - Tram	GNU C++20 (64)	Accepted	30 ms	0 KB
	using namespace std;

	int main(){
		int n; cin >> n;
		int maxno = 0;
		int sum = 0;
		for(int i = 0; i < n; i++){
			int a,b; cin >> a >> b;
			sum = sum - a;
			sum = sum + b;
			if(maxno < sum){
				maxno = sum;
			}
		}
	cout << maxno << endl;
	return 0;
}
