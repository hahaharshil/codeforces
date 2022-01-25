//139570269	Dec/17/2021 00:46UTC+5.5	hahaharshilpp	A - Watermelon	GNU C++20 (64)	Accepted	62 ms	0 KB
//https://codeforces.com/contest/4/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;

    cin >> n;

    if(n%2 == 0 && n != 2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}