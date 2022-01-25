//139548066	Dec/16/2021 21:06UTC+5.5	hahaharshilpp	A - Way Too Long Words	GNU C++20 (64)	Accepted	15 ms	0 KB
//https://codeforces.com/contest/71/problem/A


#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    int n;

    cin >> n;

    for(int i = 0; i < n; i++){
        cin >> s;

        if(s.length() > 10){
            cout << s[0] << s.length() - 2 << s[s.length() - 1] << endl;
        }else{
            cout << s << endl;
        }

    }
    return 0;
}