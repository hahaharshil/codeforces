//139677142	Dec/18/2021 00:53UTC+5.5	hahaharshilpp	A - Anton and Danik	GNU C++20 (64)	Accepted	15 ms	200 KB
//https://codeforces.com/contest/734/problem/A



#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin >> n;
    string results; cin >> results;
    
    int A = 0,D = 0;
    for(int i = 0; i < n; i++){
        if(results[i] == 'A'){
            A++;
        }else{
            D++;
        }
    }

    if(A < D){
        cout << "Danik" << endl;
    }else if(A == D){
        cout << "Friendship" << endl;
    }else{
        cout << "Anton" << endl;
    }

}
