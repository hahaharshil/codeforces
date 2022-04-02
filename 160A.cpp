//145179133	Feb/05/2022 06:19UTC+5.5	hahaharshilpp	160A - Twins	GNU C++20 (64)	Accepted	30 ms	0 KB
//https://codeforces.com/problemset/problem/160/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n; cin >> n;
	vector<int> v;
	int total = 0,sum1 = 0,count = 0;
	for(int i = 0; i < n; i++){
		int a;
		cin >> a;
		v.push_back(a);
		total += a;
	}
	int half = total/2;
	sort(v.begin(),v.end(), greater<int>());
	for(int i = 0; i < n; i++){
		sum1 += v[i];
		count++;
		if(sum1 > half){
			break;
		}
	}
	cout << count << endl;
	return 0;
}
