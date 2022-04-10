#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, m; cin >> n >> m;

    vector<int> v = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};

    for(int i = 0; i < v.size(); i++){
        if(v[i] == n && v[i+1] == m){
            cout << "YES" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
}