#include <bits/stdc++.h>


//https://codeforces.com/problemset/problem/2227/B
//May/14/2026 04:58UTC+5.5	hahaharshilpp	2227B - Party Monster	C++20 (GCC 13-64)	Accepted	46 ms	100 KB

using namespace std;


int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        string s; cin >> s;
        
    
        int x = 0; int y = 0;

        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                x++;
            }else{
                y++;
            }
        }

            if(x == y){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
    }

    return 0;
}
