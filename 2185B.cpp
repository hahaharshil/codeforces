 #include <bits/stdc++.h>

//358521976 	Jan/18/2026 20:28UTC+5.5 	hahaharshilpp 	2185B - Prefix Max 	C++20 (GCC 13-64) 	Accepted 	46 ms 	0 KB 

using namespace std;

int main(){
	int t; cin >> t;
	while(t--){

		int n; cin >> n;

		vector<int> v;

		int maxindex = 0;
		int maxval = 0;

		for(int i = 0; i < n; i++){
			int a; cin >> a;
			if(a > maxval){
				maxval = a;
				maxindex = i;
			}
			v.push_back(a);
		}


		// swap(v[0], v[maxindex]);


		cout << n*maxval << endl;
	}
}

