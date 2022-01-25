//139673603	Dec/18/2021 00:10UTC+5.5	hahaharshilpp	A - Vanya and Fence	GNU C++20 (64)	Accepted	15 ms	0 KB
// source: https://codeforces.com/contest/677/problem/A

#include <bits/stdc++.h>

using namespace std;



int main() {
    int n, h;
    cin >> n >> h;

    int finals = 0;
    for (int i = 0; i < n; i++){
        int a;
        cin >> a;

        if(a > h){
            finals += 2;
        }else{
            finals++;
        }

    }
    cout << finals << endl;
    return 0;
}