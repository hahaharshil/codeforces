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