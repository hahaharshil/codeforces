//139570924	Dec/17/2021 00:56UTC+5.5	hahaharshilpp	A - Domino piling	GNU C++20 (64)	Accepted	30 ms	0 KB
//https://codeforces.com/contest/50/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){

    int m,n;
    cin >> m >> n;
    if(m*n%2 == 0){
    cout <<   m*n/2 << endl;
    }else{
        cout << m*n/2 << endl;
    }

    return 0;
}