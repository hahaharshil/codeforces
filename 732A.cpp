//https://codeforces.com/contest/732/problem/A
//not done
#include <bits/stdc++.h>

using namespace std;

int main(){
	int k,r;cin >> k >> r;
	for(int i = 1; i >= 0;i++){
		if(k*i%10 == 0 ||k*i%10 == r){
			cout << i << endl;
			return 0;
		}
	} 
}



