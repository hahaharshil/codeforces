#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;

	while(n > 0){
		if(n%10 != 4 || n%10 != 7){
			cout << "NO" << endl;
			return 0;
		}else{
			n -= n/10;
		}
	}
	cout << "YES" << endl;
}


