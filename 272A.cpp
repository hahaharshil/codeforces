#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int sum = 0;
	
	for(int i = 0; i < n; ++i){
		int a; cin >> a;
		sum += a;
	}
	
	for(int i = 1; i <= 5; ++i){
		if((sum)%(n + 1) != 1)
			cout << i << endl;
	}
}
