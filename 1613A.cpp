#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    for(int i = 0; i < n; i++){
        int a,b,c,d;cin >> a >> b >> c >> d;
        
        int power = a*(pow(10,b));
        int power2 = c*(pow(10,d));
        
        if(power < power2) cout << "<" << endl;
        else if(power > power2) cout << ">" << endl;
        else cout << "=" << endl;
    }
    return 0;
}