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