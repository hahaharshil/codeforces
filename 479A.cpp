#include <bits/stdc++.h>
using namespace std;

using ll  = long long;
using vi  = vector<int>;
using vll = vector<long long>;
using pii = pair<int, int>;
using pp  = pair<int, int>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) (int)(x).size()

void solve() {
  vi abc;
  int ans = 1;
  int noofOnes = 0;

  for(int i = 0; i < 3; i++){
      int s;
      cin >> s;

      abc.push_back(s);
    }

  for(int i = 0; i < 3; i++){

    }


   
    if(noofOnes > 2){
        cout << 3 << endl;
        return;
    }

    ans += noofOnes;

    cout << ans << endl;
}




int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t = 1;
    // cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
