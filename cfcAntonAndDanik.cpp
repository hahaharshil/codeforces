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
