#include <bits/stdc++.h>
using namespace std;



//https://codeforces.com/contest/2227/problem/A
// 374115575	May/10/2026 20:59UTC+5.5	hahaharshilpp	A - Koshary	C++20 (GCC 13-64)	Accepted	31 ms	0 KB


int main(){

    int t; cin >> t;

    while(t--){
        int x, y; cin >> x >> y;

        if(x % 2 == 0 or y % 2 == 0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

}
