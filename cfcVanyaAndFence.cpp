// source: https://codeforces.com/contest/677/problem/A
// Date: 17 dec 2021

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