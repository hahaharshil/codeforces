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
