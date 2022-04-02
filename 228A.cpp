//148752123	Mar/08/2022 08:49UTC+5.5	hahaharshilpp	A - Is your horseshoe on the other hoof?	GNU C++20 (64)	Accepted	30 ms	0 KB
//https://codeforces.com/contest/228/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){
	vector<int> v;
	int count = 0;
	for(int i = 0;i < 4;i++){
		int s;cin >> s;
		v.push_back(s);
	}
	sort(v.begin(),v.end());
	for(int i = 0;i < 4;i++){
		if(v[i] == v[i-1])
			count++;
	}
	cout << count << endl;
}



