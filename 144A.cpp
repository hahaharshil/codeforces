#include <bits/stdc++.h>

using namespace std;

//330636103 	Jul/24/2025 20:37UTC+5.5 	hahaharshilpp 	144A - Arrival of the General 	C++20 (GCC 13-64) 	Accepted 	122 ms 	100 KB 

int main(){
	int n; cin >> n;
	int max = 0; int min = 101; int maxin = 0; int minin = 100;
	for(int i = 0; i < n; i++){
		int a; cin >> a; 
		if(a <= min){
			min = a;
			minin = i;
		}
		if(a > max){
			max = a;
			maxin = i;
		}
	}	
	int t = 0;
	int maxswap = 0; int minswap = 0;
	if(maxin > minin){ 
		minswap = (n - minin) - 2;
		maxswap = maxin;
	}else{
		minswap = (n-minin) - 1;
		maxswap = maxin; 
	}
	t = maxswap + minswap;
	cout << t << endl;
	return 0;
}
	
		
		
