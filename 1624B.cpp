//https://codeforces.com/problemset/problem/1624/B
//150646798	Mar/24/2022 01:26UTC+5.5	hahaharshilpp	1624B - Make AP	GNU C++20 (64)	Accepted	77 ms	0 KB

#include <bits/stdc++.h>
using namespace std;

bool isposs_to_make_no_by_multiply(int old,int ne){
    if(old != 0 && ne == 0) return false;
    if(ne < old) return false;
    return ((ne % old) == 0);
}

int main(){
	int t; cin >> t;
	for(int z = 0; z < t;z++){
		int a,b,c; cin >> a >> b >> c;
		vector<int> d(3);
		d[0] = b - a;
		d[1] = c - b;
		d[2] = c - a;

		int new_c = b + d[0];
		if(isposs_to_make_no_by_multiply(c,new_c)){
			cout << "yes" << endl;
			continue;
		}

		int new_a = b - d[1];
		if(isposs_to_make_no_by_multiply(a,new_a)){
			cout << "yes" << endl;
			continue;
		}

		if(d[2]%2==0){
			int new_b = a + d[2]/2;
			if(isposs_to_make_no_by_multiply(b,new_b)){
			 	cout << "yes" << endl;
				continue;
			}
		}
		cout << "no" << endl;
		}
	return 0;
}
