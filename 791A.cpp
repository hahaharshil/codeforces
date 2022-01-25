//139678667	Dec/18/2021 01:15UTC+5.5	hahaharshilpp	A - Bear and Big Brother	GNU C++20 (64)	Accepted	15 ms	0 KB
//Source https://codeforces.com/contest/791/problem/A
//Date 17 dec 2021

#include <bits/stdc++.h>

using namespace std;

int main(){
   int l,b;
   cin >> l >> b;
   int years = 0;

    while(l <= b){
        l *= 3;
        b *= 2;
        years++;
    }
    cout << years << endl;
}
