//139679712	Dec/18/2021 01:31UTC+5.5	hahaharshilpp	A - Beautiful Matrix	GNU C++20 (64)	Accepted	30 ms	0 KB
//https://codeforces.com/contest/263/problem/A


#include <bits/stdc++.h>

using namespace std;

int main(){
    int finals;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int num; cin >> num;
            if(num == 1){
                finals = abs(j - 2) + abs(i - 2);
            }
        }
    }
    cout << finals << endl;
    return 0;
}
