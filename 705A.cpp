#include <bits/stdc++.h>

using namespace std;

// 329946384 	Jul/20/2025 13:49UTC+5.5 	hahaharshilpp 	705A - Hulk 	C++20 (GCC 13-64) 	Accepted 	62 ms 	100 KB

int main(){
	int n; cin >> n;
	bool last = 0;
	
	for(int i = 1; i < n; i++){
		if(last == 0){
			cout << "I hate that ";
			last = 1;
		}else{
			cout << "I love that ";
			last = 0;
		}
	}
	if(last == 1){
		cout << "I love it" << endl;
	}else{
		cout << "I hate it" << endl;
	}
		
	return 0;
}
	
