#include <bits/stdc++.h> 
using namespace std;

//329939194 	Jul/20/2025 12:54UTC+5.5 	hahaharshilpp 	A - Only One Digit 	C++20 (GCC 13-64) 	Accepted 	77 ms 	0 KB

int minNum(int n){
	n = abs(n);
	int small = 9;
	while(n > 0){
		int digit = n % 10;
		if(digit < small){
			small = digit;
		}
		n /= 10;
	}
	return small;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << minNum(n) << endl;
	}
	return 0;
}
			
