//139886553	Dec/19/2021 17:17UTC+5.5	hahaharshilpp	A - Petya and Strings	GNU C++20 (64)	Accepted	30 ms	0 KB
//https://codeforces.com/contest/112/problem/A

#include <bits/stdc++.h>

using namespace std;

int solve(string a, string b){
    for(int i = 0; i < a.length(); i++){
        if(tolower(a[i]) < tolower(b[i])){
            return -1; 
        }else if(tolower(a[i]) > tolower(b[i])){
            return 1;
        }
    }
    return 0;
}

int main(){
    string a; string b; cin >> a >> b;
    cout << solve(a,b) << endl;
    return 0;
}

