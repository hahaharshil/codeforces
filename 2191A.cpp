#include <bits/stdc++.h>

//359975120 	Jan/26/2026 16:11UTC+5.5 	hahaharshilpp 	2191A - Array Coloring 	C++20 (GCC 13-64) 	Accepted 	31 ms 	0 KB 


using namespace std;

int main(){
	int t; cin >> t; 
	while(t--){
		int n; cin >> n;
		vector<int> v;
		for(int i = 0; i < n; i++)
		{
			int a; cin >> a;
			v.push_back(a);
		}

		int count = 0;

		for(int i = 0; i < n; i++){
			if(v[i]%2 != (i+1) % 2)
				count++;
		}

		cout << (count == 0 || count == n? "YES" : "NO") << endl;

	}
}