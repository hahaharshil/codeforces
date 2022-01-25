// 139570020	Dec/17/2021 00:43UTC+5.5	hahaharshilpp	A - Next Round	GNU C++20 (64)	Accepted	30 ms	0 KB
//https://codeforces.com/contest/158/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int k;

    cin >> n >> k;

    int a[n];

    for(int i = 0; i < n; i++){
      cin >> a[i];
    }
    int finalcount = 0;
    for(int i = 0; i < n; i++){
      if (a[i] >= a[k-1] && a[i] != 0){
        finalcount++;
      }
    }
    cout << finalcount << endl;
    return 0;
}
