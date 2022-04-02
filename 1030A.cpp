//https://codeforces.com/problemset/problem/1030/A
//152492460	Apr/02/2022 18:35UTC+5.5	hahaharshilpp	1030A - In Search of an Easy Problem	GNU C++20 (64)	Accepted	15 ms	0 KB

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;

    int sum = 0;

    for(int i = 0; i < n;i++){
        int a; cin >> a;
        sum += a;
    }
    
    if(sum > 0)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;
    
    return 0;
}