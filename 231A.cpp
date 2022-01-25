//139548814	Dec/16/2021 21:21UTC+5.5	hahaharshilpp	A - Team	GNU C++20 (64)	Accepted	30 ms	0 KB
//https://codeforces.com/contest/231/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n; // Time for the loop

    int finals = 0;
    int a,b,c;


     for(int i = 0; i < n; i++){

         cin >> a >> b >> c;

         if(a + b + c >= 2){
             finals++;
         }
     }
    cout << finals << endl;
}