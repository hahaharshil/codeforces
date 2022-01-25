//139642342	Dec/17/2021 19:15UTC+5.5	hahaharshilpp	A - Bit++	GNU C++20 (64)	Accepted	15 ms	0 KB
//https://codeforces.com/contest/282/problem/A

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int x = 0;
    for(int i = 0;i < n; i++){
        string inputs;
        cin >> inputs;
        if (inputs == "++X"){
            x++;
        }else if(inputs == "X++"){
            x++;
        }else{
            x -= 1;
        }
    }
    cout << x << endl;
    return 0;
}