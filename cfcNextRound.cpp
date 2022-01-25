#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int k;

    cin >> n >> k;

    int a[n];

    for(int i = 0; i < n; i++){
      cin >> a[i];
    }
    int finalcount = 0;
    for(int i = 0; i < n; i++){
      if (a[i] >= a[k-1] && a[i] != 0){
        finalcount++;
      }
    }
    cout << finalcount << endl;
    return 0;
}
